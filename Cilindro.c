// Esta parte não estará acessível para o usuário
#include"Cilindro.h"


//crio um cilindro do tipo ''Objeto''
Objeto Cilindro;

// exibo uma mensagem, armazeno e printo o valor obtido pelo usuário
float armazenarAltura(){
    printf("Digite o valor da altura:");
    scanf("%f", &Cilindro.Altura);
    printf("Altura: %.2f\n",Cilindro.Altura);
    
};
// também exibo uma mensagem, armazeno e printo o valor obtido pelo usuário
float armazenarRaio(){
    printf("Digite o valor do raio:");
    scanf("%f", &Cilindro.Raio);
    printf("Raio: %.2f\n", Cilindro.Raio);
    
};

// Calculo a área utilizando fórmula de cálcular a área do cilindro
float calcularArea(){
    Cilindro.Area = 2* 3.14 * (Cilindro.Raio * Cilindro.Raio) + 2 * 3.14 * Cilindro.Altura;
    printf("Area: %.2f\n",Cilindro.Area);
};

// Calculo o volume utilizando fórmula de cálcular o volume do cilindro
float calcularVolume(){
    Cilindro.Volume = 3.14 * (Cilindro.Raio * Cilindro.Raio) * Cilindro.Altura;
    printf("Volume: %.2f\n",Cilindro.Volume);
}