#include <iostream>
#include <vector>

using namespace std;
template <typename type>
class node
{
public:
    type data;
    node<type> *next = NULL;
};

node<int> *reverse_linked(int k, node<int> *head)
{
    if (k == 1 || k == 0)
    {
        return head;
    }

    vector<int> arr;
    node<int> *pnt = head;
    int first = 0, last = k, chg;
    while (pnt != NULL)
    {
        arr.push_back(pnt->data);
        pnt = pnt->next;
    }
    int k = 1;
    int chg;
    int n;
    for (int i = 0; i <= arr.size() - k; i += k)
    {

        for (int j = 0; j < k / 2; j++)
        {
            chg = arr[i + j];
            arr[i + j] = arr[i + k - j - 1];
            arr[i + k - j - 1] = chg;
        }
    }

    return head;
}

int main(int argc, char const *argv[])
{

    return 0;
}
