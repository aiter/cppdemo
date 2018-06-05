#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!" << endl;
    std::cout << "Hello, world 1!" << std::endl;

    //int manyNumbers[10]={0};
    int manyNumbers[10];
//for (int &x : manyNumbers)
    for (int i = 0; i < sizeof(manyNumbers)/sizeof(int); i++) 
    {
        cout << manyNumbers[i] <<endl;
    }
    std::cout << "Hello, world 1!"<< __LINE__ << std::endl;
    std::cout << "Hello, world 1!"<< __FILE__ << std::endl;
    std::cout << "Hello, world 1!"<< __DATE__ << std::endl;
    std::cout << "Hello, world 1!"<< __TIME__ << std::endl;

    return 0;
}
