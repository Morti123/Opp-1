#include <iostream>
using namespace std;

//Cat
class Cat {
	char sex;
	string name;
	double weight;
	int age;

public:
	Cat() {
		sex = ' ';
		name = ' ';
		weight = 0.0;
		age = 0;
	}
	Cat(char fsex, string fname, double fweight, int fage) {
		sex = fsex;
		name = fname;
		weight = fweight;
		age = fage;
	}
	char getSex() { return sex; }
	void setWeight(double fweight) { weight = fweight; }
	string getName() { return name; }
	double getWeight() { return weight; }
	double getAge() { return age; }
	void print() {
		cout << "Name - " << getName() << endl;
		cout << "Sex - " << getSex() << endl;
		cout << "Age - " << getAge() << endl;
	cout << "Weight - " << getWeight() << endl;
		}
};
//Banan
class Banan {
	string color;
public:
	Banan() {
		color = "Green";
	}
	Banan(string fcolor) {
		color = fcolor;
	}
	string getColor() { return color; }
	void setColor(string fcolor) { color = fcolor; }
	void print() {
		cout << "Color - " << getColor() << endl;
	}
};
//Apple
class Apple {
	string sort;
	double weight;
public:
	Apple() {
		sort = "Ranetka";
		weight = 10;
	}
	Apple(string fsort, double fweight) {
		sort = fsort;
		weight = fweight;
	}
	string getSort() { return sort; }
	double getWeight() { return weight; }
	void setSort(string fsort) { sort = fsort; }
	void setWeight(double fweight) { weight = fweight; }
	void print() {
		cout << "Sort - " <<sort << endl;
		cout << "Weight - " << weight << endl;
	}
};
	int main() {
		//Cat
		/*Cat Barsik;
		Cat Vaska('m', "Vaska", 5.3, 4);
		Vaska.setWeight(6.1);
		cout << Vaska.getWeight() << endl;*/
		/*Vaska.print();*/
		//Baana
		/*Banan Banan1;
		Banan1.print();
		Banan1.setColor("Yellow");
		Banan1.print();*/
		//Apple
		Apple Apple1;
		Apple1.print();
		Apple Apple2("Antonovka", 20);
		Apple2.print();
		return 0;
	}