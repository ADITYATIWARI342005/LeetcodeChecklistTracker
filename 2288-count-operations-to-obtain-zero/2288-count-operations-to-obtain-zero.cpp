class Solution {
public:
    int countOperations(int num1, int num2) {
        int res=0;
        while(num1!=0 && num2!=0){
            // res++;
            if(num1>num2){
                num1-=num2;
                // continue;
            }else if(num2>num1){
                num2-=num1;
                // continue;
            }else return res+1;
            res++;
        }
        return res;
    }
};