#include "Aluno.h"

Aluno CriarAluno(std::string nome,int matricula){
    Aluno aluno = Aluno();
    aluno.Nome = nome;
    aluno.Matricula = matricula;
    return aluno;
}
void AdicionarNotas(Aluno *aluno,int nota1,int nota2){
    aluno->Nota1 = nota1;
    aluno->Nota2 = nota2;
}
Aluno CriarAluno(std::istream &in,std::ostream &out){
    string nome = "";
    int matricula = 0;
    int nota2 = 0, nota1 = 0;
    out << "Informe o nome do aluno:" << std::endl;
    in >> nome;
    out << "Informe a matricula do aluno:" << std::endl;
    in >> matricula;
    out << "Informe as duas notas do aluno:" << std::endl;
    out << "Nota 1" << std::endl;    
    in >> nota1;
    out << "Nota 2" << std::endl;    
    in >> nota2;
    Aluno aluno = CriarAluno(nome,matricula);
    AdicionarNotas(&aluno,nota1,nota2);
    return aluno;
}
float CalcularMedia(Aluno aluno){
    return (aluno.Nota1 + aluno.Nota2) / 2;
}