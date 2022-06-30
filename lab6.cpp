#include <iostream>
#include <string>
using namespace std;
#include <array>

/* treci nisam znao , pola iz drugog ne valja */
class Villager {
private:
    int hitPoints;
    int attack;
    float speed;

public:
    Villager(){
        hitPoints=25;
        attack=3;
        speed=0.8;
    }
    Villager(int attack , float speed) {
        hitPoints=25;
        this->attack=attack;
        this->speed=speed;
    }

    Villager(int hitPoints) {
        this->hitPoints=hitPoints;
        attack=3;
        speed=0.8;
    }

    Villager(int HITPOINTS , int ATTACK , float SPEED) : hitPoints(HITPOINTS),attack(ATTACK),speed(SPEED) {};


    int getAttack() {
        return attack;
    }

    int getHitpoints() {
        return hitPoints;
    }

    float getSpeed() {
        return speed;
    }

    void setAttack(int attack) {
        this->attack=attack;
    }

    void setSpeed(float speed) {
        this->speed=speed;

    }

    void setHitPoints(int hitPoints) {
        this->hitPoints=hitPoints;
    }

    void ispis() {
        cout << "Villager (" << hitPoints << "," << attack << "," << speed << ")" << endl;
    }

};

class TownCenter {
private:
    int brojVillagera;
    int brojZgrada;

public:

    TownCenter() {
        brojVillagera=0;
        brojZgrada=0;
    }
    Villager* trainVillager() {
        brojVillagera++;
        return new Villager();
    }
    Villager* trainVillager(int hitPoints) {
        brojVillagera++;
        return new Villager(hitPoints);
    }




    void ispis () {
        cout << "Broj villagera stvorne: " << brojVillagera << endl;
        cout << "broj zgrada: " << brojZgrada << endl;
    }

};



int main() {

TownCenter primjer {};
primjer.ispis();
    TownCenter TownCenter;
    Villager *villager = TownCenter.trainVillager();
    villager->ispis();





    return 0;
}