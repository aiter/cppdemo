#include <iostream>
 
using namespace std;
 
class Box
{
    private:
       double width;
    public:
        friend void printWidth( Box box );
        void setWidth( double wid );
};

void Box::setWidth( double wid )
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth( Box box)
{
    cout << "width of box:"<<box.width<<endl;
}

// 程序的主函数
int main( )
{
    Box box;
     
    // 使用成员函数设置宽度
    box.setWidth(10.0);
//              
    // 使用友元函数输出宽度
    printWidth( box );
//                     
    return 0;
}
