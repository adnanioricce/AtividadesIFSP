/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package helloworld;

/**
 *
 * @author adnan
 */
public class CalculoSalario {
    float horasTrabalhadas;
    float valorPorHoraTrabalhada;
    float porcentagemDescontoInss;
    float impostoRenda;
    float salarioBase;
    public CalculoSalario(float horasTrabalhadas,
            float valorPorHoraTrabalhada,
            float porcentagemDescontoInss,
            float impostoRenda){
        this.horasTrabalhadas = horasTrabalhadas;
        this.valorPorHoraTrabalhada = valorPorHoraTrabalhada;
        this.porcentagemDescontoInss = porcentagemDescontoInss;
        this.impostoRenda = impostoRenda;
        this.salarioBase = horasTrabalhadas * valorPorHoraTrabalhada;
    }
    public float consultarSalarioBruto()
    {
        return this.getSalarioBase();
    }
    public float consultarSalarioLiquido(){
        return this.getSalarioBase() * (1 - (this.getImpostoRenda() + this.getPorcentagemDescontoInss()));
    }

    /**
     * @return the horasTrabalhadas
     */
    public float getHorasTrabalhadas() {
        return horasTrabalhadas;
    }

    /**
     * @return the valorPorHoraTrabalhada
     */
    public float getValorPorHoraTrabalhada() {
        return valorPorHoraTrabalhada;
    }

    /**
     * @return the porcentagemDescontoInss
     */
    public float getPorcentagemDescontoInss() {
        return porcentagemDescontoInss;
    }

    /**
     * @return the impostoRenda
     */
    public float getImpostoRenda() {
        return impostoRenda;
    }

    /**
     * @return the salarioBase
     */
    public float getSalarioBase() {
        return salarioBase;
    }

    public float consultarDescontoTotal() {
        return this.getSalarioBase() * (this.getImpostoRenda() + this.getPorcentagemDescontoInss());
    }
}
