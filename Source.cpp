#include <iostream>
using namespace std;

int main()
{
	string pismeno;
	int odpoved;

	cout << "Quiz" << endl;

	cout << "1.otazka" << endl;
	cout << "kedy vysiel prvy apple produkt ?" << endl;
	cout << "a) 1945 " << endl;
	cout << "b) 1995" << endl;
	cout << "c) 1976" << endl;
	cout << "d) 2007" << endl;

	cin >> pismeno;

	if (pismeno == "a")
	{
		odpoved = 1;
	}
	else if (pismeno == "b")
	{
		odpoved = 2;
	}
	else if (pismeno == "c")
	{
		odpoved = 3;
	}
	else if (pismeno == "d")
	{
		odpoved = 4;
	}
	switch (odpoved)
	{
	case 1:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 2:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 3:
		cout << "spravna odpoved" << endl;
		break;
	case 4:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	}

	cout << "2.otazka" << endl;
	cout << "co bol prvy produkt apple ? " << endl;
	cout << "a) pocitac" << endl;
	cout << "b) mobil " << endl;
	cout << "c) notebook " << endl;
	cout << "d) hodinky " << endl;

	cin >> pismeno;

	if (pismeno == "a")
	{
		odpoved = 1;
	}
	else if (pismeno == "b")
	{
		odpoved = 2;
	}
	else if (pismeno == "c")
	{
		odpoved = 3;
	}
	else if (pismeno == "d")
	{
		odpoved = 4;
	}
	switch (odpoved)
	{
	case 1:
		cout << "spravna odpoved" << endl;

		break;
	case 2:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 3:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 4:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	}
	cout << "3.otazka" << endl;
	cout << "ako sa volal prvy iphone ?" << endl;
	cout << "a) iphone 2G " << endl;
	cout << "b) iphone 1 " << endl;
	cout << "c) iphone " << endl;
	cout << "d) iphone 4" << endl;

	cin >> pismeno;

	if (pismeno == "a")
	{
		odpoved = 1;
	}
	else if (pismeno == "b")
	{
		odpoved = 2;
	}
	else if (pismeno == "c")
	{
		odpoved = 3;
	}
	else if (pismeno == "d")
	{
		odpoved = 4;
	}
	switch (odpoved)
	{
	case 1:
		cout << "spravna odpoved" << endl;
		break;
	case 2:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 3:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	case 4:
		cout << "Nespravna odpoved" << endl;
		return 0;
		break;
	}
	cout << "koniec " << endl;
	cout << "vsetky odpovede boli spravne" << endl;
}