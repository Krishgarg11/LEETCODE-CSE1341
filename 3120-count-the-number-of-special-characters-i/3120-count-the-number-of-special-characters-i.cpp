class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        for(char i='A';i<='Z';i++){
            if(word.find(i)!=string :: npos && word.find(i+32)!=string :: npos){
                count++;
            }
        }
        return count;
    }
};