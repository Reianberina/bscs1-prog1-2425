#include <iostream>
using namespace std;

class Person {
	  public:
	             string name;
	             int age;
	     };

class Car {
         public:
	           string name;
	           string color;
       };
         
int main() {
	
	Person person;
	Car car;
	
	
	cout << " What is your name?: ";
	cin >>  person.name;
	cout << " Age: ";
	cin >> person.age;
	cout << " Car Brand: ";
	cin >> car.name;
	cout << " Car color: ";
	cin >> car.color;
	
	cout << person.name << " at " << person.age << " has a "  << car.name << " " << car.color << " color. "<< endl ;

	return 0;
}
