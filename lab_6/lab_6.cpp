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
	string tekst;
	cout << "wprowadz dowolny tekst: ";
	cin >> tekst;

	cout << "Twoj tekst ma dlugosc " << tekst.length() << " znakow" << endl;
}