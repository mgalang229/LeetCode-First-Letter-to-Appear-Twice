class Solution {
public:
    char repeatedCharacter(string s) {
        char ans = '?';
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for (char& c : s) {
            freq[c-'a']++;
            if (freq[c-'a'] == 2) {
                ans = c;
                break;
            }
        }
        return ans;
    }
};
