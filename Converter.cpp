/* Implemente um sistema que o usuario 
digite um valor em metros (m) e converta para centimetros (cm) 
-- Digite o valor em (m)
-- O valor convertido de X(m) é Y(cm)
*/

#include <stdio.h>

	int main()
	{
	
		float centimetro, metro; // Declaracao de variavel 
		
		printf("Digite o valor em metro: \n"); // Recebe Metro do usuario
		scanf("%f",&metro);  
		
			centimetro = (metro * 100); // Conversao de Metros para Centimentro
			printf("O valor convertido de %f(metro) %f(centimentro)",metro,centimetro );
			
		return 0;
	}
