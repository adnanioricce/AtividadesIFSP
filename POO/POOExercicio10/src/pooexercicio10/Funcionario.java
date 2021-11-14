/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pooexercicio10;

/**
 *
 * @author adnan
 */
public class Funcionario {
    private String nome;
    private String codigo;
    private String telefone;
    public Funcionario(String codigo,String nome,String telefone){
        if(IsEmpty(nome)){
            ThrowIllegalArgumentException("nome");
        }
        if(IsEmpty(codigo)){
            ThrowIllegalArgumentException("codigo");
        }
        if(IsEmpty(telefone)){
            ThrowIllegalArgumentException("telefone");
        }
        this.nome = nome;
        this.codigo = codigo;
        this.telefone = telefone;
    }
    public String getCodigo(){
        return this.codigo;
    }
    public String getNome(){
        return this.nome;
    }
    public String getTelefone(){
        return this.telefone;
    }
    @Override
    public String toString(){
        StringBuilder message = new StringBuilder();
        message.append("{");
        message.append("\n 'codigo': '" + this.codigo + "',");
        message.append("\n 'nome': '" + this.nome + "',");
        message.append("\n 'telefone': '" + this.telefone + "'");
        message.append("\n}");
        return message.toString();
    }
    public static String toString(FuncionarioDto dto){
        Funcionario funcionario = new Funcionario(dto.getCodigo(),dto.getNome(),dto.getTelefone());
        return funcionario.toString();
    }
    private static void ThrowIllegalArgumentException(String paramName){
        throw new IllegalArgumentException("nenhum" + paramName + "foi passado a definição do funcionário");
    }
    private static boolean IsEmpty(String str){
        return str == null || "".equals(str);
    }
}
