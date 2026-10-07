class Solution {
public:
    int maxFreqSum(string s) {
        int f[26] = {};
        for(char c : s) f[c-'a']++;
        int vov = 0, c = 0;
        for(int i = 0; i < 26; i++)
            if(string("aeiou").find('a'+i) != string::npos)
                vov = max(vov, f[i]);
            else
                c = max(c, f[i]);

        return vov + c;
    }
};