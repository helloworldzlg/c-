#include <thread>
#include <iostream>

void task_func()
{
    std::cout << "task function" << std::endl;
}

int main()
{
    std::thread t(task_func);

    t.join();

    return 0;
}
