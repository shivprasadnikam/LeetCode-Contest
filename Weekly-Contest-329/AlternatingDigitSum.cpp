

                                                             // Alternating Digit Sum  //
                                                             
                                                             
  class Solution {
public:
    int alternateDigitSum(int n) {
        int digitSum=0;
        int countOfDigit=0;
        int i=1;
        int rem=0;
        int temp=n;
        while(n)
        {
             rem=n%10;
            countOfDigit++;
            n/=10;
            
        }
      //  cout<<countOfDigit<<endl;
        while(countOfDigit--)
        {
             rem=temp%10;
            if(countOfDigit%2!=0)
            {
                 digitSum-=rem;
            }
            else
                digitSum+=rem;
            
            temp/=10;
        }
        return digitSum;
    }
};
