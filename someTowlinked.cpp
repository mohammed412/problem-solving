/*#include <iostream>
#include <vector>

using namespace std;

class People
{
private:
    string name;
    string surname;
    int age;

public:
    People() {}

    People(string name, string surname, int age)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    string getName()
    {
        return this->name;
    }
    void setName(string value)
    {
        this->name = value;
    }

    string getSurname()
    {
        return this->surname;
    }
    void setSurname(string value)
    {
        this->surname = value;
    }

    int getAge()
    {
        return this->age;
    }
    void setAge(int value)
    {
        this->age = value;
    }

    void allInfo()
    {
        cout << "Your Name is :" << this->name << "\nYour Surname is:" << this->surname << "\nYour Age is:" << this->age;
    }
};

class Employe : public People
{
private:
    char grade;
    float salary;
    int yearsExp;

public:
    Employe() {}

    Employe(string name, string surname, int age, char grade, float salary, int yearsExp) : People(name, surname, age)
    {
        this->grade = grade;
        this->salary = salary;
        this->yearsExp = yearsExp;
    }
    void newallInfo()
    {
        allInfo();
        cout << "\nYour grade is :" << this->grade << "\nYour salary is :" << this->salary << " DH\nYour years of experience is :" << this->yearsExp;
    }
};

int req(int nbr)
{

    if (nbr == 1)
        return 1;

    return nbr + req(nbr - 1);
}

int main(int argc, char const *argv[])
{

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 9 - i; j >= 0; j--)
            cout << i;
        cout << endl;
    }
    return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next = NULL;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *head = NULL;
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int rest;
    int result = rest = 0;

    ListNode *last = head;
    while (l1 != NULL && l2 != NULL)
    {
        if (head == NULL)
        {
            head = new ListNode;
        }
        else
        {
            last->next = new ListNode;
            last = last->next;
        }
        last->val = rest;
        rest = 0;
        result = l1->val + l2->val;
        if (result > 10)
        {
            result -= 10;
            rest++;
        }
        last->val += result;
    }
    return head;
}
void diplayLinkedlist(ListNode *first)
{
    ListNode *pt = first;
    while (pt != NULL)
    {
        cout << pt->val;
        pt = pt->next;
    }
}
void addRange(ListNode *first, vector<int> arr)
{
    ListNode *last = first, *new_node = NULL;

    for (int i = 0; i < arr.size(); i++)
    {
        new_node = new ListNode(arr[i]);
        last = new_node;
        last = last->next;
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr1{1, 2, 3};
    vector<int> arr2{1, 2, 3};
    ListNode *l1, *l2;
    addRange(l1, arr1);
    addRange(l2, arr2);
    diplayLinkedlist(l1);
    cout << endl;
    diplayLinkedlist(l2);

    return 0;
}
