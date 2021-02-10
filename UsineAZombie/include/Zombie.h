#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

using namespace::std;

class Zombie
{
    private:
        //Caractères de base
        string nom = "Baveux";
        int pv = 50;
        int attack = 5;

    public:

        //Constructeur
        Zombie();
        Zombie(string, int, int);


        //Destructeur
        ~Zombie();

        //getter et setter
        string getNom();
        void setNom(string);

        int getPv();
        void setPv(int);

        int getAttack();
        void setAttack(int);

        void showInfos();

        void attaqueMaladroite(Zombie* cible);

};

#endif // ZOMBIE_H
