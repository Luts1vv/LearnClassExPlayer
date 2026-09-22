#include <iostream>
#include <ostream>

#include "Player.h"


int main(int argc, char* argv[])
{
    Player FirstPlayer;
    
    FirstPlayer.Damage(20);
    FirstPlayer.DamageArmour(50);
    FirstPlayer.MinusStamina(10);
    FirstPlayer.Heal(10);
    std::cout << "Armour: " << FirstPlayer.getArmour()<< " | Health: " << FirstPlayer.getHealth() << " | Stamina: " << FirstPlayer.getStamina() << std::endl;
    
    
    return 0;
}
