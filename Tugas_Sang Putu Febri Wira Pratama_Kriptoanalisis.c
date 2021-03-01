#include <stdio.h>
#include <stdbool.h>

void bilanganPrima(){
	int n, i;
	bool bilangan_prima = true;
	
	printf("Input bilangan: ");
	scanf("%d", &n);
	
	//0 dan 1 bukan bilangan prima
	if(n == 0 || n == 1){
		bilangan_prima = false;
	} else{
		for(i=2;i<=n/2;i++){
			if(n % i == 0){
				bilangan_prima = false;
				break;
			}
		}
	}
	if(bilangan_prima){
		printf("%d adalah bilangan prima", n);
	} else{
		printf("%d adalah bukan bilangan prima", n);
	}
}

int faktorial(int num){
	if(num == 0){
		return 1;
	}
	return num * faktorial(num-1);
}

int gcd(int a, int b){
	int i, hcf;
	for(i=1; i<=a && i<=b; i++){
		if(a%i == 0 && b%i == 0){
			hcf = i;
		}
	}
	
	return hcf;
}

int main(){
	int choose, bilangan, hasil, bil1, bil2;
	
	printf("Nama : Sang Putu Febri Wira Pratama\n");
	printf("NIM : 1808561012\n");
	printf("===================================\n\n");
	printf("1. Check Bilangan Prima\n");
	printf("2. Faktorial\n");
	printf("3. GCD\n");
	printf("Pilih: ");
	scanf("%d", &choose);
	printf("\n");
	
	switch(choose){
		case 1:
			bilanganPrima();
			break;
		case 2:
			printf("Input bilangan: ");
			scanf("%d", &bilangan);
			hasil = faktorial(bilangan);
			printf("Faktorial dari %d adalah %d", bilangan, hasil);
			break;
		case 3:
			printf("Input dua bilangan: ");
			scanf("%d %d", &bil1, &bil2);
			hasil = gcd(bil1, bil2);
			printf("GCD dari %d dan %d adalah %d", bil1, bil2, hasil);
			break;
	}
	
	return 0;
}
