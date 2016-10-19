#include <iostream>
#include "Vecteur.h"

using namespace std;

int main()
{   int n,m, index;

    int choix;

    Vecteur *mon_Vect, *tel_Vect;

    do{

        cout<<endl<<" ----------------------- MENU -----------------------"<<endl<<endl;
        cout<<"Tapez: "<<endl;
        cout<<"        1 pour creer 2 vecteurs !"<<endl;
        cout<<"        2 pour remplir les 2 vecteurs !"<<endl;
        cout<<"        3 pour acceder à un élement en lecture ou ecriture !"<<endl;
        cout<<"        4 pour faire la somme de 2 vecteurs !"<<endl;
        cout<<"        5 pour comparer les 2 vecteurs !"<<endl;
        cout<<"        6 pour supprimer un element du tableau et afficher le tableau !"<<endl<<endl;
        cout<<" votre choix";
        cin >> choix;

        switch(choix)
        {
            case 0 : break;

            case 1 :
                {
                    cout << "Hello world!" << endl;
                    cout << "Entrer la taille du premier vecteur :";
                    cin >> n ;
                    cout << endl << "Entrer la taille du deuxième vecteur :";
                    cin >> m;
                    cout << endl;
                    mon_Vect = new Vecteur(n);
                    tel_Vect = new Vecteur(m);
                }

            break;

            case 2 :
                    {
                        mon_Vect->remplir();
                        tel_Vect->remplir();
                    }

            break;

            case 3 :
                {
                     cout << " Veuillez saisir l'index de l'element que vous voulez acceder : ";
                     cin >> index;
                     cout << mon_Vect->get_val(index);

                }
            break;

            case 4 :

                {Vecteur v = mon_Vect->somme_Vect(*tel_Vect); v.afficher();}

            break;

            case 5 :

                    if (mon_Vect-<comparer(*tel_Vect)!=true)
                    {
                        cout << "les 2 vecteurs sont egaux !";
                    }
                    else
                    {
                        cin << "les 2 vecteurs ne sont pas egaux !":
                    }
            break:


            case 6 : mon_Vect->supprimer(); mon_Vect->afficher();
            break;

    }

    }while(choix!=0);

    return 0;
}
