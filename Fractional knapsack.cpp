// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool comp(struct Item x, struct Item y)
    {
    double v1 = (double)x.value / (double)x.weight;
    double v2 = (double)y.value / (double)y.weight;
    return v1 > v2;
    }

class Solution
{
    public:


    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, comp);

    int cWeight = 0;
    double fValue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (cWeight + arr[i].weight <= W)
        {
            cWeight += arr[i].weight;
            fValue += arr[i].value;
        }
        else
        {
            int temp = W - cWeight;
            fValue += arr[i].value * ((double)temp / (double)arr[i].weight);
            break;
        }
    }

    return fValue;
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;

		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}

		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
