#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <limits>;
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	int dezZahl;
	string binZahl;
	dezZahl = 15;
	binZahl = "1111";

	std::cout << "Die Zahl " << dezZahl << " hat den Binarrwert " << binZahl << std::endl;
	

	string name;
	string geburtsDatum;
	name = "Michael";
	geburtsDatum = "13.04.1987";

	std::cout << name << " hat am " << geburtsDatum << " Geburtstag." << std::endl;
	

	float betrag = 100.0;
	float umstSatz = .19;
	string waehrung = " Euro";
	string str1, str2;

	str1 = "Der Betrag betraegt ";
	
	str2 = "Die Mehrwertsteuer betraegt ";

	// Ausgabe
	std::cout << str1 << betrag << waehrung << std::endl;
	std::cout << str2 << betrag*umstSatz << waehrung << std::endl;
	
	
	char name[10], name2[10];
	std::cout << "Geben Sie zwei Namen ein:" << std::endl;
	std::cin >> name >> name2;

	std:cout << "Sie haben folgende zwei Namen eingegeben: " << name << " und " << name2 <<"."<< std::endl;
	
	char text1[50];
	std::cout << "Bitte geben Sie einen Text ein:" << std::endl;
	cin.getline(text1, 50);

	std:cout << "Ihre Eingabe war: " << text1 << std::endl;
	

	int a;
	int b;
	int summe; 
	int differenz;
	int produkt;
	int quotient;
	int rest;

	std::cout << "1. Wert: " << std::endl;
	std::cin >> a;
	std::cout << "2. Wert: " << std::endl;
	std::cin >> b;

	summe = a + b;
	differenz = a - b;
	produkt = a * b;
	quotient = a / b;
	rest = a % b;

	std::cout << "Summe: \t\t" << summe << std::endl;
	std::cout << "Differenz: \t" << differenz << std::endl;
	std::cout << "Produkt: \t" << produkt << std::endl;
	std::cout << "Quotient: \t" << quotient << std::endl;
	std::cout << "Rest: \t\t" << rest << std::endl;
	*/

	int a1 = 5;
	int a2 = 10;

	std::cout << a1 << " <= 6 AND " << a1 << " >= 5: " << (a1 <= 6 && a1 >= 5 ? " Wahr" : " Falsch") << std::endl;

	system("PAUSE");
	return 0;
}