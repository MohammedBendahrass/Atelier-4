#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class Personne
{
public:
    string nom;
    string prenom;
    int age;
    Personne(string a, string b, int c)
    {
        nom = a;
        prenom = b;
        age = c;
    };
};

int main(int argc, char const *argv[])
{
    list<Personne> L;
    list<string> Ln, Lp;
    string n, p;
    int i, age, t;
    cout << "Entrer la taille de votre tableau: ";
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cout << "Entrer les informations de Personne " << i << ":" << endl;
        cout << "Le nom: ";
        cin >> n;
        cout << "Le prenom: ";
        cin >> p;
        cout << "L'age: ";
        cin >> age;
        L.push_back(Personne(n, p, age));
    }
    list<Personne>::iterator it;
    for (it = L.begin(); it != L.end(); ++it)
    {
        Ln.push_back(it->nom);
        Lp.push_back(it->prenom);
    }
    Ln.sort();
    Lp.sort();
    cout << "Votre tableau Trie:" << endl;
    cout << "NOM:";
    for (list<string>::iterator it = Ln.begin(); it != Ln.end(); ++it)
    {
        cout << "\t" << *it;
    }
    cout << endl
         << "PRENOM:";
    for (list<string>::iterator it = Lp.begin(); it != Lp.end(); ++it)
    {
        cout << "\t" << *it;
    }
    return 0;
}