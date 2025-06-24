class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n<=0)return false;
        return(n&(n-1))==0;
    
    }
    int main()
    {
        int x;
        cout<<"enter base and power is";
        cin>>x;
        bool res=isPowerOfTwo(x);
        cout<<"the result is:"<<res<<"true"<<"false"<<endl;
        return 0;
        
    }
};