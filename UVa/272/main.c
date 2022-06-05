// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
#include <stdio.h>

int main () {
    int q = 1;
    char c;
    while(scanf("%c", &c) != EOF)
        if (c == '"') printf("%s", q ? "``" : "''"), q = !q;
        else printf("%c", c);
    return 0;
}
