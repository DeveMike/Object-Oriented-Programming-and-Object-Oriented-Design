#include <iostream>
#include "car.h"
#include <vector>



using namespace std;

int main() {
    vector<Car> carList;

    Car car1("Toyota", "Corolla", 2022);
    Car car2("Ford", "Focus", 2023);
    Car car3("Tesla", "Model 5", 2024);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Toinen auto listassa:" << endl;
    carList[1].printData();
    cout << endl;

    cout << "Kaikki autot listassa:" << endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
