/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pooexercicio10;

import javax.swing.JOptionPane;

/**
 *
 * @author adnan
 */
public class FuncionarioView {
    private FuncionarioCtr ctr = new FuncionarioCtr();    
    public void AdicionarFuncionario(){
        try{
            String nome = JOptionPane.showInputDialog("Digite o nome do funcionario");
            String codigo = JOptionPane.showInputDialog("Digite o código do funcionario");
            String telefone = JOptionPane.showInputDialog("Digite o código do telefone");
            ctr.RegistrarFuncionario(new FuncionarioDto(codigo,nome, telefone));
        }
        catch(IllegalArgumentException ex){
            JOptionPane.showMessageDialog(null,ex);
        }
    }
    public void MostrarFuncionario(){        
        String codigo = JOptionPane.showInputDialog(null,"Informe o código do funcionario para procura-lo");        
        FuncionarioDto funcionarioDto = ctr.ConsultarFuncionarioPorCodigo(codigo);
        StringBuilder messageBuilder = new StringBuilder();        
        if(funcionarioDto == null){
            messageBuilder.append("nenhum funcionário de código ");
            messageBuilder.append(codigo);
            messageBuilder.append(" foi encontrado");
            JOptionPane.showMessageDialog(null, messageBuilder.toString());
            return;
        }
        messageBuilder.append("Funcionário encontrado:");
        messageBuilder.append("\n" + Funcionario.toString(funcionarioDto));
        String message = messageBuilder.toString();
        JOptionPane.showMessageDialog(null,message);
    }
    public void Teste(){
        AdicionarFuncionario();
        MostrarFuncionario();
    }
    public static void main(String[] args) {
        FuncionarioView view = new FuncionarioView();
        view.Teste();
    }
}
