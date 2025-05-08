/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
//using namespace std ;
struct Person {

	std::string sNachname;
	std::string sVorname;
	int iGeburtsjahr;
	int iAlter ;

	};
int main(){
    Person nBenutzer;

    std::cout << "Bitte geben Sie Ihren Vornamen ein: ";
    std::cin >> nBenutzer.sVorname;
    std::cout << "Bitte geben Sie Ihren Nachnamen ein: ";
    std::cin >> nBenutzer.sNachname;
    std::cout << "Bitte geben Sie Ihr Geburtsjahr ein: ";
    std::cin >> nBenutzer.iGeburtsjahr;
    std::cout << "Bitte geben Sie Ihr Alter ein: ";
    std::cin >> nBenutzer.iAlter;

    std::cout << "\n nBenutzer:" << std::endl;
    std::cout << nBenutzer.sVorname << " " << nBenutzer.sNachname
              << ", Geburtsjahr: " << nBenutzer.iGeburtsjahr
              << ", Alter: " << nBenutzer.iAlter << std::endl;
    // Kopie 1
    Person nKopieEinzeln;

     nKopieEinzeln.sVorname = nBenutzer.sVorname;
     nKopieEinzeln.sNachname = nBenutzer.sNachname;
     nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
     nKopieEinzeln.iAlter = nBenutzer.iAlter;

     // Kopie 2
     Person nKopieGesamt = nBenutzer;

   //AUSGABE  von den Kopien
     std::cout << "\nKopie einzeln-nKopieEinzeln:" << std::endl;
     std::cout << nKopieEinzeln.sVorname << " " << nKopieEinzeln.sNachname
               << ", Geburtsjahr: " << nKopieEinzeln.iGeburtsjahr
               << ", Alter: " << nKopieEinzeln.iAlter << std::endl;

     std::cout << "\nKopie komplett-nKopieGesamt:" << std::endl;
     std::cout << nKopieGesamt.sVorname << " " << nKopieGesamt.sNachname
               << ", Geburtsjahr: " << nKopieGesamt.iGeburtsjahr
               << ", Alter: " << nKopieGesamt.iAlter << std::endl;
// in this versuch we saw that we can copie the struct in 2 ways 1 : we can copie each variable in the struct ,
     //2 we can copy the whole struct at once
    return 0;
    
}
