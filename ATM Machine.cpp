#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n],as[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++){
	        if(arr[i]<=k){
	            k=k-arr[i];
	            as[i]=1;
	        }
	        else
	        {
	            as[i]=0;
	        }
	    }
	    for(i=0;i<n;i++){
	        cout<<as[i];
	    }
	    cout<<endl;
	}
	return 0;
}
