## std::vector

> 头文件 `#include <vector>`
> 动态数组让程序员能够灵活地存储数据，无需在编写应用程序时就知道数组的长度。

### std::vector的特点
* 在数组末尾添加元素、删除元素所需的时间固定，与数组的大小无关
* 在数组中间添加或删除元素所需的时间与该元素后面的元素个数成正比
* 存储的元素数目是动态的，由vector类管理内存

### std_vector的使用
* [实例化](../09_STL_Guide/STL_vector/instantation.cpp)  
* [末尾添加元素](../09_STL_Guide/STL_vector/pushback_vector.cpp)  
* [在指定位置插入元素](../09_STL_Guide/STL_vector/insert_vector.cpp)  
* 访问vector中的元素  
	* [通过index访问](../09_STL_Guide/STL_vector/insert_vector.cpp )   
	* [通过iterator访问](../09_STL_Guide/STL_vector/insert_vector.cpp)  
* [删除vector中的元素](../09_STL_Guide/STL_vector/popback_vector.cpp)  
* [vector的大小和容量](../09_STL_Guide/STL_vector/size_capacity_vector.cpp)  
