class Solution {
public:
    int reverse(int x) {
        // //easy to read implementation
        // if(x>=INT_MIN && x<=INT_MAX)
        // {
        //     long ans=0;
        //     vector<int> v;
        //     while(x)
        //     {
        //         v.push_back(x%10);
        //      x/=10;
        //     }
        //     for(int i=0;i<v.size();i++)
        //     {
        //         ans=ans*10+v[i];
        //     }
        //     if(ans>=INT_MIN && ans<=INT_MAX)    return ans;
        //     else return 0;
        // }
        // else return 0;
        

        //better way of writing
        int ans=0;
        while(x)
        {
            if(ans>(INT_MAX/10) || ans<(INT_MIN/10)) return 0;
            ans=ans*10+x%10;
            x/=10;
        }
        // return (ans>=INT_MIN && ans<=INT_MAX)?ans:0;
        return ans;
    }
};
