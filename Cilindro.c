
#include"Cilindro.h"

Objeto Cilindro;

float armazenarAltura(){
    printf("Digite o valor da altura:");
    scanf("%f", &Cilindro.Altura);
    printf("Altura: %.2f\n",Cilindro.Altura);
    
};
float armazenarRaio(){
    printf("Digite o valor do raio:");
    scanf("%f", &Cilindro.Raio);
    printf("Raio: %.2f\n", Cilindro.Raio);
    
};
float calcularArea(){
    Cilindro.Area = 2* 3.14 * (Cilindro.Raio * Cilindro.Raio) + 2 * 3.14 * Cilindro.Altura;
    printf("Area: %.2f\n",Cilindro.Area);
    return Cilindro.Area;
};
float calcularVolume(){
    Cilindro.Volume = 3.14 * (Cilindro.Raio * Cilindro.Raio) * Cilindro.Altura;
     printf("Volume: %.2f\n",Cilindro.Volume);
     return Cilindro.Volume;
}