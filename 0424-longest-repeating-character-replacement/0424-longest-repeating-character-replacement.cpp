class Solution {
public:
    int characterReplacement(string s, int k) {
        //slidibg window 
        int l=0,r=0,maxf=0,maxlength=0;
        unordered_map<char,int> mp;

        for(int r=0;r<s.size();r++)
        {
            //increase the count of every char
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);

            //In this case, we dont need to replace chars
            while((r-l+1)-maxf > k)
            {
                //reduce the frequency of that char and reduce the size of window
                mp[s[l]]--;
                l++;
            }
            //else condition will work if (r-l+1)-maxf <= k and we can increase the window and compare maxlen
            maxlength=max(maxlength,r-l+1);


        }

        return maxlength;
        
    }
};