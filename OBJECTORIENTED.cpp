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
	
	Person person1;
	person1.name = "Reian Beriña";
	person1.age = 20;
	
	Car Car1;
	Car1.name = "Bugatti Chiron";
	Car1.color = "blue";
	
	cout << " My name is " << person1.name << " " << person1.age << " years old. " << endl;
	cout << " and my Favorite Car is " << Car1.name << " of " << Car1.color << " Variant. " << endl;
	

	return 0;
}
