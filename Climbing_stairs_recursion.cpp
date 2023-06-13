// Staircase problem using Recursions
#include <iostream>

using namespace std;

int ClimbStairs ( int n ){
    
    if(n==0)     // base case or stopping condition
    {
        return 1;
        
    }
   if(n==1)
   {
     return 1;
   }
  
  if (n==2)
  {
    return 2;
  }
    
    int ans = ClimbStairs(n-1) + ClimbStairs(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans = ClimbStairs(n);
    cout<<"Answer is "<<ans<<endl;

    return 0;
}
