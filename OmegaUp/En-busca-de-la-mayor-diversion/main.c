// https://omegaup.com/arena/problem/edm2021n1-diversion/#problems
#include <stdio.h>

int main () {
    long int div = 0;
    int minDiv = 101, n, d;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &d);
        div += d;
        if (d < minDiv)
            minDiv = d; 
    }
    div -= minDiv;
    printf("%ld\n", div);
    return 0;
}
