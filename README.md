# Programación competitiva 

## Convenciones y atajos recomendables

```cpp
// Convenciones
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000

// Opciones de memset
memset(arr, -1, sizeof arr);    // Iniciar el arreglo en todas las posiciones con -1
memset(arr, 0, sizeof arr);     // Iniciar el arreglo en todas las posiciones con 0

// Atajos
i++;                            // Para simplificar: i = i + 1;
ans = a ? b : c;                // Para simplificar: if (a) ans = b; else ans = c;
ans += val;                     // Para simplificar: ans = ans + val;
index = (index + 1) % n;        // index++; if (index >= n) index = 0;
index = (index + n - 1) % n;    // index--; if (index < 0) index = n-1;
ans = (int)((double) d + 0.5);  // Redondeo al entero más cercano 
ans = min(ans, newValue);       // Mínimo/Máximo
ans <?= newValue;               // Mínimo/Máximo
```