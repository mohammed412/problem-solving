#include <iostream>
#include <vector>
using namespace std;

int size_water(vector<int> vec)
{
    int size = vec.size();
    int max1, max2, pos1, pos2;
    for (size_t i = 0; i < size / 2; i++)
    {
        if (i == 0 || max1 < vec[i])
        {
            max1 = vec[i];
            pos1 = i;
        }

        if (i == 0 || max1 < vec[size - i - 1])
        {
            max2 = vec[size - i - 1];
            pos2 = size - i - 1;
        }
    }
    int pos = pos2 - pos1;

    int max = max1;
    if (max1 > max2)
    {
        max = max2;
    }
    return max * pos;
}

int main(int argc, char const *argv[])
{

    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << size_water(vec);

    return 0;
}
