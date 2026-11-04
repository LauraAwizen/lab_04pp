

#include <iostream>
#include <cmath>
using namespace std;

//zad.1
//void funkja(string imie);
//zad.2
//void funkcja2();
//zad.3
//void funkcja31(int a, int b);
//void funkja32(int a, int b);
//zad.4
//void funkcja41(int a, int b, int c);
//int zwracanie(int a, int b, int c);
//zad.5
double pole(double& wysokosc, double& podstawa);
//zad.6
void f(int n);
//zad.7
//int srednia(int x, int y);
//zad.8
//void pitagoras(double a, double b, double c);
//zad.10
int suma1(int x);
void suma2(int x);

int main (){
	//zad.1
//string imie;
//cout << "jak masz na imie?";
//cin >> imie;
//funkja(imie);
//
//zad.2
//funkcja2();
// 
//zad.3
//int a, b;
//cout << "podaj 2 liczby:";
//cin >> a >> b;
//funkcja31(a, b);
//funkcja32(a, b);
// 
//zad.4
//int a, b, c;
//cout << "podaj 3 liczby:";
//cin >> a >> b >> c;
//funkcja41(a, b, c);
//zwracanie(a, b, c);

//zad.5
double wysokosc, podstawa;
pole(wysokosc, podstawa);
cout  << "podwojone pole trojkata wynosi:" << podstawa * wysokosc;

//zad.6
int n;
cout << "podaj liczbe:";
cin >> n;
f(n);
//zad.7
//int x, y;
//cout << "podaj 2 liczby:";
//cin >> x >> y;
//srednia(x, y);

//zad.8
//double a, b, c;
//cout << "podaj dlugosci przyprostakatnych" << endl;
//cin >> a >> b;
//pitagoras(a, b, c);

//zad.10
int x;
cout << "podaj liczbe skladnikow do zsumowania" << endl;
cin >> x;
suma1(x);
suma2(x);
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
//void funkcja31(int a, int b) {
//	if (a > b) {
//		cout << a << "<" << b;
//	}
//	else if (a < b) {
//		cout << b << "<" << a;
//	}
//	else if (a == b) {
//		cout << a << "=" << b;
//	}
//}
//void funkcja32(int a, int b) {
//	if (a > b) {
//		cout << a;
//	}
//	else if (b < a) {
//		cout << b;
//	}
//	else if (a == b) {
//		cout << a << "=" << b;
//	}
//}
//zad.4
//void funkcja41(int a, int b, int c) {
//	if (a < b && a < c) {
//		cout << a << "<" << b << "," << c;
//	}
//	else if (b < a && b < c) {
//		cout << b << "<" << a << "'" << c;
//	}
//	else if (c < a && c < b) {
//		cout << c << "<" << a << "," << b;
//	}
//	else if (a == b && a < c) {
//		cout << a << "<" << c;
//	}
//	else if (a == c && a < b) {
//		cout << a << "<" << b;
//	}
//	else if (b == c && b < a) {
//		cout << b << "<" << a;
//	}
//	else if (a == b && a == c) {
//		cout << a << "=" << b << "=" << c;
//	}
//}
//int zwracanie(int a, int b, int c) {
//	if (a < b && a < c) {
//		return a;
//	}
//	else if (b < a && b < c) {
//		return b;
//	}
//	else if (c < a && c < b) {
//		return c;
//	}
//	else if (a == b && a < c) {
//		return a;
//	}
//	else if (a == c && a < b) {
//		return a;
//	}
//	else if (b == c && b < a) {
//		return b;
//	}
//	else if (a == b && a == c) {
//		return a;
//	}
//}
//zad.5
double pole(double& wysokosc, double& podstawa) {
	cout << "podaj podstawe:";
	cin >> podstawa;
	cout << "podaj wysokosc:";
	cin >> wysokosc;
	cout << "pole trojkata wynosi:" << podstawa * wysokosc / 2;
	return podstawa * wysokosc / 2;
}
//zad.6
void f(int n) {
	cout << "dzielniki " << n << " to:";
	for (int dzielnik = 1; dzielnik <= n; dzielnik++) {
		if (n % dzielnik == 0) {
			cout << dzielnik << ", ";
		}
	}
}
//zad7
//int srednia(int x, int y) {
//	int a, b;
//	cout << "podaj wagi liczb" << endl;
//	cin >> a >> b;
//	return x *a+ b* y /a+b;
//}
//zad.8
//void pitagoras(double a, double b, double c) {
//	c = sqrt(a * a + b * b);
//	cout << "dlugosc przeciwprostakatnej to:" << c;
//}
//zad.10
int suma1(int x) {
    int suma, a;
    suma = 0;
    for (int i = 1; i <= x; i++) {
        cout << "podaj skladnik do sumy";
        cin >> a;
        suma += a;
    }
    return suma;
}
void suma2(int x) {
    int suma, a;
    suma = 0;
    for (int i = 1; i <= x; i++) {
        cout << "podaj skladnik do sumy";
        cin >> a;
        suma += a;
    }
    cout << "suma:" << suma;
}