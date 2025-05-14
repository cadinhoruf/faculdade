#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int opcao, numero_secreto, palpite;
   printf("Menu Principal\n");
   printf("1. Iniciar Jogo\n");
   printf("2. Ver Regras\n");
   printf("3. Sair\n");
   printf("Escolha uma opção: ");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
      srand(time(0));
      numero_secreto = rand() % 10;
      printf("Digite um numero: ");
      scanf("%d", &palpite);
      if (palpite == numero_secreto)
      {
         printf("Parabens! Voce acertou o número secreto.\n");
      }
      else
      {
         printf("Voce errou o número secreto. O número secreto era %d.\n", numero_secreto);
      }
      break;
   case 2:
      printf("Regras do Jogo:\n");

      break;
   case 3:
      printf("Saindo do Jogo...\n");
      break;
   default:
      printf("Opção inválida.\n");
      break;
   }

   return 0;
}
