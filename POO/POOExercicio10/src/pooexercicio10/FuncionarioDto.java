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
public class FuncionarioDto {
    private String codigo;
    private String nome;
    private String telefone;
    
    public FuncionarioDto(String codigo,String nome,String telefone){
        this.codigo = codigo;
        this.nome = nome;
        this.telefone = telefone;
    }
    public FuncionarioDto(Funcionario funcionario){
        this.codigo = funcionario.getCodigo();
        this.nome = funcionario.getNome();
        this.telefone = funcionario.getTelefone();
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
}
