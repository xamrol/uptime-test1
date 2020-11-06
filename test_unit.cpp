#include "acutest.h"
#include "calculator.h"

void test_calculerUptimeIdle1(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(50) == (" 0 min"), "calculerUptimeIdle(%d)==%S", 50, "0 min");
}

void test_calculerUptimeIdle2(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(56402.05) == ("15:40"), "calculerUptimeIdle(%d)==%S", 56402.05, "15:40");
}
void test_calculerUptimeIdle3(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(142708.05) == ("1 day, 15:38"), "calculerUptimeIdle(%d)==%S", 142708.05, "1 day, 15:38");
}
void test_calculerUptimeIdle4(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(15005117.05) == ("173 days, 16:05"), "calculerUptimeIdle(%d)==%S", 15005117.05, "173 days, 16:05");
}
void test_calculerUptimeIdle5(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(15005117.05) == ("173 days, 16:05"), "calculerUptimeIdle(%d)==%S", 15005117.05, "173 days, 16:05");
}
void test_calculerUptimeIdle6(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(50) == (" 0 min"), "calculerUptimeIdle(%d)==%S", 50, "0 min");
}
/*void test_check_file_value1(void){
    TimeConversion c;
    TEST_CHECK_(c.check_file_value(45.0,23.0) == ("Les valeurs du fichier sont correctes !"), "check_file_value(%d, %d)==%S", 45, 23, "Les valeurs du fichier sont correctes !");
}*/



TEST_LIST = {
    {"String calculerUptimeIdle1(double const&);", test_calculerUptimeIdle1},
    {"String calculerUptimeIdle2(double const&);", test_calculerUptimeIdle2},
    {"String calculerUptimeIdle3(double const&);", test_calculerUptimeIdle3},
    {"String calculerUptimeIdle4(double const&);", test_calculerUptimeIdle4},
    {"String calculerUptimeIdle5(double const&);", test_calculerUptimeIdle5},
    {"String calculerUptimeIdle6(double const&);", test_calculerUptimeIdle6},
    
    {0}/*must be terminated by 0*/
};