class Solution {
public:
    long long countVowels(string word) {
        long long totVowels = 0;
        long long n = word.length();

        for(long long i = 0; i < n; i++) {
            if(word[i] == 'a'||word[i] == 'e' || word[i] == 'i' || word[i] =='o' || word[i] == 'u') {
                totVowels +=(i+1)*(n - i);
            }
        }
        return totVowels;
        
    }
};