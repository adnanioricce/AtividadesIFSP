#include <iostream>
#include <vector>
#include "Pessoa.h"
Pessoa CriarPessoa(){
    string nome = "";
    string cpf = "";
    float altura = 0.0;
    float peso = 0.0;
    SexoPessoa sexo;
    std::cout << "Informe o seu nome:";
    std::cin >> nome;
    std::cout << std::endl;
    std::cout << "Informe o seu CPF:";    
    std::cin >> cpf;
    std::cout << std::endl;
    std::cout << "Informe o seu peso:";
    std::cin >> cpf;
    std::cout << std::endl;
    std::cout << "Informe a sua altura:";
    std::cin >> altura;
    std::cout << std::endl;
    std::cout << "Informe o seu sexo:";
    int sexoEscolhido;
    std::cin >> sexoEscolhido;
    std::cout << std::endl;
    sexo = sexoEscolhido == 0 
        ? Masculino : sexoEscolhido == 1 
        ? Feminino : Indefinido;
    return Pessoa(nome,cpf,altura,peso,sexo);
}

float CalcularIMC(Pessoa pessoa){
    return pessoa.Peso / (pessoa.Altura * pessoa.Altura);
}
void OrdenarPessoas(std::vector<Pessoa> *pessoas)
{
    for (int i = pessoas->size() - 1; i >= 1; --i) {
        for (int j = 0; i > j; j++) {
            long lCpf = std::stol(pessoas->at(j).CPF);
            long rCpf = std::stol(pessoas->at(j + 1).CPF);
            if(lCpf > rCpf){
                Pessoa temp = pessoas->at(j);
                pessoas->at(j) = pessoas->at(j + 1);
                pessoas->at(j + 1) = temp;
            }
        }
    }
}
Pessoa ProcurarPorCPF(std::vector<Pessoa> pessoas,string cpf){
    int lower = 0;
    int upper = pessoas.size() - 1;
    int meio = 0;
    long cpfAProcurar = std::stol(cpf);
    while(lower <= upper){
        meio = (lower + upper) / 2;
        Pessoa pessoaNoMeio = pessoas.at(meio);        
        if(cpf == pessoaNoMeio.CPF){
            return pessoas.at(meio);
        }
        else if (cpfAProcurar < std::stol(pessoaNoMeio.CPF)){
            upper = meio - 1;
        }else {
            lower = meio + 1;
        }
    }    
}