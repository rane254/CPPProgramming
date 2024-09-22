#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:
        string name, breed, color;
        
    public:
        Animal() {
            this->name = "";
            this->breed = "";
            this->color = "";
        }

        void newAnimal(string _name, string _breed, string _color) {
            name = _name;
            breed = _breed;
            color = _color;
        }

        void printAnimal() {
            cout << "name:" << name << "\nbreed:" << breed << "\ncolor:" << color << endl;
        }
};

int main() {
    Animal a1;
    a1.newAnimal("brijesh", "human", "brown");
    a1.printAnimal();
    return 0;
}