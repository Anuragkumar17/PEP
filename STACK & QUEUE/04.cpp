#include <iostream>
#include <stack>
using namespace std;

void reverseString(string str){
    stack<string> st;
    int i = 0;
    while(i < str.length()){
        string word = "";
        while(i < str.length() && str[i] != ' '){
            word += str[i];
            i++;
        }
        st.push(word);
        i++;
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    string s = "Hello World";
    reverseString(s);
}