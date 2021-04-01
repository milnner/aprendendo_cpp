#include <cstdio>
#include <cstdlib>
#include <iostream> 

using namespace std;

int main()
{
    //configura o formato de saída para variáveis bool
    //para true e false
    //em vez de 1 e 0   
    cout.setf(cout.boolalpha);

    //insere dois valores
    int nArg1;
    cout << "input value 1: ";
    cin >> nArg1;

    int nArg2;
    cout << "input value 2: ";
    cin >> nArg2;

    //compara as duas variaveis e armazena os resultados
    bool b;
    b = nArg1 == nArg2;

    cout << "the statement, " << nArg1
         << " equals "        << nArg2
         << " is " << b
         << endl;

    //espera até o usuário estar pronto para
    //encerrar o programa
    //para permitir que ele veja o resultado do programa
    cout << "press enter to continue... " << endl;
    cin.ignore(10, '\n');
    cin.get();
};