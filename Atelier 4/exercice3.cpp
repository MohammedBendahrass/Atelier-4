#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> L;
    int i, l, t;
    cout << "Entrer la taille de votre tableau: ";
    cin >> t;
    cout << "Faire entrer les valeurs de tableau:" << endl;
    for (i = 0; i < t; i++)
    {
        cout << "L[" << i << "] = ";
        cin >> l;
        L.push_back(l);
    }
    L.sort();
    cout<<"Votre tableau Trie:";
    for (list<int>::iterator it = L.begin(); it != L.end(); ++it)
    {
        cout << "\t" << *it;
    }

    return 0;
}
