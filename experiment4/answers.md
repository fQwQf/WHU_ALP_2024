### 练习1：构造函数初始值列表

#### 问题解答
1. **初始化顺序**：
   - 初始化顺序与成员变量在类中声明的顺序一致，而不是在初始化列表中的顺序。
   - 因此，初始化顺序为：`x` -> `pi` -> `rx`。

2. **pi和rx是否必须初始化**：
   - **`pi`**：必须初始化，因为它是`const`类型的成员变量，只能在初始化列表中初始化。
   - **`rx`**：必须初始化，因为它是一个引用，引用必须在声明时初始化。

#### 程序运行结果
```c++
x=10 rx=10 pi=3.14
```

### 练习2：带有默认实参的构造函数

#### 程序运行结果
```c++
constructing…
constructing…
constructing…
date1:2011.1.1
date2:2005.1.1
date3:2006.12.15
```

### 练习3：析构函数的定义

#### 程序运行结果
```c++
constructing…
date1:
1999.4.20
constructing…
date2:
2004.10.15
destructing…
destructing…
```

### 练习4：构造函数和析构函数

#### 程序运行结果
```c++
constructing...
real:1.1,imag:2.2
constructing...
real:1.1,imag:2.2
abs of complex A=2.47992
abs of complex B=2.47992
destructing...
real:1.1,imag:2.2
destructing...
real:1.1,imag:2.2
```

### 实际测试步骤
1. **创建项目文件和源代码文件**：
   - 创建一个C++项目，包含以下文件：
     - `date.h`
     - `date.cpp`
     - `main.cpp`
   - 将上述代码分别复制到对应的文件中。

2. **编译和运行**：
   - 使用C++编译器（如g++）编译并运行程序。
   - 例如，使用命令行：
     ```sh
     g++ -o main main.cpp date.cpp
     ./main
     ```

3. **观察输出结果**：
   - 对比实际输出结果与预期结果，确保程序按预期运行。