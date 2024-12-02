# 第六章作业

## 6-18

下列程序有何问题，请改正；仔细体会使用指针时应避免出现的这个问题。  

```cpp
#include<iostream>
using namespace std;
int fn1(){
int *p=new int(5);
return *p;
}
int main(){
int a=fn1();
cout<<"the value of a is:"<<a;
return 0;
}
```

解答：  
内存泄漏：在fn1函数中，使用new动态分配了一个int类型的内存，但在函数结束时，这个内存没有被释放。这会导致内存泄漏。  
避免方法：在fn1函数中，使用delete释放动态分配的内存。

```cpp
#include<iostream>
using namespace std;

int fn1(){
    int *p = new int(5);
    int value = *p; //保存指针所指向的值
    delete p; //释放动态分配的内存
    return value; //返回值
}

int main(){
    int a = fn1();
    cout << "the value of a is: " << a << endl;
    return 0;
}
```

## 6-20

实现一个名为SimpleCircle的简单圆类。其数据成员int* itsRadius为一个指向其半径值的指针，存放其半径值。设计对数据成员的各种操作，给出这个类的完整实现并测试这个类。  

## 6-21

编写一个函数，统计一条英文句子中字母的个数，在主程序中实现输入输出。  

## 6-22

编写函数void reverse(string &s)，用递归函数使字符串s倒序。
