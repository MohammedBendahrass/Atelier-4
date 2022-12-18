#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class AfficherDate
{
private:
    string Date;

public:
    AfficherDate(string);
    string Jour();
    string Mois();
    string Annee();
    string Heure();
    string Minute();
};

AfficherDate::AfficherDate(string a)
{
    Date = a;
}

string AfficherDate::Jour()
{
    return Date.substr(0, 2);
}

string AfficherDate::Mois()
{
    return Date.substr(2, 2);
}

string AfficherDate::Annee()
{
    return Date.substr(4, 4);
}

string AfficherDate::Heure()
{
    return Date.substr(8, 2);
}

string AfficherDate::Minute()
{
    return Date.substr(10, 2);
}

void AfficherJour(string a)
{
    if (a == "01")
    {
        cout << "1er";
    }
    else
    {
        cout << a << "eme";
    }
}

void AfficherMois(const string a)
{
    if (a == "01")
        cout << "Janvier";
    if (a == "02")
        cout << "Fevrier";
    if (a == "03")
        cout << "Mars";
    if (a == "04")
        cout << "Avril";
    if (a == "05")
        cout << "Mai";
    if (a == "06")
        cout << "Juin";
    if (a == "07")
        cout << "Juillet";
    if (a == "08")
        cout << "Aout";
    if (a == "09")
        cout << "September";
    if (a == "10")
        cout << "Octobre";
    if (a == "11")
        cout << "Novembre";
    if (a == "12")
        cout << "December";
}

int main(int argc, char **argv)
{
    string date;
    cout << "Entrer une date: ";
    cin >> date;
    if (date.length() != 12)
        cout << "Chaine invalide." << endl;
    else
    {
        AfficherDate d(date);
        AfficherJour(d.Jour());
        cout << " ";
        AfficherMois(d.Mois());
        cout << " " << d.Annee() << " a " << d.Heure() << "h" << d.Minute() << ".";
    }

    return 0;
}