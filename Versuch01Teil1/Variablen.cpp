#include <iostream>
#include <string>
int main() {
    int iErste, iZweite;
    std::string sVorname, sNachname ;

    std::cout << "Geben Sie zwei ganze Zahlen ein:" << std::endl;

    std::cout << "Erste ganze Zahl (iErste): ";
    std::cin >> iErste;

    std::cout << "Zweite ganze Zahl (iZweite): ";
    std::cin >> iZweite;

    int iSumme = iErste + iZweite;
    int iQuotient = iErste / iZweite;

    std::cout << "\n Teil 1: Ganzzahlige Berechnung" << std::endl;
    std::cout << "Summe (iSumme): " << iSumme << std::endl;
    std::cout << "Ganzzahliges Ergebnis der Division (iQuotient): " << iQuotient << std::endl;

    double dSumme = iErste + iZweite;
    double dQuotient = iErste / iZweite;

    std::cout << "\n Teil 2: double, aber ohne Cast " << std::endl;
    std::cout << "Summe (dSumme): " << dSumme << std::endl;
    std::cout << "Division (dQuotient): " << dQuotient << std::endl;

    double dCastSumme = (double)iErste + (double)iZweite;
    double dCastQuotient = (double)iErste / (double)iZweite;

    std::cout << "\n Teil 3: double mit Cast " << std::endl;
    std::cout << "Summe (dSumme): " << dCastSumme << std::endl;
    std::cout << "Division (dQuotient): " << dCastQuotient << std::endl;

    std::cout << "Bitte geben Sie Ihren Vornamen ein: ";
    std::cin >> sVorname;

    std::cout << "Bitte geben Sie Ihren Nachnamen ein: ";
    std::cin >> sNachname;

    std::string sVornameName = sVorname + " " + sNachname;
    std::string sNameVorname = sNachname + ", " + sVorname;

    std::cout << "Vorname Nachname: " << sVornameName << std::endl;
    std::cout << "Nachname, Vorname: " << sNameVorname << std::endl;

    {
        int iFeld[2];
        iFeld[0] = 1;
        iFeld[1] = 2;

        std::cout << "iFeld[0]: " << iFeld[0] << std::endl;
        std::cout << "iFeld[1]: " << iFeld[1] << std::endl;
    }
    {
        int spielfeld[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cout << spielfeld[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    {
        const int iZweite = 1;
        std::cout << "iZweite im Block: " << iZweite << std::endl;
    }

    std::cout << "iZweite außerhalb des Blocks: " << iZweite << std::endl;

    int iName1 = (int)sVorname[0];
    int iName2 = (int)sVorname[1];

    std::cout << "ASCII-Wert von sVorname[0] (iName1): " << iName1 << std::endl;
    std::cout << "ASCII-Wert von sVorname[1] (iName2): " << iName2 << std::endl;

    int iPos1 = iName1 % 32;
    int iPos2 = iName2 % 32;

    std::cout << "Position des ersten Buchstabens im Vornamen im deutschen Alphabet: " << iPos1 << std::endl;
    std::cout << "Position des zweiten Buchstabens im Vornamen im deutschen Alphabet: " << iPos2 << std::endl;

    return 0;
}
