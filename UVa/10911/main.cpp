// Ejercicio de práctica de escritura

/* Forming Quiz Teams, la solución al problema  UVa 10911 */
#include <bits/stdc++.h>

using namespace std;

// Usar variables globales es una mala práctica en programación,
// pero aceptable en el ambito competitivo

int N, target;

double dist[20][20], memo[1 << 16];         // 1 << 16 = 2^16, sabiendo que max N = 8

double matching (int bitmask) {             // Estado DP = máscara de bits
                                            // Inicializamos 'memo' con -1  en la función main
    if (memo[bitmask] > -0.5)               // Este estado ya se ha calculado
        return memo[bitmask];               // basta buscar en la tabla de memo
        
    if (bitmask == target)                  // Todos los estudiantes estan emparejados
        return memo[bitmask] = 0;           // el coste es 0

    double ans = INT_MAX;                   // Inicializar con un valor grande
    int p1, p2;

    for (p1 = 0; p1 < 2 * N; p1++)
        if (!(bitmask & (1 << p1)))
            break;                          // Encontrar el primer bit apagado

    for (p2 = p1 + 1; p2 < 2 * N; p2++)     // Despues intentar emparejar con p1
        if (!(bitmask & (1 << p2)))         // con otro bit p2 también apagado
            ans = min(ans,                  // Elegir el mínimo
                        dist[p1][p2] + matching(bitmask | (1 << p1) | (1 << p2)));

    return memo[bitmask] = ans;     // Guarda el resultado en la tabla y volver
}

int main () {
    int i, j, caseNo = 1, x[20], y[20];
    // freopen("c1.in", "r", stdin); // Archivo de entrada a stdin

    while(scanf("%d", &N), N) {
        for (i = 0; i < 2 * N; i++) 
            scanf("%*s %d %d", &x[i], &y[i]);   // %*s salta los nombres
        for (i = 0; i < 2 * N - 1; i++)         // Crea la tabla de distancia de pares
            for (j = i + 1; j < 2 * N; j++)
                dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);
                // https://www.cplusplus.com/reference/cmath/hypot/
                // https://www.geeksforgeeks.org/hypot-hypotf-hypotl-c/ 

        // Utilizar DP para resolver el emparejamiento perfecto de peso mínimo
        // en un grafo general pequeño
        for (i = 0; i < (1 << 16); i++) memo[i] = -1.0; // fijar los valores a -1
        target = (1 << (2 * N)) - 1;
        printf("Case %d: %.2lf\n", caseNo++, matching(0)); 
    }

    return 0;
}