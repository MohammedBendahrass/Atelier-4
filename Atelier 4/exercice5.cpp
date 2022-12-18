#include <iostream>
#include <iterator>
#include <set>
using namespace std;
bool rechercher1(int a,set <int> s){
    for ( set <int>::iterator it=s.begin();it!=s.end(); it++)
    {
        if (*it == a)
        {
            return true;
        }
        
    }
    return false;
}

bool rechercher2(int a , set <int>::iterator begin,set <int>::iterator end){
    for(set <int>::iterator setIterator = begin; setIterator!=end;setIterator++){
        if(*setIterator == a){
            return true;
        }
    }
    return false;
}
int main()
{
    set<int> S;
    int i,r;
    for ( i = 1; i <= 100; i++)
    {
        S.insert(i);
    }
    cout<<"Chercher un valeur dans le set: ";
    cin>>r;
    //L'appel de foction de premier methode  
    cout<<"methode 1:"<<endl;
    if (rechercher1(r,S))
    {
        cout<<"Vrai; cette valeur se trouve dans le set";
    }else
    {
        cout<<"Faux; cette valeur ne trouve pas dans le set";
    }
    //L'appel de foction de premier methode
    cout<<endl<<"methode 2:"<<endl;
    if (rechercher2(r,S.begin(),S.end()))
    {
        cout<<"Vrai; cette valeur se trouve dans le set";
    }else
    {
        cout<<"Faux; cette valeur ne trouve pas dans le set";
    }
    
    
    
    
    return 0;
}