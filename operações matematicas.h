#include <stdio.h>
#include<math.h>


main(){
	float n1, n2, soma, produto, quadrado, raiz, modulo;
	
	printf("Digite um numero:\n");
	scanf("%f",&n1);
	
	printf("Digite o outro numero:\n");
	scanf("%f",&n2);
	
	soma= n1+n2;
	printf("A soma dos numeros eh:%.1f\n", soma);
	
	produto=n1*(n2*n2);
	printf("o produto do primeiro vezes o quadrado do segundo eh:%.1f\n",produto);
	
	quadrado=n1*n1;
	printf("O quadrado do primeiro eh:%.1f\n",quadrado);
	
	raiz=sqrt((n1*n1)+(n2*n2));
	printf("A raiz quadrada da soma dos quadrados eh:%.1f\n",raiz);
	
	modulo=n1*-1;
	printf(" módulo do primeiro número eh:%.1f\n",modulo);
	
}
