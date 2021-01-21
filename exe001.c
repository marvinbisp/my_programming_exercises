/*
	1 - Faça um algoritmo que leia 30 números e os coloque ordenados no vetor,
	assim que forem digitados pelo usuário.
*/

/*
	Parte lógica

	Tamanho do vetor = 0;

	Se o tamanho do vetor for menor que 30
		Lê número
		Adciona ao vetor
		Ordena o vetor
			[a1, a2, ... , a(n)]
			se a(n + 1) for menor que a(n)
				aux = a(n + 1)
				a(n + 1) = a(n)
				a(n) = aux
		tamanho do vetor aumenta uma unidade
	Se não
		Imprime o vetor ordenado
*/

/*
	Bibliotecas utilizadas

	<stdio.h>
		Para os imputs e outputs do software
*/

#include<stdio.h>

int main()
{
	/* Variáveis */
	int vetor[30], tamanho_do_vetor = 0, i, j, aux;

	/* Script */
	while(tamanho_do_vetor < 30)
	{
		/* Pedimos para o usuário digitar um número */
		printf("Digite um numero: ");
		scanf("%d", vetor[tamanho_do_vetor]);

		/* Se o vetor estiver vazio, não é necessária a ordenação, */
		/* porém se o mesmo tiver ao menos um elemento dentro dele */
		/* a ordenação é necessária                                */
		if (tamanho_do_vetor > 0)
		{
			/* Utilizamos um método básico de ordenação chamado "Bubble Sort" */
			for(i = 0; i < tamanho_do_vetor; i++)
			{
				for (j = 0; j < tamanho_do_vetor; j++)
				{
					/* Se o elemento que está na posição j for maior     */
					/* que o elemento da posição j + 1, a variável       */
					/* auxiliar recebe o valor da posição j, a posição   */
					/* j recebe o valor da j + 1 e então a posição j + 1 */
					/* recebe o valor que está armazenado na auxiliar    */
					if (vetor[j] > vetor[j + 1])
					{
						aux = vetor[j];
						vetor[j] = vetor[j + 1];
						vetor[j + 1] = aux;
					}
				}
			}
		}

		/* A cada ciclo o tamanho do vetor aumenta */
		tamanho_do_vetor++;
	}

	/* Conclusão */
	for(i = 0; i < 5; i++){
		printf("%d ", vetor[i]);
	}

	return 0;
}