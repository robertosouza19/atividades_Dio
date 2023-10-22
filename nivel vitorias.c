/******************************************************************************
Instruções para entrega
 # 2️⃣ Calculadora de partidas Rankeadas

**O Que deve ser utilizado**

- Variáveis
- Operadores
- Laços de repetição
- Estruturas de decisões
- Funções

## Objetivo:

Crie uma função que recebe como parâmetro a quantidade de vitórias e derrotas de
um jogador,depois disso retorne o resultado para uma variável, 
o saldo de Rankeadas deve ser feito através do calculo (vitórias - derrotas)

Se vitórias for menor do que 10 = Ferro
Se vitórias for entre 11 e 20 = Bronze
Se vitórias for entre 21 e 50 = Prata
Se vitórias for entre 51 e 80 = Ouro
Se vitórias for entre 81 e 90 = Diamante
Se vitórias for entre 91 e 100= Lendário
Se vitórias for maior ou igual a 101 = Imortal

## Saída

Ao final deve se exibir uma mensagem:
"O Herói tem de saldo de **{saldoVitorias}** está no nível de **{nivel}**"

*******************************************************************************/
#include <stdio.h>
int calcula_saldo_vitorias(int vitorias,int derrotas);
int classificacao(int vitorias);
int main()
{
    char nivel[][14] = {"ferro","bronze","prata","ouro","diamante",
    "lendario","imortal"};
    int vitorias,derrotas;
    vitorias = 41;
    derrotas = 20;
    int saldo_vitorias;
    saldo_vitorias = calcula_saldo_vitorias(vitorias,derrotas);
    printf("O Heroi tem de saldo de %d esta no nivel de %s",saldo_vitorias,nivel[classificacao(vitorias)]);


    return 0;
}
int calcula_saldo_vitorias(int vitorias,int derrotas){
    return vitorias - derrotas;
}
int classificacao(int vitorias){
    if(vitorias <= 10){
        return 0;
    }
    else if(vitorias >= 11 && vitorias <= 20 ){
        return 1;
    }
    else if (vitorias >= 21 && vitorias <= 50){
        return 2;
    }
    else if (vitorias >= 51 && vitorias <= 80){
        return 3;
    }
    else if(vitorias >= 81 && vitorias <= 90){
        return 4;
    }
    else if (vitorias >= 91 && vitorias <= 100 ){
        return 5;
    }
    else if (vitorias >= 101){
        return 6;
    }
    
    
    
    
    
    
    
    
    
    
    
    
}
