#include <iostream>
#include <string>
using namespace std;

class President
{
    private:
        President() {};

        President(const President&);

        const President& operator=(const President&);

        string Name;

    public:
        static President& GetInstance()
        {
            static President OnlyInstance;
            return OnlyInstance;
        }

        string GetName()
        {
            return Name;
        }

        void SetName(string inputName)
        {
            Name = inputName;
        }
};

int main()
{
    President& OnlyInstance = President::GetInstance();
    OnlyInstance.SetName("aiter liu"); 
    //President SecondInstance; //默认的constructor ，不允许
    //President* ThirdInstance = new President(); //默认的constructor ，不允许.这个和上面的区别是，在堆上创建对象
    //President FourInstance = OnlyInstance;//不能使用copy constructor,private
    //OnlyInstance = President::GetInstance(); 这个将这个引用重新复制operator=,这里也不能访问，private
    //President SameInstance = President::GetInstance();  不加& ,这个就不是引用，就会调用constructor，但是这里是private的
    President& SameInstance = President::GetInstance(); //& 只是引用
    SameInstance.SetName("leya liu");

    cout << President::GetInstance().GetName() << endl;
    return 0;
}
