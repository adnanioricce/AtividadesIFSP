#include "Produto.h"
#include <iostream>
#include <string>
void ProdutoManager::CadastrarProduto(Produto produto){
    this->produtos.push_back(produto);
}
void ProdutoManager::CadastrarProduto(std::istream &in,std::ostream &out){    
    string nome;
    float preco;
    out << "Informe o nome do produto:";
    in >> nome;
    out << std::endl;
    out << "Informe o preco do produto:";
    in >> preco;
    this->produtos.push_back(Produto(nome,preco));
}
Produto ProdutoManager::ProcurarProduto(string codigo){
    for(int i = 0;i < this->produtos.size();++i){
        Produto produto = this->produtos.at(i);
        if(produto.Codigo == codigo){
            return produto;
        }
    }
}
ProdutoManager::ProdutoManager()
{
}

ProdutoManager::~ProdutoManager()
{
    this->produtos.clear();
}
