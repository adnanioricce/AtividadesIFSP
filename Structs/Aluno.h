#include <string>
#include <iostream>
using namespace std;
struct Aluno
{
    string Nome;
    int Matricula;
    int Nota1;
    int Nota2;
};
Aluno CriarAluno(string nome,int matricula);
void AdicionarNotas(Aluno *aluno,int nota1,int nota2);
Aluno CriarAluno(std::istream &in,std::ostream &out);
float CalcularMedia(Aluno aluno);
