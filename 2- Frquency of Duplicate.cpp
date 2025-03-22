#include<iostream>
using namespace std;



void checkingDuplicates(string s)
{

    int freq[256] = {0};

    for(char ch : s)
    {
        freq[ch]++;    
    }

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 1)
        {
            cout << (char)i << " occurs " << freq[i] << " times." << endl;
        }
    }
}

int main()
{

    string str = "alihassan";

    checkingDuplicates(str);

    return 0;
}