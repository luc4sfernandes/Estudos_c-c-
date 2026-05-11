#include <stdio.h>
 
int main() {
	// leia n --> quantidade de entrada	x
	// quantos desses numeros estão em 10 e 20
	// e quantos estão fora entre 10 e 20
	int n;
	scanf("%d", &n);

	int vet[n], in = 0, out = 0;

	for(int  i = 0; i < n; i++){
		scanf("%d", &vet[i]);
		if(vet[i] >= 10 && vet[i] <= 20)
			in++;
		else
			out++;	
	}

	printf("%d in\n", in); 
	printf("%d out\n", out);
    return 0;
}
