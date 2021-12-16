#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

void display(list<int> myList){//Displaying function
	int count=0;
	cout<<" ______________"<<endl;
	for(list<int>::iterator it = myList.begin() ; it!=myList.end() ; it++){
		if(count<10){
				if(*it>=0 && *it<=9){
				cout<<"|Element"<<count<<":  "<<*it<<"  |"<<endl; 
				count++;
			}
			else if((*it>=-9 && *it<=-1) || (*it>=10 && *it<=99)){
				cout<<"|Element"<<count<<":  "<<*it<<" |"<<endl; 
				count++;
			}
			else if((*it>=-99 && *it<=-10) || (*it>=100 && *it<=999)){
				cout<<"|Element"<<count<<":  "<<*it<<"|"<<endl; 
				count++;
			}
		}
		else if(count>9){
			if(*it>=0 && *it<=9){
			cout<<"|Element"<<count<<": "<<*it<<"  |"<<endl; 
			count++;
			}
			else if((*it>=-9 && *it<=-1) || (*it>=10 && *it<=99)){
				cout<<"|Element"<<count<<": "<<*it<<" |"<<endl; 
				count++;
			}
			else if((*it>=-99 && *it<=-10) || (*it>=100 && *it<=999)){
				cout<<"|Element"<<count<<": "<<*it<<"|"<<endl; 
				count++;
			}
		}
	}
}

int main(){
	list<int> myList;
	cout<<"Enter elements to your list (enter '-1000' to end insering) :"<<endl;
	int ins;
	do{
		cin>>ins;//User inputs elements
		myList.push_back(ins);//insering element to the list.
	}while(ins!=-1000);
	myList.pop_back();//deletng the '-1000'.
	myList.sort();//sorting the list.
	display(myList);//displaying the list.
	return 0;
}
