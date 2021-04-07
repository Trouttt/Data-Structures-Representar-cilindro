#include <stdio.h>
//bibliotecas padrões 

//essa parte estará acessível ao usuário através do main.


// esse struct serve pra suportar o cilindro, nomeei o formato dele como objeto
typedef struct{
    float Radius;
    float Height;
    float Area;
    float Volume;
} Objectt;


//esta função irá armazenar a altura
float storeHeight();

//esta função irá armazenar o raio
float storeRadius();

//esta função irá fazer o cálculo da area
float calculateArea();

//esta função irá fazer o cálculo do volume
float calculateVolume();