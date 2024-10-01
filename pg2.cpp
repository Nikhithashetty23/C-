// P2. Create two instances of Person and call print_info() on them.

#include <iostream>
using namespace std;

class Person {
    // Create a constructor that takes a string as a parameter
    // and sets the name attribute to the value of the parameter
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        void print_info() {
            cout << "My name is: " << name << " my age is: " << age << endl;
        }
    private:
        string name;
        int age;
};

int main(){
  Person p1("Dasai",27);
  Person p2("Kunikida",28);
  p1.print_info();
  p2.print_info();
  return 0;
}
