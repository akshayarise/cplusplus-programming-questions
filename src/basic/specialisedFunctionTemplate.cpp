// specialised function Template example
#include <iostream>
using namespace std;
template <class T>

void student(T name)
{
    cout << "Generalised Student Template " << name << endl;
}
template <>
void student(int age)
{
    cout << "Specialised Student Template " << age << endl;
}

int main()
{
    student<string>("Akshay");
    student<string>("Kumar");
    student<int>(67);
    student<int>(900);
    return 0;
}