#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <string>

class TimeConversion {
public:
    TimeConversion();
    std::string calculerUptimeIdle(double const& timevalue);
    std::string getLocalTime();
    void check_file_value(double const& uptm, double const& idle);
    int GetNbjours();
    int GetNbHeures();
    int GetNbMinutes();
    int GetNbSecondes();
private:
    int nbJours;
    int nbHeures;
    int nbMinutes;
    int nbSecondes;
};



#endif // CALCULATOR_H_INCLUDED
