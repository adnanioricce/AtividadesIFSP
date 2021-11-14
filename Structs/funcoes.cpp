#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14159265359;
float MenorNumero(float n1,float n2){
    return n1 < n2 ? n1 : n2;
}
float Media(char tipoMedia,float n1,float n2,float n3){    
    if(toupper(tipoMedia) == 'P'){
        return ((n1 * 5) + (n2 * 3) + (n3 * 2));
    }    
    return (n1 + n2 + n3) / 3;
}
float PositivoOuNegativo(float n){
    return n > 0 
        ? 1 : n < 0 
        ? -1 : 0;
}
float CalcularDelta(float a,float b,float c){
    return (b * b) - (4 * a * c);
}
float CalcularVolumeEsfera(float r){    
    return 1.33 * PI * (r * r * r);
}
string VerificarTipoTriangulo(float x,float y,float z){
    if(x == y == z){
        return "Equilátero";
    }
    if(x != y != z){
        return "Escaleno";
    }    
    return "Isósceles";    
}
void ImprimirNumeros(float notas[],int n){
    for(int i = 0;i < n;++i){
        if(i == (n - 1)){
            std::cout << notas[i];
        }
        else {
            std::cout << notas[i] << ", ";        
        }
    }
}
int main(){
    float n1 = 8, n2 = 4,n3 = 7,n4 = -98;    
    float numeros[] = {n1,n2,n3,n4};
    float menorNumero = MenorNumero(n1,n2);        
    std::cout << "Numeros de teste: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << std::endl;
    // ImprimirNumeros(numeros,4);
    std::cout << "Menor numero entre: " << n1 << "," << n2;
    std::cout << " -> " << menorNumero << std::endl;
    float mediaAritmetica = Media('A',n1,n2,n3);    
    float mediaPonderada = Media('P',n1,n2,n3);
    std::cout << "Media aritmetica de um aluno com notas ";    
    std::cout << n1 << ", " << n2 << ", " << n3 << " -> " << mediaAritmetica << std::endl;
    std::cout << "Media ponderada do mesmo aluno -> ";
    std::cout << mediaPonderada << std::endl;    
    float numeroPositivo = PositivoOuNegativo(n1);
    float numeroNegativo = PositivoOuNegativo(n4);
    float zero = PositivoOuNegativo(0);
    std::cout << "Positivo ou negativo:" << std::endl;
    std::cout << "1 -> Positivo" << std::endl;
    std::cout << "-1 -> Negativo" << std::endl;
    std::cout << "0 -> Zero" << std::endl;
    std::cout << "------------" << std::endl;
    std::cout << n1 << " -> " << numeroPositivo << std::endl;
    std::cout << n2 << " -> " << numeroNegativo << std::endl;
    std::cout << 0 << " -> " << zero << std::endl;
    float delta = CalcularDelta(n1,n2,n3);
    std::cout 
    << "delta da expressao 8x^2 + 4x + 7 = 0 " 
    << " -> " << delta
    << std::endl;
    float volumeEsfera = CalcularVolumeEsfera(n2);
    std::cout << "o volume de uma esfera de raio " << n2;
    std::cout << " -> " << volumeEsfera << std::endl;
    string trianguloEquilatero = VerificarTipoTriangulo(n1,n1,n1);
    string trianguloIsoceles = VerificarTipoTriangulo(n1,n2,n1);
    string trianguloEscaleno = VerificarTipoTriangulo(n1,n2,n3);
    std::cout << "Triangulo de lados " << n1 << ", " << n1 << ", " << n1
        << " -> um triangulo " << trianguloEquilatero << std::endl;
    std::cout << "Triangulo de lados " << n1 << ", " << n2 << ", " << n1
        << " -> um triangulo " << trianguloIsoceles << std::endl;
    std::cout << "Triangulo escaleno " << n1 << ", " << n2 << ", " << n3
        << " -> um triangulo " << trianguloEscaleno << std::endl;
    std::cout << "Programa finalizado " << std::endl;
}