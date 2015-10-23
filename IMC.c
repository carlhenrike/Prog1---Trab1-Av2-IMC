#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float p, a,imc;
	
	printf("Digite Peso:\n");
	scanf("%f", &p);
	printf("Digite Altura:\n");
	scanf("%f", &a);
	a = a*a;
	imc = p/a;
	
	
	if(imc<=19)
		{
		printf("Voce esta muito magro\n",imc);
	}
	else if(imc>=20&&imc<=25)

	
	{
	   printf("Peso Ideal\n",imc);	
	  	
	}
	
	else if(imc>=26&&imc<=30)
	{
		printf("Acima do peso\n",imc);
	}
	
	else if(imc>=31)
	{
 
		printf("Voce esta obeso\n",imc);
 }
	
	
	
	
	system("pause");
	return 0;
}
