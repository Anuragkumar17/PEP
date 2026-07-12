#include <iostream>
#include <queue>
using namespace std;

void printString(string str){
    queue<string> q;
    int i = 0;

    while(i < str.length()){
        string word = "";
        while(i < str.length() && str[i] != ' '){
            word += str[i];
            i++;
        }
        q.push(word);
        i++;
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

int main(){
    string s = "Hello World";
    printString(s);

    return 0;
}