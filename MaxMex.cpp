#include <iostream>
#include <unordered_map>
using namespace std;

void MaxMex(){
    int N,k;
    cin>>N>>k;
    int arr[N];
    unordered_map<int,int> mp;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        mp[arr[i]] = 1;
    }
    
    int temp = 0, missing;
    k++;
    while(k>0){
        if(mp.find(temp) == mp.end()){
            k--;
            missing = temp;
        }
        temp++;
    }
    cout<<missing<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    MaxMex();
	}
	return 0;
}
