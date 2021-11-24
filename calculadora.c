#include <stdio.h>
#include <stdlib.h>

int main()
{
	int esc, quad, ret, tri, soma, div, sub, mult;
	printf("\nCalculadora em C\n");
	printf("\n\nEscolha uma opcao:\n\n[ 1 ] - Area Quadrado\n[ 2 ] - Area Retangulo\n[ 3 ] - Area Triangulo\n[ 4 ] - Somar\n[ 5 ] - Dividir\n[ 6 ] - Subtrair\n[ 7 ] - Multiplicar\n");
	printf("Sua escolha: ");
	scanf("%i", &esc);

	if (esc == 1)
	{
		int q;
		printf("\nTamanho do lado: ");
		scanf("%i", &quad);
		q = quad * quad;
		printf("\nA area total do quadrado e: %i\n", q);
	}
	if (esc == 2)
	{
		int Ar, ar, totalR;
		printf("\nLado maior: ");
		scanf("%i", &Ar);
		printf("\nLado menor: ");
		scanf("%i", &ar)
		totalR = Ar * ar;
		printf("\nA area total e: %i\n", totalR);
		
	}
	if (esc == 3)
	{
		int At, at, bt, ht;
		printf("\nAltura: ");
		scanf("%i", &ht);
		printf("\nBase:");
		scanf("%i", &bt);
		At = bt * ht;
		at = At/2;
		printf("Area do triangulo e: %i\n", at);
	}
	if (esc == 4)
	{
		int Qt, qt, totalq, soma;
		printf("\n--> ");
		scanf("%i", &qt);
		printf("\n--> ");
		scanf("%i", &Qt);
		soma = qt + Qt;
		printf("\nO resultado da soma e: %i\n", soma);
	}

	if (esc == 5)
	{
		int div1, div2, totald;
		printf("--> ");
		scanf("%i", &div1);
		printf("--> ");
		scanf("%i", &div2);
		totald = div1 / div2;
		printf("\nO resultado da divisao e: %i\n", totald);
	}
	
	if (esc == 6)
	{
		int sub1, sub2, totals;
		printf("--> ");
		scanf("%i", &sub1);
		printf("--> ");
		scanf("%i", &sub2);
		totals = sub1 - sub2;
		printf("\nO resultado da subtracao e: %i\n", totals);
	}
	if (esc == 7)
	{
		int mult1, mult2, totalm;
		printf("\n--> ");
		scanf("%i", &mult1);
		printf("\n--> ");
		scanf("%i", &mult2);
		totalm = mult1 * mult2;
		printf("\nO resultado da multiplicacao e: %i\n", totalm);
	}

	return 0;
}
