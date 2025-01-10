#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    void trim(string &s) {
        // Remove leading spaces
        s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !isspace(ch);
        }));
        // Remove trailing spaces
        s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(), s.end());
    }
    string reverseWords(string s) {
        trim(s);
        stack<string> st;
        istringstream ss(s);
        string word;

        while(ss>>word)
        {
            st.push(word);
            st.push(" ");
        }
        string temp="";
        while(!st.empty())
        {
            temp += st.top();
            st.pop();
        }

        trim(temp);
        return temp;

        
    }
};