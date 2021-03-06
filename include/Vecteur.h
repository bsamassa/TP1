#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

class Vecteur
{
    public:
        Vecteur(int tel_taille);
        Vecteur(const Vecteur & v);
        Vecteur somme_Vect(Vecteur tel_Vecteur);
        int get_taille();
        float get_val(int i) const;
        void set_val(int i, float tel_val);
        void afficher();
        void remplir();
        float somme();
        float somme_bis();
        void supprimer();
        bool comparer( Vecteur tel_vect);
        virtual ~Vecteur();
    protected:
    private:
    float * vect;
    int taille;
};

#endif // VECTEUR_H
