// P4. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name, age and department of the student.


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

class Student : public Person{
  public:
    Student(string name, int age , string department): Person(name,age){
      this->department = department;
    }
    void print_info() {
      Person::print_info();
      cout << "Department is: " << department <<endl;
    }
  private:
    string department;
};

int main(){
  Person p1("manu",27);
  Person p2("shanu",28);
  p1.print_info();
  p2.print_info();
  return 0;
}
