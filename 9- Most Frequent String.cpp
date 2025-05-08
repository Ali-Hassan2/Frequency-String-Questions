#include <iostream>
using namespace std;

int main() {
    

    string arr[] = {"ali","hassan","ali","shoaib","shoaib","ahmed","shoaib","shiz","shoaib"};
    int numbers[100] = {0};
    string unique[100] = {""};
    int uc = 0;
    int size = sizeof(arr)/sizeof(string);

    for(int i = 0; i < size; i++){
        string name = arr[i];
        bool found = false;
        for(int j = 0; j < uc; j++){
            if(unique[j] == name){
                found = true;
                cout << numbers[j] << " ";
                break;
            }    
        }

        if(!found){
            unique[uc] = name;
            numbers[uc] = uc + 1;
            cout << numbers[uc] << " ";
            uc++; 
        }
    }
    return 0;
}