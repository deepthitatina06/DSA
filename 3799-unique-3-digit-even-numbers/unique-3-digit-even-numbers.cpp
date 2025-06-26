class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int uniquecount=0;
        vector<int>digitfrequency(10,0);
        for(int digit:digits)
        {
            digitfrequency[digit]++;
        }
        for(int hundreds=1;hundreds<10;hundreds++)
        {
            if(digitfrequency[hundreds]>0)
            {
                digitfrequency[hundreds]--;
                for(int tens=0;tens<10;tens++)
                {
                    if(digitfrequency[tens]>0)
                    {
                        digitfrequency[tens]--;
                        for(int ones=0;ones<10;ones+=2)
                        {
                            if(digitfrequency[ones]>0)
                            {
                                uniquecount++;
                            }
                        }
                        digitfrequency[tens]++;
                    }
                }
                digitfrequency[hundreds]++;
            }
        }
        return uniquecount;
    }


        
        
    
};