#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1;
    float p2;

    float m;

    printf("Digite o valor da sua p1");
    scanf("%f", &p1);
    printf("digite o valor da sua p2");
    scanf("%f", &p2);

    m = (p1 + p2)/2;

    printf("A sua media é %f/n", m);

 if(m >= 5 ){
    printf("Voce esta aprovado!");
    }
 else{
    printf("Voce esta reprovado :(");
    }
    return 0;
}
