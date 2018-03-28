#include <stack>
#include <vector>

using namespace std;

int main()
{
    stack<int> stackInts;
    stack<double> stackDoubles;
    stack<double, vector<double> > stackDoublesInVector;
    stack<int> stackIntsCopy(stackInts);

    return 0;
}