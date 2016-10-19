#include <iostream>
#include "Vecteur.h"

using namespace std;

int main()
{   int n,m;
    cout << "Hello world!" << endl;
    cout << "Entrer la taille du premier vecteur :";
    cin >> n ;
    cout << endl << "Entrer la taille du deuxième vecteur :";
    cin >> m;
    cout << endl;
    Vecteur mon_Vect(n);
    Vecteur tel_Vect(m);
    mon_Vect.remplir();
    Vecteur v = mon_Vect.somme_Vect(tel_Vect);

    v.afficher();

    v.supprimer();
    v.afficher();
    int choix;

    do{

        cout<<endl<<" ----------------------- MENU -----------------------"<<endl<<endl;
        cout<<"Tapez: ";
        cout<<"        1 pour creer un vecteur !"<<endl;
        cout<<"        2 pour acceder à un élement en lecture ou ecriture !"<<endl;
        cout<<"        3 pour faire la somme de 2 vecteurs !"<<endl;

    }while(choix!=0);

    return 0;
}
