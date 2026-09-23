class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // int x=num+t*2;
        // return x;
        int maxi=0;
        int x=num;
        while(t--){
            x++;
            num--;
            if(x<num){
                num--;

            }
            else if(x>num){
            x++;
            }
            maxi=max(maxi,x);

        }
        return maxi;
        
    }
};