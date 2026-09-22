#pragma once

class Player
{
private:
    int Armour{100};
    int Health{100};
    int Stamina{100};

public:
   

    int getArmour();
    int getHealth();
    int getStamina(); 
    
    

    int Damage(int damage);
    int DamageArmour(int damage);
    int MinusStamina(int stamina);

    int PlusStamina(int stamina);
    int Heal(int heal);
};
