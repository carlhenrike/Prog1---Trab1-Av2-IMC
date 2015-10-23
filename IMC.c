#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float p,a;
	float imc;

	
	printf("Digite Peso:\n");
	scanf("%f", &p);
	printf("Digite Altura:\n");
	scanf("%f", &a);
	
	imc=p/(a*a);
	
	
	if(imc<=19)
		{
		printf("Seu imc e: %.2f\nVoce esta muito magro\n",imc);
	}
	if(imc>=20&&imc<=25)

	
	{
	   printf("Seu imc e: %.2f\nSeu Peso esta Ideal\n",imc);	
	  	
	}
	
	if(imc>=26&&imc<=30)
	{
		printf("Seu imc e: %.2f\n Voce esta Acima do peso\n",imc);
	}
	
	if(imc>=31)
	{
 
		printf("Seu imc e: %.2f\nVoce esta obeso\n",imc);
 }
	
	
	
	
	system("pause");
	return 0;
}
