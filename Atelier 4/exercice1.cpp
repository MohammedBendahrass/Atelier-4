#include <iostream>
#include <math.h>
using namespace std;

class complexe
{
private:
    float rel;
    float img;

public:
    complexe(float, float);
    void afficher();
    complexe operator+(complexe);
    complexe operator-(complexe);
    complexe operator*(complexe);
    complexe operator/(complexe);
};

void complexe::afficher()
{
    // faire tous les posibilte de L'ecriture d'in nombre complexe
    if (rel == 0 && img != 0)
    {
        cout << "votre nombre complexe est => Z=i(" << img << ")" << endl;
    }
    else if (rel != 0 && img == 0)
    {
        cout << "votre nombre complexe est => Z=" << rel << endl;
    }
    else
    {
        cout << "votre nombre reelle est => ( " << rel << ")" << endl;
        cout << "votre nombre imaginaire est => ( " << img << ")" << endl;
    }
}

complexe::complexe(float a, float b)
{
    rel = a;
    img = b;
}

complexe complexe::operator+(complexe b)
{
    complexe c(rel + b.rel, img + b.img);
    return c;
}

complexe complexe::operator-(complexe b)
{
    complexe c(rel - b.rel, img - b.img);
    return c;
}

complexe complexe::operator*(complexe b)
{
    complexe c((rel * b.rel) - (img * b.img), (rel * b.img) + (img * b.rel));
    return c;
}

complexe complexe::operator/(complexe b)
{
    complexe c(((rel * b.rel) + (img * b.img)) / (pow(b.rel, 2) + pow(b.img, 2)), ((img * b.rel) - (rel * b.img)) / ((pow(b.rel, 2) + pow(b.img, 2))));
    return c;
}

int main(int argc, char const *argv[])
{
    int a, b, c, d, choix;
    cout << "Entrer un nombre reelle de premier nombre complexe: ";
    cin >> a;
    cout << "Entrer un nombre imaginaire de premier nombre complexe: ";
    cin >> b;
    cout << endl;
    cout << "Entrer un nombre reelle de deuxieme nombre complexe: ";
    cin >> c;
    cout << "Entrer un nombre imaginaire de deuxieme nombre complexe: ";
    cin >> d;
    complexe c1(a, b);
    complexe c2(c, d);
    do
    {
        cout << "Choisir une operation pour les nombre complexe:" << endl;
        cout << "1-  addition" << endl;
        cout << "2-  soustraction" << endl;
        cout << "3-  multiplication" << endl;
        cout << "4-  division" << endl;
        cout << "Votre choix => ";
        cin >> choix;
        if (choix < 1 || choix > 4)
        {
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << "            ATTENTION! Tu dois choisir un nombre Entre 1 et 4" << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
        }
    } while (choix < 1 || choix > 4);
    if (choix == 1)
        (c1 + c2).afficher();
    if (choix == 2)
        (c1 - c2).afficher();
    if (choix == 3)
        (c1 * c2).afficher();
    if (choix == 4)
        (c1 / c2).afficher();
    return 0;
}
