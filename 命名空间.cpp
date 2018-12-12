#include <iostream>
using namespace std;//引用标准命名空间

//定义一个新的命名空间
namespace stu
{
    int i = 0;//可以定义变量
    // cout << "hello"<<endl ;//!!!!!!!语法错误，不能在外面直接使用cout，cin这个对象
    int vov()
    {
        cout <<"hello"<<endl;  //可以在这里使用
    
    }
}

调用  ：
跟别的函数一样
1、声明命名空间
using namespace stu;
vov();


2、使用作用域符号 ：：
stu::vov();

3、可以创建多个命名空间，名字不能相同












