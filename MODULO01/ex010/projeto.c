#include <stdio.h>

	float per,sal,imp;
	char c='%';
	
int main (){

	printf("**** CALCULO IMPOSTO DE RENDA****\n\n");
	
	printf("INFORME O SEU SALARIO...:\n");
	scanf ("%f",sal);
	
		if(sal >= 0 && sal <= 2000.00){
	 		imp = sal * 0.00;
	 		per=0;
			 	printf("\n SALARIO....:R$ %.2f \n",sal);
			 	printf("\nIMPOSTO A SER PAGO..: R$ %.2f, VOCE ESTA ISENTO \n",imp);
				printf("\nPERCENTUAL......: %d %c",per,c);
		}
		
		else if (sal >= 2000.01 && sal <= 3000.00){
	 		imp = sal * 0.08;
	 		per=8;
 
			 	printf("\n SALARIO....: R$ %.2f \n",sal);
			 	printf("\nIMPOSTO A SER PAGO..: R$ %.2f,\n",imp);
				printf("\nPERCENTUAL......: %d %c",per,c);
		}
		
		else if (sal >= 3000.01 && sal <= 4000.00){
	 		imp = sal * 0.18;
	 		per=18;
 
			 	printf("\n SALARIO....: R$ %.2f \n",sal);
			 	printf("\nIMPOSTO A SER PAGO..: R$ %.2f,\n",imp);
				printf("\nPERCENTUAL......: %d %c",per,c);
		}
		
		else if (sal >= 4500.00){
	 		imp = sal * 0.28;
	 		per=28;
 
			 	printf("\n SALARIO....: R$ %.2f \n",sal);
			 	printf("\nIMPOSTO A SER PAGO..: R$ %.2f,\n",imp);
				printf("\nPERCENTUAL......: %d %c",per,c);		
		}
		
 return 0;
}