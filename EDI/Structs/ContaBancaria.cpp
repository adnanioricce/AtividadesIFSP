#include "ContaBancaria.h"
#include <initializer_list>
#include <iostream>
#include <string>
using namespace std;
Caixa::Caixa(std::initializer_list<ContaBancaria> contasIniciais){
    this->contas = contasIniciais;
}
Caixa::Caixa(){

}
Caixa::~Caixa(){
    this->contas.clear();
}
ContaBancaria Caixa::CadastrarConta(){
    std::cout << "Informe o seu nome";
    std::cout << std::endl;
    string nome = "";
    std::cin >> nome;
    std::cout << "Informe seu CPF";
    string cpf = "";
    std::cin >> cpf;
    std::cout << std::endl;
    std::cout << "Informe o valor do seu primeiro deposito";
    float valorDeposito = 0.0;
    std::cin >> valorDeposito;
    ContaBancaria conta = ContaBancaria(cpf,nome,valorDeposito);
    this->contas.push_back(conta);
    return conta;
}
ContaBancaria Caixa::Procurar(string cpf){
    for(int i = 0;i < this->contas.size();++i){
        auto conta = this->contas.at(i);
        if(conta.CpfCliente == cpf){
            cpf = conta.CpfCliente;
            return conta;
        }
    }
}
void Caixa::Depositar(string cpfCliente,float valorDeposito){
    ContaBancaria contaBancaria = Procurar(cpfCliente);
    contaBancaria.Saldo += valorDeposito;
    std::cout << contaBancaria.NomeCliente << ", você depositou " << valorDeposito << std::endl;
}
void Caixa::Sacar(string cpfCliente,float valorSaque){
    ContaBancaria contaBancaria = Procurar(cpfCliente);
    contaBancaria.Saldo -= valorSaque;
    std::cout << contaBancaria.NomeCliente << ", você sacou " << valorSaque << std::endl;
}