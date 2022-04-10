class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
                carry=1;
            }
            else{
                digits[i]++;
                carry=0;
                break;
            }
        }
        if(carry==1){
            digits[0]++;
            digits.push_back(0);
        }
        return digits;
    }
};