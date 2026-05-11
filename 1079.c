#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        long double var[3];
        scanf("%Lf %Lf %Lf", &var[0], &var[1], &var[2]);

        long double media = (var[0]*2.0 + var[1]*3.0 + var[2]*5.0) / 10.0;
        //                                                           ^^^^
        //                                              soma dos pesos: 2+3+5

        printf("%.1Lf\n", media);
    }

    return 0;
}
