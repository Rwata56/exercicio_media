// exercicio_media.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;


int main()
{
   
        string nome = "";
        float p1 = 0, p2 = 0, media = 0;

        cout << "digite o seu nome: \n";
        cin >> nome;
        cout << "digite p1: \n";
        cin >> p1;
        if (p1 > 10)
        {
            cout << "invalido";
        }

        else
        {
            cout << "digite p2: \n";
            cin >> p2;

            if (p2 > 10)
            {
                cout << "invalido";
            }

            else
            {
                media = (p1 + p2) / 2;
                cout << "sua media: \n";
                cout << media << endl;

                if (media >= 6)
                {
                    cout << nome << "_aprovado\n";
                }

                else
                {
                    cout << nome << "_reprovado\n";
                }

            }
        }
        

}

