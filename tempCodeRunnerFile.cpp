#include<iostream>
using namespace std;

void mostoccuring(string str)
{
    int freq[256] = {0};
    int maxnumber = 0;
    char maxChar = '\0';

    for(char ch : str)
    {
        freq[ch]++;
        if(freq[ch] > maxnumber)
        {
            maxnumber = freq[ch];
            maxChar = ch;
        }
    }

    cout << "The most frequent character is: " << maxChar << endl;
    cout << "The most maximum number is: " << maxnumber << endl;


}


int main()
{

    string name = "alihassanwaris";

    mostoccuring(name);


    return 0;
}