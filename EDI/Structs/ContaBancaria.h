#include <string>
#include <vector>
using namespace std;
struct ContaBancaria
{
    string CpfCliente;
    string NomeCliente;
    float Saldo;    
    ContaBancaria(string cpf,string nome,float saldoInicial){
        CpfCliente = cpf;
        NomeCliente = nome;
        Saldo = saldoInicial;
    }
};
class Caixa
{
private:
    std::vector<ContaBancaria> contas = {};
public:
    Caixa(std::initializer_list<ContaBancaria> contasIniciais);
    Caixa();
    ~Caixa();
    ContaBancaria CadastrarConta();
    void Depositar(string cpfCliente,float valorDeposito);
    void Sacar(string cpfCliente,float valorSaque);
    ContaBancaria Procurar(string cpf);
};
