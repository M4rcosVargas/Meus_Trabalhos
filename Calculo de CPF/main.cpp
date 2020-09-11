#include <iostream>
using namespace std;
#include <locale.h>

    //ALUNOS: AIRTON CESAR SOARES, MICHAEL GUTEMBERG e MARCOS PEIXER VARGAS
    //PEÍODO: 1º
    //CURSO: CIÊNCIA DA COMPUTAÇÃO
    //DISCIPLINA: ALGORITMOS E PROGRAMÇÃO
    //PROFESSOR: RAFAEL BALLOTIN

int main(){

    setlocale(LC_ALL,"Portuguese");

    //MODO DE DISTRIBUIÇAÕ DE VARIAVEIS
    int CPF , CPF_9;
    int Digito1, Digito2, Digito3, Digito4, Digito5, Digito6, Digito7, Digito8, Digito9;
    int Verificador1, Verificador2;
    int MP1, MP2;

    //PEDINDO PARA O ESPECTADOR INSERIR O CPF
    cout << "Digite O CPF Sem Os Dígitos Verficadores:";
    cin >> CPF_9;

    //AUXILIAR DA VARIAVEL
    CPF = CPF_9;

    //DESMEMBRAMENTO DO CPF
    Digito9 = CPF % 10;
    CPF = CPF / 10;

    Digito8 = CPF % 10;
    CPF = CPF / 10;

    Digito7 = CPF % 10;
    CPF = CPF / 10;

    Digito6 = CPF % 10;
    CPF = CPF / 10;

    Digito5 = CPF % 10;
    CPF = CPF / 10;

    Digito4 = CPF % 10;
    CPF = CPF / 10;

    Digito3 = CPF % 10;
    CPF = CPF / 10;

    Digito2 = CPF % 10;
    CPF = CPF / 10;

    Digito1 = CPF % 10;

    //PRIMEIRA MÉDIA PONDERADA
    MP1 = (Digito1 * 10 + Digito2 * 9 + Digito3 * 8 + Digito4 * 7 + Digito5 * 6 + Digito6 * 5 + Digito7 * 4 + Digito8 * 3 + Digito9 * 2) % 11;

    //CASO A MAP1 TENHA 0 RESULTADO < 0 OU >= 0
    if (MP1 >= 2) {
        Verificador1 = 11 - MP1;
    }else if (MP1 < 2) {
        Verificador1 = 0;
    }

    //SEGUNDA MÉDIA PODERADA
    MP2 = (Digito1 * 11 + Digito2 * 10 + Digito3 * 9 + Digito4 * 8 + Digito5 * 7 + Digito6 * 6 + Digito7 * 5 + Digito8 * 4 + Digito9 * 3 + Verificador1 * 2) % 11;

    //CASO A MAP2 TENHA 0 RESULTADO < 0 OU >= 0
    if (MP2 >= 2) {
        Verificador2 = 11 - MP2;
    }else if (MP2 < 2) {
        Verificador2 = 0;
    }

    //MOSTRANDO O RESULTADO NA TELA
    cout << "\nO CPF Com Os 2 Números Verificadores É:" << CPF_9 << "-" << Verificador1 << Verificador2;

    return 0;

}
