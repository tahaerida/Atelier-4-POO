#include <iostream> 
using namespace std; 

int main() {
	string date ="010920091123";

	string day, month, year, hour, minutes;
	//separiting the string into pieces
	day = date.substr(0, 2);
	month = date.substr(2, 2);
	year = date.substr(4, 4);
	hour = date.substr(8, 2);
	minutes = date.substr(10, 2);
	
	if(day == "01")
		day="1er";
	//Making conditions for the output of the months
	if(month == "01"){
		month = "Janvier";
	} else if(month == "02"){
		month = "Fevirier";
	} else if(month == "03"){
		month = "Mars";
	} else if(month == "04"){
		month = "Avril";
	} else if(month == "05"){
		month = "Mai";
	} else if(month == "06"){
		month = "Juin";
	} else if(month == "07"){
		month = "Juillet";
	} else if(month == "08"){
		month = "Aout";
	} else if(month == "09"){
		month = "Septembre";
	} else if(month == "10"){
		month = "Octobre";
	} else if(month == "11"){
		month = "Novembre";
	} else if(month == "12"){
		month = "Decembre";
	}
	//Displayng the result
	cout<<"Le "<<day<<" "<<month<<" "<<year<<" a "<<hour<<":"<<minutes<<".";
	
	return 0;
}

