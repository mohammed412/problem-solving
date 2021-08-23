#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string word = "{[()]}";
    int begin = 0;
    int end;
    if (word.size() % 2 != 0)
    {
        cout << "Invalide";
    }
    else
    {
        for (int i = 0; i < word.size(); i++)
        {
            begin = i - 1;

            while (word[i] == ')' || word[i] == '}' || word[i] == ']')
            {
                if (word[i] != word[begin])
                {
                    cout << "Invalide";
                    goto tend;
                }
                else
                {
                    i += 1;
                    begin -= 1;
                }
            }
        }
        cout << "valide";
    }
tend:
    cout << "\nend program";

    return 0;
}
