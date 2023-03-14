#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>

using namespace std;

const double juros = 0.01;
const double multa = 0.02;
const int tamanho = 1;

double valorprincipal[tamanho];
double ValorPagar[tamanho];
int dias[tamanho];


void l05a(){

    system ("cls");

    char tecla;

    cout << "\nBem vindo ao exercicio A, vamos calcular o juros sobre um valor" << endl;

    cout << "\n1 - Inserir valor e dias e calcular\n2 - Exibir valor a pagar\nEscolha ->";

    tecla = getch();

    switch(tecla)    

    case '1' : {

        for (int i = 0; i < tamanho; i++){

            cout << "\nInsira o valor da prestacao em atraso: R$";
            cin >> valorprincipal[i];

            cout << "\nInsira a quantidade de dias: " << endl;
            cin >> dias[i];

            //Calculo do Valor

            double multa = valorprincipal[i] * 0.02;
            double juros = valorprincipal[i] * 0.01 * dias[i] / 30;
            ValorPagar[i] = valorprincipal[i] + multa + juros;

        }

        cout << "\nValores inseridos!" << endl;

        system ("pause");

        system ("cls");

        break;
    }

    switch (tecla)
    case '2' : {

        for (int i = 0; i < tamanho; i++){

            cout << "\nO valor a pagar sera de R$" << ValorPagar[i] << endl;

            system ("pause");
        }

        system ("cls");

        break;
    }
}

void l05b(){

    system ("cls");

    int idade[5];
    char nomes[5][50];
    float media_idades = 0;

    cout << "\nBem vindo a exercicio 2!" << endl;

    for (int i = 0; i < 5; i++){

        cout << "\nDigite a idade da pessoa: ";
        cin >> idade[i];

        cout << "\nDigite o nome da pessoa: ";
        cin.ignore();
        cin.getline(nomes[i], 50);

        media_idades += idade[i];

    }

    media_idades /= 5;

    int idade_mais_velha = idade[0];
    char nome_mais_velho[50];
    strcpy(nome_mais_velho, nomes[0]);

    int idade_mais_nova = idade[0];
    char nome_mais_novo[50];
    strcpy(nome_mais_novo, nomes[0]);

    for (int i = 0; i < 5; i++){

        if (idade[i] > idade_mais_velha){

            idade_mais_velha = idade[i];
            strcpy(nome_mais_velho, nomes[i]);

        }

        if (idade[i] < idade_mais_nova){

            idade_mais_nova = idade[i];
            strcpy(nome_mais_novo, nomes[i]);

        }

    }

    int saldo_idades = idade_mais_velha - idade_mais_nova;

    cout << "\nNome da pessoa mais velha: " << nome_mais_velho;
    cout << "\nNome da pessoa mais nova: " << nome_mais_novo;
    cout << "\nA media de idades e: " << media_idades;
    cout << "\nO saldo de idades e: " << saldo_idades;

    system("pause");

}



void menu(){
    char tecla;

    while (tecla != 27){

        cout << "\nBem vindo ao exercicio 5 - Eric Peneres Carneiro - Fatec Zona Sul" << endl;

        cout << "\nDigite as opcoes para acessar os exercicios!" << endl;

        cout << "\n1 - Exercicio 1\n2 - Exercicio 2\nESC - Sair\nEscolha ->";

        tecla = getch();

        switch(tecla)
        case '1' : {
            
            l05a();

            break;
        }

        switch(tecla)
        case '2' : {   
        
            l05b();

            break;
        }

    }

    system ("pause");

    system ("cls");

}


int main(){

    system ("cls");

    menu();

    return 0;
}