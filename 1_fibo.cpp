// //recursive

// #incldue<bits/stdc++.h>
// using namespace std;

// int f(int n,vector<int>&dp){
    
//     if(n<=1) return n;
//     return f(n-1)+f(n-2);
// }
// int main(){
    
//     int n;
//     cin>>n;
//     cout<<f(n);

//     return 0;
// }



//memoization

// #incldue<bits/stdc++.h>
// using namespace std;

// int f(int n,vector<int>&dp){
    
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];//2nd step
    
//     return dp[n]=f(n-1,dp)+f(n-2,dp);//3rd step
// }
// int main(){
    
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);//1st step
//     cout<<f(n,dp);

//     return 0;
//}


//tabulation
// #incldue<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);//1st step

//     dp[0]=0;
//     dp[1]=1;

//     for(int i=2;i<n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }

//     return 0;
// }




// more optimised space 

#incldue<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);//1st step

    int prev2=0;
    int prev1=1;

    for(int i=2;i<n;i++){
        int curri=prev+prev2;
        prev2=prev;
        prev=curri;
    }
    cout<<prev;

    return 0;
}