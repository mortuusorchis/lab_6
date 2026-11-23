#include <iostream>
#include <string>
using namespace std;

int main() {

// zadanie 1
	/*int a = 7;
	int b = 2;

	cout << a / b << endl;
	cout << static_cast<double>(a)/b << endl;
	cout << static_cast<double>(a / b) << endl;
	} */

// zadanie 2
	 /* double a = 3.99;
	 cout << static_cast<int>(a) << endl;
	 cout << (int)double(a) << endl;

	 double b = -3.99;
	 cout << static_cast<int>(a) << endl;
	 cout << (int)double(a) << endl;
	 }*/

// zadanie 3
	 /*char a = 'A';
	 cout << static_cast<int>(a) << endl;

	 int b = 65;
	 cout << static_cast<char>(b) << endl;
	 } */

// zadanie 4
	/* int suma = 11;
	int liczba_elementow = 4; 

	double srednia1 = suma / liczba_elementow;
	double srednia2 = static_cast<double>(suma) / liczba_elementow;

	cout << "Bez rzutowania: " << srednia1 << endl;
	cout << "Z rzutowaniem: " << srednia2 << endl;

	return 0;
	} */

// zadania 5 
	 /*int m_elementy;
	 int w_elementy;
	 cout << "Podaj ile wykonales elementow: ";
	 cin >> m_elementy;
	 cout << "Podaj ile jest wszystkich elementow: ";
	 cin >> w_elementy;

	 if (m_elementy < 0 || m_elementy > w_elementy || w_elementy == 0) {
		 cout << "Podales nieprawidlowe dane" << endl;
		 return 1;
	 }
	 cout << "Wykonles :" << static_cast<double>(m_elementy) / (w_elementy) * 100 << " % wszystkich elementow" << endl;

	 }*/

// zadanie 6
     /* string tekst;
	cout << "wprowadz dowolny tekst: ";
	getline(cin, tekst);

	cout << "Twoj tekst ma dlugosc " << tekst.length() << " znakow" << endl;
     } */

// zadanie 7
/*	string tekst;
	int dlugosc;
	int indeks;
	
	cout << "Drogi uzytkowniku podaj dowolny tekst: ";
	
	getline(cin, tekst); // wczyta cały tekst a nie tylko pierwsze słowo
	
	cout << "Podaj indeks poczatkowy: "; 
	cin >> indeks;
	
	cout << "Podaj dlugosc fragmentu: ";
	cin >> dlugosc;
	
	cout << "Wyciety fragment: "
		<< tekst.substr(indeks, dlugosc);

	return 0;
} 
*/

// zadanie 8
/*string data;

cout << "Podaj date w formacie RRRR-MM-DD: ";
cin >> data;

int pozycja1 = data.find('-');
int pozycja2 = data.find('-', pozycja1 + 1);

string rok = data.substr(0, pozycja1);
string miesiac = data.substr(pozycja1 + 1, pozycja2 - pozycja1 - 1);
string dzien = data.substr(pozycja2 + 1);

cout << "Rok: " << rok << endl;
cout << "Miesiac: " << miesiac << endl;
cout << "Dzien: " << dzien << endl;

return 0;
}*/

// zadanie 9 
/*string tekst;
string wyraz;

cout << "Podaj dowolny tekst: ";
getline(cin, tekst);

cout << "Teraz podaj jakiego wyrazu szukasz: ";
cin >> wyraz;

int pozycja1 = tekst.find(wyraz);

if (pozycja1 != -1) {
	cout << "Podany wyraz po raz pierwszy wystepuje na miejscu: " << pozycja1;
}
else {
	cout << "Wyraz nie wytepuje w tekscie. ";
}
}*/

// zadanie 10
/* string adres;

cout << "Poda swoj aderes internetowy: ";
getline(cin, adres);
int pozycja1 = adres.find('@');

string nazwa_uzytkownika = adres.substr(0, pozycja1);
string domena = adres.substr(pozycja1 + 1);

cout << "Nazwa uzytkownika: " << nazwa_uzytkownika << endl;
cout << "Domena: " << domena << endl;

}*/

// zadanie 11
/*
string imie;
string nazwisko;

cout << "Podaj swoje imie: ";
getline(cin, imie);

cout << "Podaj swoje nazwisko: ";
getline(cin, nazwisko);

string razem =  imie + " " + nazwisko;
cout << "Pelne imie i nazwisko: " << razem << endl;
cout << "Twoj tekst ma dlugosc: " << razem.length() - 1  << " znakow" << endl;
	 } */

// zadanie  12
string liczba_tekst;

cout << "Podaj dowolna liczba (cyfrowo): ";
cin >> liczba_tekst;

int liczba_liczba = stoi(liczba_tekst);

cout << "Twoja liczba to: " << liczba_liczba << endl;
cout << "Podwojenie twojej liczby to: " << 2 * liczba_liczba << endl;
cout << "Twoja liczba powiekszona o 10 to: " << liczba_liczba + 10 << endl;
}
