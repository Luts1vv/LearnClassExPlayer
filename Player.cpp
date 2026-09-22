#include "Player.h"


int Player::getArmour()
{
    return Armour;
}

int Player::getHealth()
{
    return Health;
}

int Player::getStamina()
{
    return Stamina;
}

int Player::Damage(int damage)
{
    Health -= damage;
    return Health;
}

int Player::DamageArmour(int damage)
{
    Armour -= damage;
    return Armour;
}

int Player::MinusStamina(int stamina)
{
    Stamina -= stamina;
    return Stamina;
}

int Player::PlusStamina(int stamina)
{
    Stamina += stamina;
    return Stamina;
}

int Player::Heal(int heal)
{
    Health += heal;
    return Health;
}
