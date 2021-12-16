#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class person{
	public:
	string firstName, lastName;
	int age;
	//for initialise the objects
	void set(string firstName, string lastName, int age){
		this->firstName = firstName;
		this->lastName = lastName;
		this->age = age;
	}
};

int main(){
	list<person> myList;//creating list
	person myAlgoPerson;//creating object of the class
	string fName, Lname;
	int AGE;
	cout<<"Entering information(add a rendom person with negative age for stop insering):\n"<<endl;
	do{
		cout<<"\nEnter first name please : ";
		getline(cin, fName);
		cout<<"Enter last name please : ";
		getline(cin, Lname);
		cout<<"Enter age please : ";
		cin>>AGE;
		getchar();
		myAlgoPerson.set(fName, Lname, AGE);//initialise the objects
		myList.push_back(myAlgoPerson);//adding objects to the list
	}while(AGE>0);
	myList.pop_back();//deleting the last rendom object
	
	cout<<"\n";
	//Displaying the list
	for(list<person>:: iterator itr = myList.begin(); itr!= myList.end() ; itr++){
		int count = 1;
		string firstname = itr->firstName;
		string lastname = itr->lastName;
		int aage = itr->age;
		cout<<"Person"<<count<<"\n\tFirst name : "<<firstname<<"\n\tLast name : "<<lastname<<"\n\tAge : "<<aage<<endl;
		count++;
	}
	return 0;
}








