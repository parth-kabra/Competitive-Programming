#include <bits/stdc++.h>
using namespace std;
void usaco(string filename = ""){
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
} 

int main(){
	usaco();

	int n;
	cin >> n;

	if ( n >= 1 and n <=125){
		cout <<  "4" << endl;
	}

	else if ( n >=126 and n <=211){
		cout << "6" << endl;
	}

	else if ( n >=212 and n <=214){
		cout << "8" << endl;
	}
}