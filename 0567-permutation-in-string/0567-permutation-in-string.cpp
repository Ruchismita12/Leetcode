#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Recursive solution - TLE
    /*
    vector<string> permute(string &s1,int l,int r)
    {
        vector<string> result;
        if(l==r)
        {
            result.push_back(s1);
        }
        else
        {
            for(int i=l;i<=r;i++)
            {
                swap(s1[l],s1[i]);
                vector<string> permutations=permute(s1,l+1,r);
                result.insert(result.end(), permutations.begin(),permutations.end());
                swap(s1[l],s1[i]);
            }
        }
        return result;
    }
    bool checkInclusion(string s1, string s2) {
        //find permutations of s1 string
        int n=s1.size();
        vector<string> permutations=permute(s1,0,n-1);

        for(auto &i: permutations)
        {
            if (s2.find(i) != string::npos) 
            //if(s2.find(i) != s2.end())
            {
                return true;
            }
        }
        return false;
        
    }  */

    bool checkInclusion(string s1, string s2) {
        //find permutations of s1 string
        int n=s1.size();
        int m=s2.size();

        if(n>m)
        {
            return false;
        }

        unordered_map<char,int> ma,mb;
        int i=0,j=0;
        while(i<n)
        {
            ma[s1[i]]++;
            mb[s2[j]]++;
            i++;
            j++;
        }
        if(ma==mb)
        {
            return true;
        }
        i=0;
        //next remaining windows
        while(j<m)
        {
            mb[s2[j]]++;
            mb[s2[i]]--;
            if(mb[s2[i]]==0)
            {
                mb.erase(s2[i]);
            }
            if(ma==mb)
            {
                return true;
            }
            i++;
            j++;
        }

        return false;
        
    }
};