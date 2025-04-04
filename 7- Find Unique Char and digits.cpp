#include <iostream>
using namespace std;

int howmuchUnique(string s){
    int size = s.length();
    int freq[26] = {0};
    int count = 0;

    for(char ch : s){
        if(freq[ch - 'a'] == 0){
            count++;
        }
        freq[ch - 'a']++;
    }

    return count;
}

int main() {


    string sample = "aasvsz";
    int result = howmuchUnique(sample);
    std::cout << "The result is: " << result << std::endl;
    
    return 0;
}