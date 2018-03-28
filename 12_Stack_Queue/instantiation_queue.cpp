#include <queue>
#include <vector>

using namespace std;

int main()
{
    queue<int> queueIntegers;
    queue<double> queueDoubles;
    queue<double, vector<double> > queueDoublesInVector;
    queue<int> queueCopyIntegers(queueIntegers);

    return 0;
}