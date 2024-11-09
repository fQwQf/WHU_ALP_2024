# 实验4

## 练习1：构造函数初始值列表  

```c++
// 成员初始化表的使用
#include <iostream>
using namespace std;
Class Sample 
{
private:
int x;
int &rx;
const float pi;
public:
Sample(int x1):x(x1), pi(3.14), rx(x)
{ } 
```

请回答两个问题：  
（1）执行时，这里的初始化顺序是什么？  
（2）pi和rx是否必须初始化？为什么？  

```c++
void Print()
{
cout<<"x="<<x<<" "<< <<"rx="<<rx<<" "
<< "pi="<<pi<<endl;
}
};
int main()
{
Sample a(10);
a.Print();
return 0;
}
```

请分析程序的运行结果，并实际测试一下！  

```c++
// 日期类的定义。函数成员定义在类体中。
// date.h
#include <iostream>
using namespace std;
class Date //定义日期类Date
{
public: //声明类成员
Date(int y=2011, int m=1, int d=1);
void ShowDate( )
private: 
int year; int month; int day;
}; //以括号及分号结束，体现封装
```

## 练习2： 构造函数初始值列表
下面来看带有默认实参的构造函数：

```c++
// date.cpp
#include "date.h"
Date::Date(int y, int m, int d)
{
year=y; month=m; day=d;
cout<<"constructing…"<<endl;
}
void Date::ShowDate( )
{ cout<<"Date："<<year<<"."<<month<<"."<<day;
cout<<endl;
}
```


下面来看带有默认实参的构造函数：  

```c++
// main.cpp
#include "date.h"
int main()
{
Date date1;
Date date2(2005);
Date date3(2006,12,15);
cout<<"date1:"; date1.ShowDate();
cout<<"date2:"; date2.ShowDate();
cout<<"date3:"; date3.ShowDate();
return 0;
}
```

请按照注释说明的文件名，创建项目文件和源代码文件，然后分析程序的运行结果，并实际测试验证！  

下面来看带有默认实参的构造函数：  

```c++
// 日期类的定义。
// date.h
#include <iostream>
using namespace std;
class Date //定义日期类Date
{
public: //声明类成员
Date(int y=2011, int m=1, int d=1);
~Date();
void ShowDate( )
private: 
int year; int month; int day;
}; //以括号及分号结束，体现封装
```

## 练习3：析构函数的定义

```c++
// date.cpp
#include "date.h"
Date::Date(int y, int m, int d)
{
year=y; month=m; day=d;
cout<<"constructing…"<<endl;
}
void Date::ShowDate( )
{ cout<<"Date："<<year<<"."<<month<<"."<<day;
cout<<endl;
}
Date::～Date()
{ cout<<"destructing…"<<endl;
}
```

```c++
// main.cpp
#include "date.h"
int main()
{
Date date1(1999,4,20);
cout<<"date1:"<<endl;
date1.ShowDate();
Date date2(2004,10,15);
cout<<"date2:"<<endl;
date2.ShowDate(); 
return 0;
}
```

请按照注释说明的文件名，创建项目文件和源代码文件，然后分析程序的运行结果，并实际测试验证！  

## 练习4： 构造函数和析构函数
请仔细分析接下来两页ppt的复数类程序，指出程序的运行结果，并实际测试验证！  

```c++
// 析构函数和带默认参数的构造函数。
// 注意构造函数和析构函数的调用顺序。
#include <iostream>
using namespace std;
#include <math.h>
class Complex //定义复数类
{ public:
Complex(double r=0.0,double i=0.0); //带默认参数构造函数的声明
~Complex(); //析构函数的声明
double abscomplex(); //求复数的模
private:
double real;
double imag;
};

Complex::Complex(double r,double i) //构造函数的实现
{ cout<<"constructing..."<<endl;
real=r;
imag=i;
cout<<"real:"<<real<<",imag:"<<imag<<endl;
}

Complex::~Complex() //析构函数的实现
{ cout<<"destructing..."; 
cout<<"real:"<<real<<",imag:"<<imag <<endl;
}

double Complex::abscomplex() //成员函数的实现
{ double t;
t=real*real+imag*imag; 
return sqrt(t);
}

int main() //主函数
{
Complex A(1.1,2.2),B=A; //定义复数类对象A，自动调用构造函数
cout<<"abs of complex A="<<A.abscomplex()<<endl; //对象A调用成员函数
cout<<"abs of complex B="<<B.abscomplex()<<endl; //对象B调用成员函数
return 0; //在程序结束前自动调用析构函数
}
```
