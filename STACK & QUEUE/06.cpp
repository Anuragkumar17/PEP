// PREFIX EQUTION EVELUATION
#include <iostream>
#include <stack>
using namespace std;

int prefixEval(string s){
    //Create a Satack
    //traverese the string from left to right
    //if string[i] ==operant ->push in stack
    //else, if it's opetator then create two variables and store the two int from the top of the stack and perform the operation at stack[i]

    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            int operator1 = st.top();
            st.pop();
            int operator2 = st.top();
            st.pop();
            
            switch(s[i]){
                case '+':
                st.push(operator1+operator2);
                break;

                case '-':
                st.push(operator1-operator2);
                break;

                case '/':
                st.push(operator1/operator2);
                break;

                case '*':
                st.push(operator1*operator2);
                break;
            }
        }

    }
    return st.top();

};

int main(){
    string s = "-+7+45+20";
    cout<<prefixEval(s);
}