#include <iostream>
#include <vector>
using namespace std;
int main()
{

    //int manyNumbers[10]={0};
    int manyNumbers[10]={3};
//for (int &x : manyNumbers)
    for (int i = 0; i < sizeof(manyNumbers)/sizeof(int); i++) 
    {
        cout << manyNumbers[i] <<endl;
    }

    vector<int> arrNums(3);
    arrNums[0]=123;
    arrNums[1]=-234;
    arrNums[2]=2323;
    cout << "number:"<<arrNums.size()<<endl;

    int another=234111;
    arrNums.push_back(another);
    cout << "number:"<<arrNums.size()<<endl;
    cout << "last one:"<<arrNums[arrNums.size()-1]<<endl;

    cout << "hello scons" <<endl;
    char greeting[] = {'H', 'e', 'l', 'l', 'o', 's', 'c', 'o', 'n', 's', '\0'};
    cout << "greeting msg:"<<greeting <<endl;
    return 0;
}
