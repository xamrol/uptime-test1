#include "acutest.h"
#include "calculator.h"
#include <regex>

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
    TEST_CHECK_(c.calculerUptimeIdle(6945200.26) == ("80 days, 9:13"), "calculerUptimeIdle(%d)==%S", 6945200.26, "80 days, 9:13");
}
void test_calculerUptimeIdle5(void){
    TimeConversion c;
    TEST_CHECK_(c.calculerUptimeIdle(15005117.05) == ("173 days, 16:05"), "calculerUptimeIdle(%d)==%S", 15005117.05, "173 days, 16:05");
}

void test_GetNbjoursInit(void){
    TimeConversion c;
    TEST_CHECK_(c.GetNbjours() == 0 , "From TimeConversion Constructor, NbJours=0");
}

void test_getLocalTime(void){
    TimeConversion c;
	std::regex rgx ("\\b(16)([^ ]*)"); 
    TEST_CHECK_(std::regex_search(c.getLocalTime(),rgx) , "Heure actuelle : %S", c.getLocalTime());
}

void test_getLocalTimeLength(void){
    TimeConversion c;
    TEST_CHECK_(c.getLocalTime().size() == 8 , "Taille Heure actuelle(%S) : %d", c.getLocalTime(), c.getLocalTime().size());
}



TEST_LIST = {
    {"1-Resultat calculerUptimeIdle1(50)", test_calculerUptimeIdle1},
    {"2-Resultat calculerUptimeIdle1(56402.05)", test_calculerUptimeIdle2},
    {"3-Resultat calculerUptimeIdle1(142708.05)", test_calculerUptimeIdle3},
    {"4-Resultat calculerUptimeIdle1(6945200.26)", test_calculerUptimeIdle4},
    {"5-Resultat calculerUptimeIdle1(15005117.05)", test_calculerUptimeIdle5},
    {"6-int Verification Nombre Jours Debut", test_GetNbjoursInit},
	{"7-Verification Heure systeme commence par 16", test_getLocalTime},
	{"8-Verification Taille Heure systeme", test_getLocalTimeLength},
    
    {0}/*must be terminated by 0*/
};