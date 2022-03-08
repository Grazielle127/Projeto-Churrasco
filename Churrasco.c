//Desenvolva uma aplicação que calcule a quantidade de itens para um churrasco//
#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int criancas, adolescentes, homens, mulheres;
	float costela, frango, linguica, arroz, feijao, queijo_coalho, farofa, refri, suco, cerveja;
	
	printf("Insira a quantidade de pessoas por idade: \nCrianças: ");
	scanf("%i", &criancas);
	printf("\nAdolescentes: ");
	scanf("%i", &adolescentes);
	printf("\nHomens: ");
	scanf("%i", &homens);
	printf("\nMulheres: ");
	scanf("%i", &mulheres);
	
	arroz = (criancas * 0.100 + adolescentes * 0.200 + homens * 0.150 + mulheres * 0.150) / 5 + 1;//em pacotes
	feijao = (criancas * 0.100 + adolescentes * 0.200 + homens * 0.150 + mulheres * 0.150) + 1;//em pacotes
	queijo_coalho = (criancas * 4 + adolescentes * 5 + homens * 6 + mulheres * 6);//em unidades
	refri = (criancas * 0.8 + adolescentes * 0.7 + homens * 0.5 + mulheres * 0.6);//em litros
	suco = (criancas * 1 + adolescentes * 2 + homens * 0.4 + mulheres * 0.3);//em litros
	cerveja = (criancas * 0 + adolescentes * 0 + homens * 10 + mulheres * 6);//em latinhas
	costela = (criancas * 0.150 + adolescentes * 0.8 + homens * 1 + mulheres * 1);//em Kg
	frango = (criancas * 0.2 + adolescentes * 0.5 + homens * 0.7 + mulheres * 0.5);//em Kg
	linguica = (criancas * 0.150 + adolescentes * 0.7 + homens * 0.7 + mulheres * 0.5); //em Kg
	farofa = (frango + linguica + costela) / 4; //em pacotes de 1Kg
	
	printf("\nArroz           -> %.0f pacotes.", arroz);
	printf("\nFeijão          -> %.0f pacotes.", feijao);
	printf("\nQueijo coalho   -> %.0f unidades.", queijo_coalho);
	printf("\nRefri           -> %.0f garrafas.", refri);
	printf("\nSuco            -> %.0f litros.", suco);
	printf("\nCerveja         -> %.0f latinhas.", cerveja);
	printf("\nCostela         -> %.1f Kg.", costela);
	printf("\nFrango          -> %.1f Kg.", frango);
	printf("\nLinguiça        -> %.1f Kg.", linguica);
	printf("\nFarofa          -> %.0f pacotes.", farofa);

	return 0;
}
