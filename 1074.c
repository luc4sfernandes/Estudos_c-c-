#include <stdio.h>
 
int main() {
	int n;
	scanf("%d", &n);

	int var[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &var[i]);
	}

	for(int i = 0; i < n; i++){
		if(var[i] % 2 != 0 && var[i] > 0){
			printf("ODD POSITIVE\n");
		}
		
		if(var[i] % 2 != 0 && var[i] < 0){
			printf("ODD NEGATIVE\n");
		}

		if(var[i] % 2 == 0 && var[i] > 0){
			printf("EVEN POSITIVE\n");	
		}	

		if(var[i] % 2 == 0 && var[i] < 0){
			printf("EVEN NEGATIVE\n");
		}
								
		if(var[i] == 0){
			printf("NULL\n");
		}
				
	}
	
    return 0;
}
