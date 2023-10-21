/*Entendendo o Desafio
 
Agora é a sua hora de brilhar e construir um perfil de destaque na DIO! Explore todos os conceitos explorados até aqui e replique (ou melhore, porque não?) este projeto prático. Para isso, crie seu próprio repositório e aumente ainda mais seu portfólio de projetos no GitHub, o qual pode fazer toda diferença em suas entrevistas técnicas 😎
 
Neste repositório, insira todos os links e arquivos necessários para seu projeto, seja um arquivo de banco de dados ou um link para o template no Figma.
 
Dica: Se o expert forneceu um repositório Github, você pode dar um "fork" no repositório dele para organizar suas alterações e evoluções mantendo uma referência direta ao código-fonte original.
 
Instruções para entrega

# 1️⃣ Desafio Classificador de nível de Herói

**O Que deve ser utilizado**

- Variáveis
- Operadores
- Laços de repetição
- Estruturas de decisões

## Objetivo

Crie uma variável para armazenar o nome e a quantidade de experiência (XP) de um
herói, depois utilize uma estrutura de decisão para apresentar alguma das
mensagens abaixo:

Se XP for menor do que 1.000 = Ferro
Se XP for entre 1.001 e 2.000 = Bronze
Se XP for entre 2.001 e 5.000 = Prata
Se XP for entre 6.001 e 7.000 = Ouro
Se XP for entre 7.001 e 8.000 = Platina
Se XP for entre 8.001 e 9.000 = Ascendente
Se XP for entre 9.001 e 10.000= Imortal
Se XP for maior ou igual a 10.001 = Radiante

## Saída

Ao final deve se exibir uma mensagem:
"O Herói de nome **{nome}** está no nível de **{nivel}**"
Bons estudos*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int xp,nivel;//
   char nome_heroi[] = "roberto souza";
   char categoria_heroi[][15] = {"ferro","bronze","prata","ouro","platina",
   "ascendente","imortal","radiante"};
   xp = 25000;
    if(xp < 1000){
        nivel = 0;
    }
    else if(xp >= 1001 && xp  <= 2000){
        nivel = 1;
    }
    else if(xp >= 2001 && xp <= 5000){
        nivel = 2;
    }
    else if(xp >=6001  && xp <= 7000){
        nivel = 3;
    }
    else if(xp >= 7001 && xp <= 8000){
        nivel = 4;
    }
    else if(xp >= 8001 && xp <= 9000){
        nivel = 5;
    }
    else if(xp >= 9001 && xp <= 10000){
        nivel = 6;
    }
    else if(xp >=10001){
        nivel = 7;
    }
   printf("O Heroi de nome %s esta no nivel de %s\n",nome_heroi,categoria_heroi[nivel]);

    return 0;
}
