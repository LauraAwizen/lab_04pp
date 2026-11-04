

#include <iostream>
using namespace std;
//int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
//void wyswietlanie(int a, int b); //funkcja bedaca procedura :)
//
//int zmiennaGlobalna = 10;

//int main() { //kod 04_05
	/*	int a = 45, b = 25;
		int suma = dodawanie(a, b);
		cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
		a += 4;
		wyswietlanie(a, b);
		cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
		cout << "Wartosci a oraz b: " << a << " i " << b << endl;
		return 0;
	}
	
	int dodawanie(int c, int b) {
		b = c + b;
		return b;
	}
	
	void wyswietlanie(int a, int b) {
		cout << "Wynik procedury / funkcji z void: " << a + b << endl;
		zmiennaGlobalna = 20;
		a = 111;
		b = 222;
}*/
//kom
////zad.1
//void funkja(string imie);
////zad.2
//void funkcja2();
//zad.3
void funkcja31(int a, int b);
void funkcja32(int a, int b);


int main (){
	//zad.1
//string imie;
//cout << "jak masz na imie?";
//cin >> imie;
//funkja(imie);
//
////zad.2
//
//funkcja2();
//zad.3
int a, b;
cout << "podaj 2 liczby:";
cin >> a >> b;
funkcja31(a, b);
funkcja32(a, b);

		return 0;
}
//zad.1
//void funkja(string imie) {
//	cout << "czeœæ, " << imie<<endl;
//}
//zad.2
//void funkcja2() {
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 1; j <= 10; j++) {
//			cout << i * j<<"\t";
//		}
//		cout << endl;
//	}
//}
//zad.3
void funkcja31(int a, int b) {
	if (a > b) {
		cout << a << "<" << b;
	}
	else if (a < b) {
		cout << b << "<" << a;
	}
	else if (a == b) {
		cout << a << "=" << b;
	}
}
void funkcja32(int a, int b) {
	if (a > b) {
		cout << a;
	}
	else if (b < a) {
		cout << b;
	}
	else if (a == b) {
		cout << a << "=" << b;
	}
}