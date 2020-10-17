//#include "duomenys.h""
//#include "studentas.h"
//#include "rusiavimas.h"

struct duomenys
{
    string vardai;
    string pavardes;
    vector<string> pazymiai;
};

struct studentas
{
    string vardai;
    string pavardes;
    vector<int> pazymiai;
};

struct rusiavimas
{
    string vardai;
    string pavardes;
    double vidurkiai;
    double medianos;
};

bool palygintiVardus(rusiavimas& a, rusiavimas& b) { return a.vardai < b.vardai; };
bool palygintiPavardes(rusiavimas& a, rusiavimas& b) { return a.pavardes < b.pavardes; };
