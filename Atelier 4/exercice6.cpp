#include <iostream>
using namespace std;
class Test
{
public:
    static int tableau[];

public:
    static int division(int indice, int diviseur)
    {   
        if( indice <= 0 || indice >= 10 ) {
                throw "L'indice doit etre compris entre 0 et 9 !";
        }
        else if( diviseur == 0 ) {
                throw "erreur, la division en 0 est impossible!";
        }        
        return tableau[indice] / diviseur;
    }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};
int main()
{
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;
    cout << "Le resultat de la division est: " << endl;
    try {
        cout << Test::division(x, y) << endl;
    }
    catch (const char* e) {
        cerr << e << endl;
        }
    return 0;
}