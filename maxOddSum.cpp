#include <iostream>
#include <climits>

using namespace std;

//func returns max odd sum if exists else returns 1
int func(int arr[],int n){ 
    
    //min_odd is the minimum odd number in absolute terms
    
    int min_odd=INT_MAX; //INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. 
    
    bool isOdd=false; //isOdd checks if there's at least one odd number in the given array
    
    int sum=0; //stores sum of all positive elements
    for(int i=0;i<n;i++){
        
        if(arr[i]>0) //adding positive numbers
         sum=sum+arr[i];
         
        if(arr[i]%2!=0){ //to find minimum odd number(absolute) in the array
            isOdd=true;
            if(min_odd>abs(arr[i]))
                min_odd=abs(arr[i]);
        }
        
         
    }
    
    if(isOdd==false) //if no odd number in array return -1
        return -1;
        
    if(sum%2==0){ //if sum is even we subtract min_odd since even-odd=odd (NOTE: min_odd has the absolute value of the array element) 
        sum=sum-min_odd;
    }
    
    return sum;
   
    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
     cout<<func(arr,n);
     return 0;
}
