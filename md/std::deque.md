## std::deque

> 头文件 `#include <deque>`
> 动态数组类，相比于vector，还支持从数组的头部插入和删除元素

### std::deque的特点
* 在数组头部或末尾添加元素、删除元素所需的时间固定，与数组的大小无关
* 在数组中间添加或删除元素所需的时间与该元素后面的元素个数成正比
* 存储的元素数目是动态的，由deque类管理内存

### std_deque的使用
* [实例化](../09_STL_Guide/STL_deque/instantation.cpp)  
* [头部添加元素](../09_STL_Guide/STL_deque/push_front_deque.cpp)  
* [末尾添加元素](../09_STL_Guide/STL_deque/pushback_deque.cpp)  
* [在指定位置插入元素](../09_STL_Guide/STL_deque/instantation.cpp)  
* [访问deque中的元素](../09_STL_Guide/STL_deque/instantation.cpp)  
* [删除deque中的元素](../09_STL_Guide/STL_deque/instantation.cpp)  
* [deque的大小和容量](../09_STL_Guide/STL_deque/instantation.cpp)  