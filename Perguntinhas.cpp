#include <stdio.h>

int main() {
	int points = 0;
    char question;

   
	printf("1. o que e hardware?\n");
	printf("a)o que voce chuta\n");
	printf("b)e o software do computador\n");
	printf("c)as pecas de um computador\n");
    scanf(" %c", &question);
    	if (question == 'c') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}

   	printf("2. para que serve o paint?\n");
	printf("a)pintar\n");
	printf("b)Desenvolver robos altamente especializados em php\n");
	printf("c)criar uma ia altamente evoluida capaz de sentir emocoes suficientes para sentir odio e aniquilar completamente a raca humana\n");
    scanf(" %c", &question);
    	if (question == 'a') {
        	points++;
    		printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
    
    printf("3. quais sao os 3 principais componentes do pacote office\n");
	printf("a)Excel, Word e Power Point\n");
	printf("b)Netflix, Amazon Prime e Disney Plus\n");
	printf("c)Gabinete, Teclado e Mouse\n");	
    scanf(" %c", &question);
    	if (question == 'a') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
    
    printf("4. O que e usado em uma estrutura de decisao?\n");
	printf("a)Um predio em construcao\n");
	printf("b)If e else\n");
	printf("c)Portugol\n");	
    scanf(" %c", &question);
    	if (question == 'b') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
    
    printf("5. Qual desses NAO é um sistema operacional\n");
	printf("a)Windows\n");
	printf("b)VisualG\n");
	printf("c)Android \n");	
    scanf(" %c", &question);
    	if (question == 'b') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
    
    printf("6. Qual o tipo de sistema utilizado pelo computador para receber e exibir dados\n");
	printf("a) Decimal\n");
	printf("b) Hexadecimal\n");
	printf("c) Binario\n");	
    scanf(" %c", &question);
    	if (question == 'c') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
	
    printf("7. Qual foi a primeira tecnologia que compara e realiza somas inventada?\n");
	printf("a) Cadeira\n");
	printf("b) Computador \n");
	printf("c) Torradeira\n");	
    scanf(" %c", &question);
    	if (question == 'b') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
	
    printf("8. Basicamente, o que é um Anri-virus?\n");
	printf("a) Uma marca de Alcool em Gel\n");
	printf("b) Um golpe de luta\n");
	printf("c) Um softare desenvolvido para a proteção de dados e invasões\n");	
    scanf(" %c", &question);
    	if (question == 'c') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
	
    printf("9. O que significa BIOS?\n");
	printf("a) Sim!\n");
	printf("b) Baralho Imobilizou O Superman\n");
	printf("c) Basic Input Output System\n");	
    scanf(" %c", &question);
    	if (question == 'c') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}
	
    printf("Atualmente existem diversas inteligencias artificiais que demonstram ser bem uteis, uma delas é o chatGPT. foi criado pela OpenAL e lançado recentemente. Com base nas informaçoes passadas, assinale a alternativa que corresponde a data de lancamento do chatGPT\n");
	printf("a) 30 de Novembro de 2022\n");
	printf("b) 14 de Abril de 2019\n");
	printf("c) 28 de Agosto de 2015\n");	
    scanf(" %c", &question);
    	if (question == 'a') {
        	points++;
        	printf("certa a resposta meu caro\n\n");
    	}
    	else {
    		printf("como voce errou?\n");
		}				
    
    printf("Voce acertou %d de 10 perguntas.\n", points);
    return 0;
}
