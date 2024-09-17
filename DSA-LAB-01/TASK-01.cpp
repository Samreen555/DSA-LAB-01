#include<iostream>
#include<string>
using namespace std;
class House
{
	// variable declaration 
	string Owner;
	string Address;
	int Bedrooms;
	float Price;
public:
	void get_info()
	{
		cout << "Enter Owner (max 20 character): ";
		getline(cin, Owner);
		if (Owner.length() > 20)
			Owner = Owner.substr(0, 20);
		cout << "Enter Address (max 20 character): ";
		getline(cin, Address);

		if (Address.length() > 20)
			Address = Address.substr(0, 20);
		cout << "Number of Bedrooms ?:";
		cin >> Bedrooms;
		cout << "Price: ";
		cin >> Price;
		cin.ignore();
	}
	void read()
	{

		cout << Owner << "      \t" << Address << "       \t" << Bedrooms << "     \t" << Price;
		cout << endl;
	}
};
int main()
{
	const int MAX_HOUSES = 100;
	House available[MAX_HOUSES];
	int count = 0;
	char choice;
	do {
		cout << "Enter details for house " << count + 1 << ":" << endl;
		available[count].get_info();
		count++;
		if (count >= 100) {
			cout << "Array full, cannot enter more houses." << endl;
			break;
		}
		cout << "Enter another house? (Y/N): ";
		cin >> choice;
		cin.ignore();
	} while (choice == 'Y' || choice == 'y');
	cout << "\nOwner     \t     Address         \tBedrooms     \tPrice\n";
	cout << "---------------------------------------------------------------";
	cout << endl;
	for (int i = 0; i < count; i++) {
		available[i].read();
	}
	system("pause");
	return 0;
}