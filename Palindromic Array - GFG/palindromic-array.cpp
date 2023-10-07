//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool palin(int n){
        int t = n;
        int f= 0;
        while(t){
            f = f*10 + t%10;
            t/=10;
        }
        return n == f;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i = 0;i<n;i++){
    	    if(!palin(a[i])) return 0;
    	}
    	return 1;
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends