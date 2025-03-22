

#include<iostream>
using namespace std;

void countFreq(string s)
{
    int freq[256] = {0};

    for(char ch : s)
    {
        freq[ch]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i) << " occurs " << freq[i] << " times." << endl;
        }

    }
}



int main(){


    string str = "aalliihaassaaan";

    countFreq(str);


    return 0;
}