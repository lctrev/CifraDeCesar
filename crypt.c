#include <stdio.h>
#include <stdlib.h>
int i,a,x;
char str[500];
int main()
{
	printf("\nDigite a mensagem:");
	gets(str);
	printf("\nDigite a chave:");
	scanf("%d", &a);
	printf("\nSelecione as opcoes:\n");
	printf("1 = Criptografar.\n");
	printf("2 = Descriptografar.\n");
	scanf("%d", &x);
	switch(x)
	{
	case 1:
    	for(i = 0; (i < 500 && str[i] != '\0'); i++)
    		str[i] = str[i] + a;

    	printf("\nMensagem criptografada: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 500 && str[i] != '\0'); i++)
        str[i] = str[i] - a;

      printf("\nMensagem descriptografada: %s\n", str);
      break;

   default:
      printf("\nOpcao invalida.\n");
   }
   return 0;
}
