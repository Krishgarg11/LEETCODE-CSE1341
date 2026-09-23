class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char,int> stonesmap;
        int count=0;
       for(int i=0;i<stones.size();i++){
        stonesmap[stones[i]]++;
       }
       for(char x:jewels){
        count+=stonesmap[x];
       }
        return count;
    }
};