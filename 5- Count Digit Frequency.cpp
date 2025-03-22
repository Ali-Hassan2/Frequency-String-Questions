#include<iostream>
using namespace std;

void digitcount(int number)
{
    int freq[10] = {0};

    while(number > 0)
    {

        int digit = number % 10;
        freq[digit]++;
        number /= 10;

    }

    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > 0)
        {
            cout << i << " occurs " << freq[i] << " times." << endl;
        }
    }
}


int main()
{

    int num = 113345543;

    digitcount(num);


    return 0;
}