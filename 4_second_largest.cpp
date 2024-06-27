#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void second_largest(int target[], int n)
{
    if (n < 2)
    {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int first = 0;
    int second = 0;

    for (int i = 0; i < n; i++)
    {
        if (target[i] > first)
        {
            second = first;
            first = target[i];
        }
        else if (target[i] > second && target[i] != first)
        {
            second = target[i];
        }
    }

    if (second == 0)
        cout << "No second largest element found." << endl;
    else
        cout << "The second largest element is " << second << endl;
}

int main()
{
    int target[] = {3, 6, 7, 12, 56, 789, 34};
    int n = sizeof(target) / sizeof(target[0]);
    second_largest(target, n);
    return 0;
}
