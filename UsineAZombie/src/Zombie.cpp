#include "Zombie.h"

    Zombie::Zombie(){
        nom = "Baveux";
        pv = 50;
        attack = 5;
    }


    Zombie::Zombie(string n,int p,int atk){
        setNom(n);
        setPv(p);
        setAttack(atk);
    }

    Zombie::~Zombie(){
    cout<< getNom()<< " decede" <<endl;
}

    string Zombie::getNom(){
    return nom;
    }

    int Zombie::getPv(){
    return pv;
    }

    int Zombie::getAttack(){
    return attack;
    }

    void Zombie::setNom(string n){
        nom = n;
    }

    void Zombie::setPv(int p){
        if (100 < p or p < 0) {
            cerr << getNom() << " a fondu car il ne pouvait supporter ses points de vie" << endl;
            pv = 0;
        }
        else {
		pv = p;

        }
    }

    void Zombie::setAttack(int atk){
        if (atk < 0 or 10 < atk) {
            cerr << getNom() << " a vu son crane exploser car son attaque l'a rendu instable" << endl;
            attack = 0;
        }
        else{
            attack = atk;
        }
    }

    void Zombie::showInfos()
{
	cout << "Nom de l'abomination: " << getNom() << endl;
	cout << "Pv : " << getPv() << endl;
	cout << "Attaque : " << getAttack() << endl;
}
