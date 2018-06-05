#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
/**
    Human()
    {
        Age = -1;
        cout << "default constructor "<< endl;
    }
    Human(string HumansName)
    {
        Name = HumansName;
    }

    Human(int HumansAge = 18)
    {
        //Name = HumansName;
        Age = HumansAge;
        cout << "default(Age=18) constructor "<< endl;
    }
*/
    Human(string HumansName = "aiter",int HumansAge = 18)
        :Name(HumansName),Age(HumansAge)
    {
        cout << "default(Age=18) constructor "<< endl;
    }

    ~Human(){}

private:
    string Name;
    int Age;

public:
    void SetName(string HumansName)
    {
        Name = HumansName;
    }

    void SetAge(int HumansAge)
    {
        Age = HumansAge;
    }

    void IntroduceSelf()
    {
        cout << "I am "+ Name << " and am ";
        cout << Age << " years old"<< endl;
    }
};

int main()
{
    Human FirstHuman;
    FirstHuman.SetName("Aiter");
    FirstHuman.SetAge(34);

    Human FirstWoman;
    FirstWoman.SetName("EVE");
    FirstWoman.SetAge(23);

    FirstHuman.IntroduceSelf();
    FirstWoman.IntroduceSelf();
}
