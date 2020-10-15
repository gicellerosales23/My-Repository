#include <iostream>
using namespace std;

int main (){
	
	int a, b, c;
	
	cout << "==============================================" << endl;
	cout << "Choose what dessert you want to purchase. =)" << endl;
	cout << "[1] Chocolate Cake = Php 350 " << endl;
	cout << "[2] Milk Tea  = Php 89" << endl;
	cout << "[3] Ice Cream  = Php 50" << endl;
	cout << "[4] Leche flan  = Php 50" << endl;
	cout << "==============================================" << endl;
	
	cout << endl << "Choose number: ";
	cin >> a;
	
	if (a == 1)
		cout << "Chocolate Cake = Php 350" << endl;
	else if (a == 2)
		cout << "Milk Tea = Php 89" << endl;
	else if (a == 3)
		cout << "Ice Cream = Php 50" << endl;
	else if (a == 4)
		cout << "Leche flan = Php 50" << endl;
		
	cout << endl << "Cash Payment: ";
	cin >> b;
	
	if (a==1){
		cout << b << " - 350" << endl;
		c= b-350;
		if (b<350)
			cout << "Not enough Cash. Error" << endl;
		else
			cout << "Your change is " << c << endl;
	}
	else if (a==2){
		cout << b << " - 89" << endl;
		c= b-89;
		if (b<89)
			cout << "Not enough Cash. Error" << endl;
		else
			cout << "Your change is " << c << endl;
	}
	else if (a==3){
		cout << b << " - 50" << endl;
		c= b-50;
		if (b<50)
			cout << "Not enough Cash. Error" << endl;
		else
			cout << "Your change is " << c << endl;
	}
	else if (a==4){
		cout << b << " - 50" << endl;
		c= b-50;
		if (b<50)
			cout << "Not enough Cash. Error" << endl;
		else
			cout << "Your change is " << c << endl;
	}
		
	cout << endl <<"Programmed By: Rosales Gicelle";
	return 0;
}
