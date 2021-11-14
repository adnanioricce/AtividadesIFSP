/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package helloworld;
package System;

import static java.lang.System.out;

/**
 *
 * @author adnan
 */
public class HelloWorld {
    
    static void LogSalario(CalculoSalario calculoSalario){        
        out.println("Salario Bruto: " + String.valueOf(calculoSalario.consultarSalarioBruto()));
        out.println("Salario Liquido: " + String.valueOf(calculoSalario.consultarSalarioLiquido()));
        out.println("Desconto Total: " + String.valueOf(calculoSalario.consultarDescontoTotal()));        
    }
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) { //método  
        float horasTrabalhadas = 40.0f;
        float valorPorHoraTrabalhadaEmReais = 10.0f;
        float porcentagemDescontoInss = 0.1f;
        float impostoRenda = 0.2f;
        var calculoSalario = new CalculoSalario(horasTrabalhadas,
            valorPorHoraTrabalhadaEmReais,
            porcentagemDescontoInss,
            impostoRenda
        );        
        LogSalario(calculoSalario);        
    }
    
}
