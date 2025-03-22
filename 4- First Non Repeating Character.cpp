#include<iostream>
using namespace std;

char nonrepeating(string s)
{
    int freq[256] = {0};
    for(char ch : s)
    {
        freq[ch]++;
    }

    for(char ch : s)
    {
        if(freq[ch] == 1)
        {
            return ch;
        }
    }

    return '\0';
}


int main()
{

    string name = "allihassan";

    char res = nonrepeating(name);

    cout << "The character is: " << res << endl;


    return 0;
}