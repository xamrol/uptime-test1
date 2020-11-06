#include "calculator.h"
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

// Constructor
TimeConversion::TimeConversion()
{
	nbJours = 0;
	nbHeures = 0;
	nbMinutes = 0;
	nbSecondes= 0;
}

/*
    This method will be used to transform any uptime and idle value
    into a string giving a precision of the number of days,
    hours and minutes
*/
string TimeConversion::calculerUptimeIdle(double const& timevalue)
{
    string resultat;
    int nbJours(0),nbHeures(0),nbMinutes(0);
    string chaineJours,chaineHeures("");
    double intertimevalue(timevalue);


    if(intertimevalue<60.)
    {
        resultat = " 0 min";
    }
    else
    {
        do
        {
            // 1 jour = 24*60*60 = 86400 secondes
            // 1 heure = 60*60   = 3600 secondes
            // 1 minute = 1*60   = 60 secondes

            if(intertimevalue>=86400.)
            {
                nbJours = floor(intertimevalue/86400.);
                intertimevalue -= nbJours * 86400.;
            }
            else if (intertimevalue>=3600)
            {
                 nbHeures = floor(intertimevalue/3600.);
                intertimevalue -= nbHeures * 3600.;
            }
            else
            {
                 nbMinutes = floor(intertimevalue/60.);
                intertimevalue -= nbMinutes * 60.;
            }
        } while(intertimevalue>=60.);


        //resultat = to_string(nbJours) + " days " + to_string(nbHeures) + " hours " + to_string(nbMinutes) + " min ";

        switch(nbJours)
        {
        case 0:
            chaineJours = "";
            break;
        case 1:
            chaineJours = "1 day";
            break;
        default:
            chaineJours = to_string(nbJours) + " days";
        }

        if(nbJours>0 && (nbHeures>0 || nbMinutes>0))
        {
            chaineJours += ", ";
        }

        if(nbHeures==0)
        {
            chaineHeures = to_string(nbMinutes) + " min";
        }
        else
        {
            /*if(nbHeures<10)
            {
                chaineHeures = "0" + to_string(nbHeures) + ":";
            }
            else
            {
                chaineHeures = to_string(nbHeures) + ":";
            }*/
            chaineHeures = to_string(nbHeures) + ":";

            if(nbMinutes<10)
            {
                chaineHeures += "0" + to_string(nbMinutes);
            }
            else
            {
                chaineHeures += to_string(nbMinutes);
            }
        }

        resultat = chaineJours + chaineHeures;

    }

    return resultat;
}

/*
    We use this function to retrieve the local system time
*/
string TimeConversion::getLocalTime()
{
    string actualLocalTime;
    time_t timer1;
    time(&timer1);
   // int secondes, minutes, heures;
    struct tm *newTime1;
    newTime1 = localtime(&timer1);
    nbHeures = newTime1->tm_hour;		// Getting the hours
    nbMinutes = newTime1->tm_min;		// Getting the minutes
    nbSecondes = newTime1->tm_sec;	// Getting the seconds

    actualLocalTime = ((nbHeures>9)? to_string(nbHeures):'0'+to_string(nbHeures)) + ':' + ((nbMinutes>9)? to_string(nbMinutes):'0'+to_string(nbMinutes)) + ':' + ((nbSecondes>9)? to_string(nbSecondes):'0'+to_string(nbSecondes));

    return actualLocalTime;
}

void TimeConversion::check_file_value(double const& uptm, double const& idle){
    if (uptm<0 || idle<0)
    {
         cout << "erreur: \"Une valeur est negative dans le fichier!\"" << endl;
         exit(1);
    }
    else if (uptm < idle)
        {
             cout << "erreur: \"uptime ne peux pas etre plus petit que idle !\"" << endl; 
             exit(1);
        }
        else {
            cout << "\"Les valeurs du fichier sont correctes !\"" << endl;
        }

}

int TimeConversion::GetNbjours(){
    return nbJours;
}
int TimeConversion::GetNbMinutes(){
    return nbMinutes;
}
int TimeConversion::GetNbSecondes(){
    return nbSecondes;
}
int TimeConversion::GetNbHeures(){
    return nbHeures;
}
