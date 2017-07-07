#include <iostream>
#include <stack>

using namespace std;

bool validParentheses(string s){
    stack<char> st;
    for(char c : s)
    {
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else
        {
            if(st.empty())
                return false;
            if(c == ')' && st.top() != '(')
                return false;
            if(c == ']' && st.top() != '[')
                return false;
            if(c == '}' && st.top() != '{')
                return false;
            st.pop();
        }
    }
    return st.empty();
}

