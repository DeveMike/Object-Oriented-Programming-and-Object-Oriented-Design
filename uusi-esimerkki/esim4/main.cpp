#include <iostream>

using namespace std;
class Person{
private:
    int age;
    string name;
public:
    int getAge() const {
        return age;
    }
    void setAge(int value){
        age=value;
    }
    string getName() const {
        return name;
    }
    void setName(string value){
        name=value;
    }
};
int main()
{
    Person objectPerson;
    objectPerson.setAge(23);
    objectPerson.setName("Teppo Testi");
    cout<<"Nimi = "<<objectPerson.getName()<<" ja ika ="<<objectPerson.getAge()<<endl;
    return 0;
}
