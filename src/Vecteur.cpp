#include "Vecteur.h"
using namespace std;

Vecteur::Vecteur(int tel_taille)
{
    taille = tel_taille;
   vect =new float[taille]; //ctor
}

Vecteur::Vecteur(const Vecteur & v)
{
    taille = v.taille;
    vect = new float[taille];
    for(int i =0; i< taille; i++)
    {
        vect[i]=v.get_val(i);
    }
}

Vecteur Vecteur::somme_Vect(Vecteur tel_Vecteur)
{
     if(taille == tel_Vecteur.get_taille())
     {
          int taille_v = taille ;
          Vecteur v(taille_v);
          float val;
          for(int i=0; i< taille; i++)
          {
           val = get_val(i) + tel_Vecteur.get_val(i);
            v.set_val(i,val);
          }

            return v;
    }
    else{
            std::cout<< "Les tailles des 2 vectuers ne sont pas egales !";
            return 0;
    }
}

int Vecteur::get_taille()
{
    return taille;
}

float Vecteur::get_val(int i) const
{
    return vect[i];
}

void Vecteur::set_val(int i, float tel_val)
{
  vect[i] = tel_val;
}

void Vecteur::afficher()
{
  for(int i=0; i<taille; i++)
  std::cout<< get_val(i)<<std::endl;
}
void Vecteur::remplir()
{
    int val;
    for(int i=0; i<taille; i++)
    {
        cout << "entrer la "<< i+1<< " ème valeur: ";
        cin >> val ;
        cout << endl;
        this->set_val(i,val);
    }

}

float Vecteur::somme()
{
    float somme = 0;
    for(int i=0; i<taille; i++)
    {
        somme += vect[i];
    }

    return somme;
}

void Vecteur::supprimer()
{
    int index;
    std::cout << "entrer l'index de l'element à suprimer : ";
    std::cin >> index;
    Vecteur aide(taille-1);
    int j=0;
    for(int i=0; i<taille; i++)
    {
        if(i!=index)
        {
            aide.set_val(j, vect[i]);
            j++;
        }

    }

    taille--;
    vect = new float[taille];
    for(int i=0; i<taille; i++)
    {
        vect[i] = aide.get_val(i);
    }


}

bool Vecteur::comparer(Vecteur tel_vect)
{
    if (taille!=tel_vect.get_taille())
    return false;

    for(int i=0; i<taille; i++)
    {

        if(vect[i]!=tel_vect.get_val(i))
        return false;

    }

    return true;

}

Vecteur::~Vecteur()
{
    if(vect != NULL)
    {
        delete []vect;
    //dtor
    }

}
