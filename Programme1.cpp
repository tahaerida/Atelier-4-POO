#include <iostream> 
using namespace std; 

class Complexe{
	protected:
		float real, image;
	public:
	void set(float real, float image){
		this->real = real;
		this->image = image;
	}
	static int counter;
	void display(){//Function of displaying
		cout<<"Number"<<counter<<" = "<<real;
		counter++;
		if (image>=0)
			cout<<"+"<<image<<"i\n";
		else
			cout<<image<<"i\n";
	}
	Complexe operator +(Complexe x){//overloading the + operator
		Complexe new_num;
		new_num.real = real + x.real;
		new_num.image = image + x.image;
		return new_num;
	}
	Complexe operator -(Complexe x){//overloading the - operator
		Complexe new_num;
		new_num.real = real - x.real;
		new_num.image = image - x.image;
		return new_num;
	}
	Complexe operator *(Complexe x){//overloading the * operator
		Complexe new_num;
		new_num.real = real*x.real-image*x.image;
		new_num.image = real*x.image+image*x.real;
		return new_num;
	}
	Complexe operator /(Complexe x){//overloading the / operator
		Complexe new_num;
		new_num.real = (real*x.real+image*x.image)/(x.real*x.real+x.image*x.image);
		new_num.image = (image*x.real-real*x.image)/(x.real*x.real+x.image*x.image);
		return new_num;
	}
};
int Complexe::counter = 1;

int main() {
	int r1, r2, img1, img2;
	cout << "Enter real part of number 1 : ";
	cin >> r1;
	cout << "Enter imaginary part of number 1 : ";
	cin >> img1;
	cout << "Enter real part of number 2 : ";
	cin >> r2;
	cout << "Enter imaginary part of number 2 : ";
	cin >> img2;
	cout<<"\n";
	
	Complexe number1;
	number1.set(r1, img1);//initialise the number 1
	Complexe number2;
	number2.set(r2, img2);//initialise the number 2
	
	number1.display();//calling display for showing the number 1
	number2.display();//calling display for showing the number 2
	Complexe number3 = number1 + number2;
	cout<<"\nAdditon : ";
	number3.display();
	Complexe number4 = number1 - number2;
	cout<<"subtraction : ";
	number4.display();
	Complexe number5 = number1 * number2;
	cout<<"Multiplication : ";
	number5.display();
	Complexe number6 = number1 / number2;
	cout<<"Division : ";
	number6.display();
	
	return 0;
}
