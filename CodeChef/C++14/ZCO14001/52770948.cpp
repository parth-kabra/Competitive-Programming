#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout); 
        freopen("error.txt", "w", stderr);
    #endif
	
	//code here
	int n,w;
	cin>>n>>w;
	vector<int> arr(n);
	for(int &i : arr){
		cin>>i;
	}
	bool picked = false;
	int crane = 0;
	int x;
	while(cin>>x){
		if(x == 0){
			break;
		}
		else{
			switch(x){
				case 1:
					if(crane > 0){
						crane--;
					}
					break;
				case 2:
					if(crane < n-1){
						crane++;
					}
					break;
				case 3:
					if(!picked){
						if(arr[crane] > 0){
							picked =true;
							arr[crane] --;
						}
					}
					break;
				case 4:
					if(arr[crane] < w){
						if(picked){
							arr[crane]++;
							picked = false;
						}

					}
					break;
			}
		}
	}
	for(int &i : arr){
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}