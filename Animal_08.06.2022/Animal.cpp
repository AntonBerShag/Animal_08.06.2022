#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	Animal() {};
	virtual ~Animal() {};
	void eat() {
		cout << "Animal eat!\n\n";
	}
	void walk() {
		cout << "Animal walk!\n\n";
	}
};

class Herbivores : public Animal {
public:
	Herbivores() {};
	virtual ~Herbivores() {};
	void beBitten(Animal &animal) {
		cout << "Bit by predator!\n\n";
	}
};

class Predatory : public Animal {
public:
	Predatory() {};
	virtual ~Predatory() {};
	void beBitten(Animal &animal) {
		cout << "Bit by herbivor!\n\n";
	}
};

class Cat:public Predatory {
public:
	Cat() {};
	virtual ~Cat() {};
	void mur() {
		cout << "Cat say:\"Mur\"\n\n";
	}
	void jump() {
		cout << "Cat jump!\n\n";
	}
};

class Parrot :public Herbivores {
public:
	Parrot() {};
	virtual ~Parrot() {};
	void fly() {
		cout << "Parrot fly!\n\n";
	}
	void talk() {
		cout << "Parrot fly!\n\n";
	}
	void beBitten(Animal &animal) {
		cout << "Perrot bit by cat!\n\n";
	}
};

int main() {
	setlocale(LC_ALL, "Russian");

	Cat Snejok;
	Parrot Vasya;

	Snejok.eat();
	Snejok.mur();

	Vasya.walk();
	Vasya.talk();
	Vasya.beBitten(Snejok);

	return 0;
}
