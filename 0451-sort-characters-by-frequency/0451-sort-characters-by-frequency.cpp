class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        string result;
        while (!freq.empty()) {
            int maxCount = 0;
            char maxChar = 0; 
            for (auto &pair : freq) {
                if (pair.second > maxCount) {
                    maxCount = pair.second;
                    maxChar = pair.first;
                }
            }
            result.append(maxCount, maxChar); 
            freq.erase(maxChar);
        }

        return result;
    }
};

