#include <iostream>
#include <fstream>
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

    /*
        Case 1 Simulation; we use the file uptimeFileCase1
    */
    monFlux.open(myFileCase1);  // Stream's opening
    // Stream Opening verification
    if(monFlux)
    {
        // Uptime and Idle values recuperation
        monFlux >> uptime;
        monFlux >> idle;

        cout << "Cas 1 : Serveur operationnel depuis moins d'une heure :" << endl;
        // Transformation Display
        cout << '\t' << uptime_obj.getLocalTime() << " up " << uptime_obj.calculerUptimeIdle(uptime) << "\tidle " << uptime_obj.calculerUptimeIdle(idle) << endl;
    }
    else
    {
        cout << "\n\nERREUR : Impossible d'ouvrir le fichier en lecture!" << endl;
    }
    monFlux.close(); // Stream's closure

    /*
        Case 2 Simulation; we use the file uptimeFileCase2
    */
    monFlux.open(myFileCase2);  // Stream's opening
    // Stream Opening verification
    if(monFlux)
    {
        // Uptime and Idle values recuperation
        monFlux >> uptime;
        monFlux >> idle;

        cout << "Cas 2 : Serveur operationnel depuis moins d'un jour mais plus d'une heure :" << endl;
        // Transformation Display
        cout << '\t' << uptime_obj.getLocalTime() << " up " << uptime_obj.calculerUptimeIdle(uptime) << "\tidle " << uptime_obj.calculerUptimeIdle(idle) << endl;
    }
    else
    {
        cout << "\n\nERREUR : Impossible d'ouvrir le fichier en lecture!" << endl;
    }
    monFlux.close(); // Stream's closure

    /*
        Case 3 Simulation; we use the file uptimeFileCase3
    */
    monFlux.open(myFileCase3);  // Stream's opening
    // Stream Opening verification
    if(monFlux)
    {
        // Uptime and Idle values recuperation
        monFlux >> uptime;
        monFlux >> idle;

        cout << "Cas 3 : Serveur operationnel depuis un jour :" << endl;
        // Transformation Display
        cout << '\t' << uptime_obj.getLocalTime() << " up " << uptime_obj.calculerUptimeIdle(uptime) << "\tidle " << uptime_obj.calculerUptimeIdle(idle) << endl;
    }
    else
    {
        cout << "\n\nERREUR : Impossible d'ouvrir le fichier en lecture!" << endl;
    }
    monFlux.close(); // Stream's closure

    /*
        Case 4 Simulation; we use the file uptimeFileCase4
    */
    monFlux.open(myFileCase4);  // Stream's opening
    // Stream Opening verification
    if(monFlux)
    {
        // Uptime and Idle values recuperation
        monFlux >> uptime;
        monFlux >> idle;

        cout << "Cas 4 : Serveur operationnel depuis plusieurs jours :" << endl;
        // Transformation Display
        cout << '\t' << uptime_obj.getLocalTime() << " up " << uptime_obj.calculerUptimeIdle(uptime) << "\tidle " << uptime_obj.calculerUptimeIdle(idle) << endl;
    }
    else
    {
        cout << "\n\nERREUR : Impossible d'ouvrir le fichier en lecture!" << endl;
    }
    monFlux.close(); // Stream's closure


    return 0;
}
