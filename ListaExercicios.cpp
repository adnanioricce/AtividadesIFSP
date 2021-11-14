#include <iostream>
#include <math.h>
#include <string>
#include <vector>
// Exercicio 1
float Distancia(float x1,float y1,float x2,float y2){
    return sqrt(pow((x2 - x1),2) * pow(y2 - y1,2));
}
// Exercicio 2
int calcularExpressao(int a,int b, int c){
    int r = pow(a + b,2);
    int s = pow(b + c,2);
    return (r + s) / 2;
}
// Exercicio 6
std::string calcularDuracaoEvento(int duracaoEmSegundos){
    float minutos = (float)duracaoEmSegundos / 60.0f;
    float horas = minutos / 60.0f;
    float dias = horas / 24.0f;
    return "Horas: " + (std::to_string(horas))
     + ", Minutos:" + (std::to_string(minutos)) 
     + ", Segundos:" + (std::to_string(duracaoEmSegundos));
}
// Exercicio 7
float custoCarroConsumidor(float custoFabrica){
    return (custoFabrica * (1 + (0.28 + 0.45)));
}

std::string IdentificarParidade(int n){
    return n % 2 == 0 ? "Par" : "Impar";
}

std::string IdentificarSinal(int n){
    return n < 0 ? "Negativo" : "Positivo";
}
// Exercicio 15
std::string IdentificarParidadeESinal(int n){
    return n + " é um numero " + IdentificarParidade(n) + " e " + IdentificarSinal(n);
}
// Exercicio 17
float calcularPesoIdeal(float altura,char sexo){
    if(sexo == 'M'){
        return (72.7 * altura) - 58;
    }
    if(sexo == 'F'){
        return (62.1 * altura) - 44.7;
    }
    return 0.0;
}
// Exercicio 13
int retornarMaiorNumero(std::vector<int> numeros){
    int maiorNumero = 0;
    for (size_t i = 0; i < numeros.size(); i++)
    {
        if(numeros[i] <= maiorNumero)
            continue;            
        
        maiorNumero = numeros[i];
    }
    return maiorNumero;
}