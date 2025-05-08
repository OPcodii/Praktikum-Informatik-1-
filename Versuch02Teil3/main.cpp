#include <iostream>
#include <string>
std::string verschluesseln(std::string wort, char tabelle[2][26]) {
    std::string geheimtext = "";

    for (int i = 0; i < wort.length(); ++i) {
        char c = wort[i];
        for (int j = 0; j < 26; ++j) {
            if (tabelle[0][j] == c) {
                geheimtext += tabelle[1][j];
                break;
            }
        }
    }

    return geheimtext;
}
std::string entschluesseln(std::string geheim, char tabelle[2][26]) {
    std::string geheimtext = "";

    for (int i = 0; i < geheim.length(); ++i) {
        char c = geheim[i];
        for (int j = 0; j < 26; ++j) {
            if (tabelle[1][j] == c) {
                geheimtext += tabelle[0][j];
                break;
            }
        }
    }

    return geheimtext;
}
int main(){
	char tabelle[2][26] = {
	    {'A','B','C','D','E','F','G','H','I','J','K','L','M',
	     'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},

	    {'Q','W','E','R','T','Z','U','I','O','P','A','S','D',
	     'F','G','H','J','K','L','Y','X','C','V','B','N','M'}
	};
	/*char tabelle2[2][26] = {
		{'Q','W','E','R','T','Z','U','I','O','P','A','S','D',
	     'F','G','H','J','K','L','Y','X','C','V','B','N','M'} ,

		 {'A','B','C','D','E','F','G','H','I','J','K','L','M',
		  'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}

	};*/

	  std::string klartext;
	  std::cout << "Gib ein Wort in GROSSBUCHSTABEN ein: ";
	  std::cin >> klartext;

	  std::string geheim = verschluesseln(klartext, tabelle);
	  std::cout << "Verschlüsselt: " << geheim << std::endl;

	  std::string Entschluess = entschluesseln(geheim ,tabelle);
	  std::cout << "Entschlüsselt: " << Entschluess << std::endl;
}
