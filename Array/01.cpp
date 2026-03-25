#include <iostream>
#include <vector>
using namespace std;

/* Largest element in an array */

int main()
{
    vector<int> arr = {1, 5, 3, 6, 4, 9, 2, 7};
    int largest_element = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest_element)
        {
            largest_element = arr[i];
        }
    }

    cout << "The largest element is " << largest_element << endl;

    return 0;
}