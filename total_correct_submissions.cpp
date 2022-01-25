#include <bits/stdc++.h>
using namespace std;

void totalCorrectsubmissions(){
    int n;
    cin>>n;
    n=n*3;
    int temp;
    string str;
    unordered_map<string,int> ump;
    for(int i=0;i<n;i++){
        cin>>str>>temp;
        if(ump.find(str) == ump.end()){
            ump[str] = temp;
        }
        else{
            ump[str] += temp;
        }
    }
    vector<int> score;
    for(auto i=ump.begin();i!=ump.end();i++){
        score.push_back(i->second);
    }
    
    
    sort(score.begin(), score.end());
    for(int i=0;i<score.size();i++){
        cout<<score[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	   totalCorrectsubmissions();
	}
	return 0;
}
