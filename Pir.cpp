#include <iostream>
using namespace std;

int main()
{
    
	int rows;
	char camadas;
cout << "+=====================================================+\n";
cout << "|                     * IMPORTANTE*                   |\n";
cout << "|                APERTE CTRL + C PARA SAIR.           |\n";	
cout << "+=====================================================+\n";		
cout << "|              Insira o numero de Camadas:            |\n";
cout << "+=====================================================+\n";    
    cin >> rows;
cout << "+=====================================================+\n";
cout << "|      Quer a sua piramide fina ou grossa?[F, g]      |\n";
cout << "+=====================================================+\n";    
    cin >> camadas;
cout << "+=====================================================+\n";    
    if(camadas == 'F'){
    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    }
if(camadas == 'g'){

   for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
       {
            cout << "--¬ ";
        }
        cout << "\n";
    }
}


}

