// A Stack based C++ program to find next greater element for all array elements in same order as input.
#include <iostream>
#include <stack>

using namespace std;

//prints element and res pair for all elements of arr[] of size n 
void printNGE(int arr[], int n)
{
	stack<int> s;
	int res[n];
	for (int i = n - 1; i >= 0; i--) {
		
		if (!s.empty()) {
			while (!s.empty() && s.top() <= arr[i]) {
				s.pop();
			}
		}
		res[i] = s.empty() ? -1 : s.top();
		s.push(arr[i]);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " --> " << res[i] << endl;
}

int main()
{
	int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    printNGE(arr,n);

    return 0;
}