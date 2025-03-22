#include<iostream>
using namespace std;


string removeDups(string str)
{
    bool freq[256] = {false};


    int index = 0;

    for(int i = 0; i < str.length() - 1; i++)
    {
        if(!freq[str[i]])
        {
            str[index++] = str[i];
            freq[str[i]] = true;
        }
    }

    str.resize(index);

    return str;

}


int main()
{

    string name = "alihassan";

    string res = removeDups(name);

    cout << "The new result is: " << res << endl;


    return 0;
}