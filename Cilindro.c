// Esta parte não estará acessível para o usuário
#include"Cilindro.h"


//crio um cilindro do tipo ''Objeto''
Objectt Cylinder;

// exibo uma mensagem, armazeno e printo o valor obtido pelo usuário
float storeHeight(){
    printf("Digite o valor da altura:");
    scanf("%f", &Cylinder.Height);
    printf("Altura: %.2f\n",Cylinder.Height);
    
};
// também exibo uma mensagem, armazeno e printo o valor obtido pelo usuário
float storeRadius(){
    printf("Digite o valor do raio:");
    scanf("%f", &Cylinder.Radius);
    printf("Raio: %.2f\n", Cylinder.Radius);
    
};

// Calculo a área utilizando fórmula de cálcular a área do cilindro
float calculateArea(){
    Cylinder.Area = 2* 3.14 * (Cylinder.Radius * Cylinder.Radius) + 2 * 3.14 * Cylinder.Height;
    printf("Area: %.2f\n",Cylinder.Area);
};

// Calculo o volume utilizando fórmula de cálcular o volume do cilindro
float calculateVolume(){
    Cylinder.Volume = 3.14 * (Cylinder.Radius * Cylinder.Radius) * Cylinder.Height;
    printf("Volume: %.2f\n",Cylinder.Volume);
}