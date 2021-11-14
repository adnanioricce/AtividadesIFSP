#include <string>
#include <vector>
using namespace std;
enum SexoPessoa { Indefinido, Masculino, Feminino };
struct Pessoa
{
    string Nome;
    string CPF;
    float Altura;
    float Peso;
    SexoPessoa Sexo;
    Pessoa(string nome,string cpf,float altura,float peso,SexoPessoa sexo){
        Nome = nome;
        CPF = cpf;
        Altura = altura;
        Peso = peso;
        Sexo = sexo;
    }
};
Pessoa ProcurarPorCPF(vector<Pessoa> pessoas,string cpf);

Pessoa CriarPessoa();
float CalcularIMC(Pessoa pessoa);
void OrdenarPessoas(vector<Pessoa> *pessoas);
