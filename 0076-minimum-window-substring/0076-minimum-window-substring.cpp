class Solution {
public:
string minWindow(string s, string t) {
    int m = s.size();
    int n = t.size();

    if (n > m) return "";

    unordered_map<char,int> ma, mb;

    for (char c : t) {
        ma[c]++;
    }

    int i = 0, j = 0;
    int required = ma.size();
    int formed = 0;

    int minLen = INT_MAX;
    int start = 0;

    while (j < m) {
        mb[s[j]]++;

        if (ma.count(s[j]) && mb[s[j]] == ma[s[j]]) {
            formed++;
        }

        while (i <= j && formed == required) {
            if (j - i + 1 < minLen) {
                minLen = j - i + 1;
                start = i;
            }

            mb[s[i]]--;
            if (ma.count(s[i]) && mb[s[i]] < ma[s[i]]) {
                formed--;
            }
            i++;
        }

        j++;
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}

    
    
};

