#include <iostream>
using namespace std;

class Mcd
{
private:
    string locality, zone;
    bool resolved;

public:
    string getter();
    void setter(bool, string, string);
};

string Mcd::getter()
{
    string resolve = (resolved) ? "true" : "false";
    return locality + zone + "resolved is: " + resolve;
}

void Mcd::setter(bool setterResolved, string setterLocality, string setterZone)
{
    resolved = setterResolved;
    locality = setterLocality;
    zone = setterZone;
}

int main()
{
    Mcd obj1;
    obj1.setter(true, "Shakarpur WB Block", "Shahdara Zone");
    cout << obj1.getter() << endl;
    return 0;
}