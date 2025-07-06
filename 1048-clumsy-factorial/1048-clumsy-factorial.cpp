class Solution {
public:
    int clumsy(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 6;
        if (n == 4) return 7;

        int result = n * (n-1) / (n-2) + (n-3); 
        n = n - 4;

        while(n >= 4) {  
            int group = n * (n-1) / (n-2) + (n-3); 
            result = result - n * (n-1) / (n-2) + (n-3);
            n = n - 4;
        } 

        if (n == 3) {
            result = result - (n * (n-1) / (n-2));  
        } else if (n == 2) {
            result = result - (n * (n-1));  
        } else if (n == 1) {
            result = result - n;  
        }
        
        return result;
    }
};

// logic -> (10 - 9/8) + (7) + (6 - 5/4) + (3) - (2*1)