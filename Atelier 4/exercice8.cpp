#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class Repas;
class Elment;
class Chat;
class Animal;
class Entraineur;
class Chien;
class Race;
class compitition;

class Repas
{
private:
    string nom;
    int heure;
    string description;
    list<Elment> *lisE;

public:
    list<Elment> *getlistElment()
    {
        return this->lisE;
    }
    ~Repas()
    {
        delete this->lisE;
        cout << "call dist of Repas" << endl;
    }
};

class Elment
{
private:
    string type;
    string nom;
    Repas a;

public:
    ~Elment()
    {
        cout << "call dist of B" << endl;
    }
};

class Animal
{
protected:
    string nom;
    int age;
    string genre;
};

class Chat : public Animal
{
private:
    string type;

public:
    bool sauter();
};

class Race
{
protected:
    string specificite;

protected:
    bool israceHybride();
};

class Chien : public Race, public Animal
{
private:
    string taille;
    list<Entraineur> lisEntraineur;

public:
    bool ischass3();
};

class Entraineur
{
private:
    string nom;
    string description;
    list<Chien> listChien;
};

class Compitition
{

private:
    string date;
    string nom;
    Entraineur b;
    Chien a;

public:
    int ordre;
};
