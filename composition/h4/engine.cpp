#include "engine.h"

Engine::Engine() {
}

Engine::Engine(int hp, double d) : horsepower(hp), displacement(d) {}

int Engine::getHorsepower()
{
    return horsepower;

}

void Engine::setHorsepower(int hp)
{
    horsepower = hp;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double d)
{
    displacement = d;
}
