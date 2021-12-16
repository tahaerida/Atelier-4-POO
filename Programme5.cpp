#include<iostream>
#include<iterator>
#include<set>
#include<algorithm>

using namespace std;
//Function for searching the element
bool rechercher(set<int> s, int valeur){
	return s.find(valeur) != s.end();//returning true (1) if the element is found, or false (0) if not
}

int main(){
	int b;
	set<int>s1;
	//insering numbers to the set
	for( int i=1 ; i<=100 ; i++){
		s1.insert(i);
	}
	cout<<"Enter a number : ";
	cin>>b;//insering number that we wanna find
	//Displaying the result
	if(rechercher(s1, b)){
		cout<<"\nThe number exists in the list.";
	}
	else
		cout<<"\nSorry, we couldn't find the number.";
	return 0;
}
