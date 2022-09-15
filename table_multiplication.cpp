#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num(0), table(0), restart(0);
    do
    {
        cout << "Combien de table de multiplication voulez-vous afficher : ";
        cin >> table;
        for( int j(1); j<=table; j++)
        {
            cout << endl;
            cout << "La table de : ";
            cin >> num;
            for( int i(1); i<=10; i++)
            {
                cout << i <<" x " << num <<" = " << i*num; 
                cout << endl;
            }
        }
        cout <<"\nVoulez-vous recommencer\n";
        cout << "0 => pour oui\n";
        cout << "1 => pour non\n";
        cout << "\nVotre reponse : ";
        cin >> restart;
    }while( restart != 1 );
    
    return 0;
}
