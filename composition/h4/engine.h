#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int, double);
    int getHorsepower();
    void setHorsepower(int);
    double getDisplacement();
    void setDisplacement(double);


};

#endif // ENGINE_H
