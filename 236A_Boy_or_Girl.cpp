#include <bits/stdc++.h>

using namespace std;

int main() {

	string s;
	int count = 0;

	cin >> s;

	sort(s.begin(), s.end());

	for (int i = 1; i < s.length(); ++i){
		
		if(s[i] != s[i-1]){
			++count;
		}
	}

	if(count&1){//variable & 1 generally means variable %2-- two's compliments -- AND operation
        cout << "CHAT WITH HER!" << "\n";
	}
    else{
        cout << "IGNORE HIM!" << "\n";
	}

	return 0;
}