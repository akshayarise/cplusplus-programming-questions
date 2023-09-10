#include <iostream>
using namespace std;

class Theatre
{
private:
    string type, movie;

public:
    Theatre(string theatreType, string theatreMovie)
    {
        type = theatreType;
        movie = theatreMovie;
    }
    ~Theatre()
    {
        cout << "Destructor is executed" << endl;
    }
    void displayInfo()
    {
        cout << "Theatre type is: " << type << endl;
        cout << "Movie is: " << movie << endl;
    }
};

int main()
{
    Theatre obj1("IMAX", "Openheimer"), obj2("ICE", "Pathaan"), obj3("4DX", "Pathaan");
    obj1.displayInfo();
    obj2.displayInfo();
    obj3.displayInfo();
    return 0;
}