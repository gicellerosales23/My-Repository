#include <iostream>
using namespace std;

int main() {
    int a1 , a2 , a3;

    cout << "Enter three numbers " <<endl << endl;

    cout << "Number 1: ";
    cin >> a1;
    cout<< "Number 2: ";
    cin >> a2;
    cout<< "Number 3: ";
    cin >> a3;


    if(a1 >= a2 && a1 >= a3)
        cout <<endl<< "Largest number among three numbers is " << a1<<endl;

    else if(a2 >= a1 && a2 >= a3)
        cout <<endl<< "Largest number among three numbers is " << a2<<endl;

    else if(a3 >= a1 && a3 >= a2)
        cout <<endl<< "Largest number among three numbers is " << a3<<endl;
        
        
    cout << endl <<"Programmed By: Rosales Gicelle ";
    return 0;
}
