class Solution {
public:
    int sq(int n){
        long long int sum = 0;
        while(n>0){
           
            int d = n%10;
             n = n/10;
            sum = sum+d*d;

        }
        return sum;
        
    }
    bool isHappy(int n) {

        int slow = n,fast = n;
        while(fast!=1){
            slow = sq(slow);
            fast = sq(fast);
            fast = sq(fast);
            if(slow==fast && fast!=1){
                return false;
            }
        }
        return true;
        
    }
};