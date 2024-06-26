#include <algorithm>
#include <iostream>
#include <vector>

// Function to check if the arr[] can be
// converted to target[] by replacing
// any element in arr[] by the sum of arr[]
bool isPossible(std::vector<int> target)
{
    // sort the target array
    std::sort(target.begin(), target.end());
    // store length of target into n
    int n = target.size();
    // check if target[0] is equal to n or not?
    if (target[0] != n)
    {
        return false;
    }
    // Traverse the array further for checking
    // whether array follows the pattern or not ?
    for (int i = 1; i < n; i++)
    {
        if (target[i] != 2 * target[i - 1] - 1)
        {
            // if an element does not follow the pattern
            // return False
            return false;
        }
    }
    // After checking all the elements at the last,
    // return True
    return true;
}

int main()
{
    std::vector<int> target = {9, 3, 5};
    bool res = isPossible(target);
    if (res)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
