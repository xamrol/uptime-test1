#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "calculator.h"

using namespace std;

int main()
{
    // Declarations & Initializations
    string const myFileCase1("inputfiles/uptimeFileCase1.txt");
    string const myFileCase2("inputfiles/uptimeFileCase2.txt");
    string const myFileCase3("inputfiles/uptimeFileCase3.txt");
    string const myFileCase4("inputfiles/uptimeFileCase4.txt");
    ifstream monFlux;
    double uptime,idle;

    TimeConversion uptime_obj;

    // Welcome Message
    cout << "Bienvenue au jeu d'emulation de la commande uptime.\n" << endl;

    return 0;
}
