#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ptb");
    float num1, num2, resultado;
    int op;
    cout <<"Informe o 1º número: ";
    cin >> num1;
    cout <<"Informe o 2º número: ";
    cin >> num2;
    cout <<"----------\n";
    cout <<"Escolha a operação matemática: \n";
    cout <<"1 - Adição\n";
    cout <<"2 - Subtração\n";
    cout <<"3 - Divisão\n";
    cout <<"4 - Multiplicação\n";
    cout <<"Opção: ";
    cin >> op;
    if (op==1)
    {
        resultado=num1+num2;
        cout <<num1<<" + " <<num2<<" = "<<resultado;
    }
    else if (op==2)
    {
        resultado=num1-num2;
        cout <<num1<<" - "<<num2<<" = "<<resultado;
    }
    else if (op==3)
    {
        resultado=num1/num2;
        cout <<num1<<" / "<<num2<<" = "<<resultado;
    }
    else if (op==4)
    {
        resultado=num1*num2;
        cout <<num1<<" * "<<num2<<" = "<<resultado;
    }
    else
    {
        cout<<"Opção inválida!!!";
    }
}