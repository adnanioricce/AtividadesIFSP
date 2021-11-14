#include <string>
#include <vector>
using namespace std;
struct Produto
{
    string Codigo;
    string Nome;
    float Preco;
    Produto(string nome,float preco){
        Codigo = std::to_string(rand() % 324567);
        Nome = nome;
        Preco = preco;
    }
};
class ProdutoManager
{
private:
    std::vector<Produto> produtos = {};
public:
    ProdutoManager();
    ~ProdutoManager();
    void CadastrarProduto(Produto produto);
    void CadastrarProduto(std::istream &in,std::ostream &out);
    Produto ProcurarProduto(string codigo);
};

