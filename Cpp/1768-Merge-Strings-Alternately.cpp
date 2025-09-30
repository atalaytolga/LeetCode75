#include <iostream>
using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        int i = 0, j = 0;
        string result;

        while(i < m && j < n){
                result.push_back(word1[i++]);
                result.push_back(word2[j++]);
        }

        if (i < m) {
            result += word1.substr(i);
        }

        if (j < n) {
            result += word2.substr(j);
        }

        return result;
    }
};

