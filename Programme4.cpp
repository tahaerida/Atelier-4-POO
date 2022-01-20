#include <iostream>
#include <string>
#include <list>
using namespace std;

class person {
	string nom, prenom;
	int age;
public:
	void set(string nom, string prenom, int age) {
		this->nom = nom;
		this->prenom = prenom;
		this->age = age;
	}
	string get_nom() {
		return nom;
	}
	void print() {
		cout << "nom : " << nom << ", prenom : " << prenom << ", age : " << age << endl;
	}
	friend bool Compare_name(person, person);
};

bool Compare_name(person First, person Next)
{
	if (First.nom < Next.nom)
		return true;
	if (First.nom > Next.nom)
		return false;
	return true;
}

int main() {
	list<person> mylist;
	person man;
	string nom, prenom;
	int age = 0, i = 1;
	cout << "Adding persons (enter random person with age = -999 to stop) :\n";
	while (age != -999) {
		cout << "Enter person" << i << " nom : ";
		getline(cin, nom);
		cout << "Enter person" << i << " prenom : ";
		getline(cin, prenom);
		cout << "Enter person" << i << " age : ";
		cin >> age;
		getchar();

		if (age != -999) {
			man.set(nom, prenom, age);
			mylist.push_back(man);
		}
	}
	
	cout << "\n\n\n";
	cout << "Before sorting :\n\n";
	for (list<person>::iterator it = mylist.begin(); it != mylist.end(); it++) {
		it->print();
	}
	cout << "\n\n\n";
	cout << "After sorting :\n\n";
	mylist.sort(Compare_name);
	for (list<person>::iterator iter = mylist.begin(); iter != mylist.end(); iter++) {
		iter->print();
	}

	return 0;
}
