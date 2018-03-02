# c++
c++ programming language

---

## 1. C++基础

## 2. 面向对象

### 2.1 面向对象的语法特性
---
* [类的概念](http://www.jianshu.com/p/b0d20f4e0559)

* [访问限定符](http://www.jianshu.com/p/b4c25e5a5e20)

* 构造函数和析构函数
构造函数的用途：用来对类的成员变量进行初始化；
默认构造函数
构造函数重载
使用初始化列表来对成员变量进行初始化

Q1: 如何定义一个类
Q2: 什么情况下需要使用构造函数
Q3: 类的属性分配内存和初始化在什么时候执行 

---

### 2.2 抽象

### 2.3 封装

### 2.4 继承

### 2.5 多态

---
## 14.宏和模板
* 1.宏的一般使用方式




















## 15.标准模板库
* 容器
    用途：用来存储数据
    分类：顺序容器、关联容器
    顺序容器：
    1) std::vector
    2) std::deque
    3) std::list
    4) std::forward_list
    关联容器：
    1) std::set
    2) std::unordered_set
    3) std::map
    4) std::unordered_map
    5) std::multiset
    6) std::unordered_multiset
    7) std::multimap
    8) std::unordered_multimap
    容器适配器：
    1) std::stack
    2) std::queue
    3) std::priority_queue

* 迭代器
    分类：输入迭代器、输出迭代器、前向迭代器、双向迭代器、随机访问迭代器
    1) 输入迭代器
    2) 输出迭代器
    3) 前向迭代器
    4) 双向迭代器
    5) 随机访问迭代器

* 算法
    使用时需要包含的库文件：`#include <algorithm>`
    常用算法：
    1) std::find
    2) std::find_if
    3) std::reverse
    4) std::remove_if
    5) std::transform
    
* 字符串类
    1) std::string
    2) std::wstring
