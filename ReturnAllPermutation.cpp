#include<bits/stdc++.h>
using namespace std;

int Permutation(string input, string *output) {
	if(input.size() == 0) {
		output[0] = "";
		return 1;
	}
	int s1 = 0;
	int j = 0, p = 0, k = 0;
	for(int i=0;i<input.length();i++) {
		char  a = input[i];
		string o[100];
		s1 = Permutation(input.substr(0, i) + input.substr(i+1), o);
		j = 0;
		while(j < s1) {
			output[k++] = a + o[j++];
		}
	}
	return input.size() * s1;
}

int main() {
	string input, output[100];
	cin>>input;
	int ans = Permutation(input, output);
	for(int i=0;i<ans;i++) {
		cout<<output[i]<<endl;
	}
	cout<<ans;
	return 0;
}
