#include <iostream>
using namespace std;

string largest_word(string phrase)
{
    string word;
    string max_word = "";
    int cpt = 0, max_cpt = 0;
    for (int i = 0; i < phrase.length(); i++)
    {

        if (phrase[i] != ' ')
        {
            word += phrase[i];
            cpt++;
        }
        else
        {
            if (cpt > max_cpt || max_word == "")
            {
                max_word = word;
                max_cpt = cpt;
            }
            word = "";
            cpt = 0;
        }
    }

    return max_word;
}

int main(int argc, char const *argv[])
{
    cout << largest_word("hello baba ahudu hiheihiurf ioajojiozad hifos j jfirji");

    return 0;
}
