#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <string>

class TimeConversion {
public:
    TimeConversion();
    std::string calculerUptimeIdle(double const& timevalue);
    std::string getLocalTime();
};



#endif // CALCULATOR_H_INCLUDED
