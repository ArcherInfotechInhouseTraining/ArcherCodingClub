#include<iostream>
#include<vector>
using namespace std;

int absoluteSum(vector<int> arr){
    int sum = 0;
	for(int i = 0; i<arr.size(); i++){
		if(arr[i] < 0){
			sum += arr[i] * (-1);
		}
		else{
			sum+=arr[i];
		}
	}
    return sum;
}

int main(){
    int n;
    vector<int> arr;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
	int len = sizeof(arr)/sizeof(int);
    int sum = absoluteSum(arr);
    cout << "Sum of absolute values: " << sum << endl;
}

