#include <iostream>
using namespace std;

class CinemaHall
{
private:
    string name, movie;
    int price;

public:
    CinemaHall(string hallName, string cinemaMovie, int cinemaPrice)
    {
        name = hallName;
        movie = cinemaMovie;
        price = cinemaPrice;
    }
    CinemaHall(CinemaHall &obj3)
    {
        name = obj3.name;
        movie = obj3.movie;
        price = obj3.price;
    }

    void displayInfo();
};

void CinemaHall ::displayInfo()
{
    cout << "Cinema Hall name is: " << name << endl;
    cout << "Movie name is: " << movie << endl;
    cout << "Movie price is: " << price << endl;
}
int main()
{
    CinemaHall obj1("Odion", "Jawan", 500);
    obj1.displayInfo();
    CinemaHall obj2(obj1);
    obj2.displayInfo();

    return 0;
}