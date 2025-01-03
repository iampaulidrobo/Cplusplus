#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
}

int main(){
   
    string nums="1234";
    for(auto sets: subsequences(nums)){
        for(auto set:sets){
            cout<<set;
        }
       cout <<endl;
    }
       return 0;
}