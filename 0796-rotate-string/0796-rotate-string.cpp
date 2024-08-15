class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        int n=s.length();
        while(i<n)
        {
            string s1=s.substr(1);
            string temp=s1+s[0];
            s=temp;
            if(temp==goal)
            {
                return true;
                break;
            }
            i++;
        }
        return false;
        
    }
};