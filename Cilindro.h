#include <stdio.h>
//bibliotecas padrões 

//essa parte estará acessível ao usuário através do main.


// esse struct serve pra suportar o cilindro, nomeei o formato dele como objeto
typedef struct{
    float Raio;
    float Altura;
    float Area;
    float Volume;
} Objeto;


//esta função irá armazenar a altura
float armazenarAltura();

//esta função irá armazenar o raio
float armazenarRaio();

//esta função irá fazer o cálculo da area
float calcularArea();

//esta função irá fazer o cálculo do volume
float calcularVolume();