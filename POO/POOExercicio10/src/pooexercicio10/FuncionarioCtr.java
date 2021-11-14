/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pooexercicio10;

import java.util.ArrayList;

/**
 *
 * @author adnan
 */
public class FuncionarioCtr {
    private final ArrayList<Funcionario> funcionarios = new ArrayList<>();
    public FuncionarioCtr(){
    }
    public void RegistrarFuncionario(FuncionarioDto model){                                    
        Funcionario funcionario = new Funcionario(model.getCodigo(),model.getNome(),model.getTelefone());
        funcionarios.add(funcionario);                
    }
    public FuncionarioDto ConsultarFuncionarioPorCodigo(String codigo){
        for(int i = 0;i < funcionarios.size();++i){
            Funcionario funcionario = funcionarios.get(i);
            if(funcionario.getCodigo().equals(codigo)){
                return new FuncionarioDto(funcionario);
            }
        }
        return null;
        
    }
}
