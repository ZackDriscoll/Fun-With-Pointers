//Learning how to use Pointers
//Author: Zack Driscoll

#include <iostream>

using namespace std;

int main()
{
	//Title of the application
	cout << "\n\n\t\t *** Pointers are Easy *** \n";

	//If you have a ref, you have to have something to refer to
	int age = 21;
	

	//************************ Create a ref to age ***************************

	//A ref will never be different from what it is referencing
	int &r_age = age;

	//Print values
	cout << "\nMy age from the variable age says: " << age << endl;
	cout << "\nMy age from the reference r_age says: " << r_age << endl;

	//Change the value of the ref as an example
	cout << "\nNow I'm changing the ref r_age value\n";
	r_age = 25;

	//Print values
	cout << "\nMy age from the variable age says: " << age << endl;
	cout << "\nMy age from the reference r_age says: " << r_age << endl;


	//************************ Pointer Land Below *****************************

	//Pointers can only hold one thing: Memory Address
	//Here &age is calling on the memory address for the variable age
	int *p_age = &age;

	//Print values
	cout << "\nMy age from the variable age says: " << age << endl;
	cout << "\nThe address of age is : " << &age << endl;
	cout << "\nThe pointer p_age has its own address which is: " << &p_age << endl;
	cout << "\nMy age from the pointer p_age says: " << p_age << endl;
	cout << "\nMy age from the from dereferencing the pointer p_age says: " << *p_age << endl;

	return 0;
}