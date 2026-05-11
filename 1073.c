#include <stdio.h>
#include <math.h>
 
int main() {
	int n, var = 1;

	scanf("%d", &n);

	while(var <= n){
		if(var % 2 == 0){
			double base = var, resultado;
			resultado = pow(base, 2.0);

			printf("%d^2 = %0.f\n", var, resultado);
			var++;
		} else {
			var++;
		}
	}
    return 0;
}
