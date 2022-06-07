#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int 						long long
#define str 						string
#define ff 							first
#define vec 						vector
#define naturalNumSum(N)			N*(N+1)/2
#define p(x) 						push(x)
const int mod=  					1e9+7;
#define gcd(a,b) 					__gcd(a,b);
#define lower(string)				tolower(string)
#define lcm(a,b)					a*b/gcd(a,b);
#define pi 							pair
#define ss 							second
#define tc(t)						while(t--)
#define pb(a) 						push_back(a);
#define endl 						"\n"
#define db							double
#define clr(a)						a.clear();
#define fl							float
#define del 						delete
#define umap						unordered_map
#define mp							make_pair
#define ins							insert
#define stu 						struct
#define vd 							void
#define null 						NULL
#define cin(a)						cin>>a;
#define input(v,n)					for(int i=0;i<n;i++){int m;cin(m);v.pb(m);}
#define ppf							pop_front
#define elif						else if
#define stk 						stack
#define len(string)					string.length()
#define print(a)					cout<<a<<endl;
#define lb							lower_bound
#define ub							upper_bound
#define printArr(arr)				for(auto &i : arr){cout<<i<<" ";}
#define printMap(m)					for(auto &v : m){cout<<v.ff<<" "<<v.ss<<endl;}
//structural node
stu Node{
	int data;
	stu Node* left;
	stu Node* right;
	Node(int val){
		data = val;
		left=null;
		right=null;
	}
};

// linked list codes

class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=null;
		}
};
vd insatTail(node* &head, int val){
	node* n= new node(val);
	if(head==null){
		head=n;
		return;
	}
	node* temp=head;
	while(temp -> next !=null){
		temp=temp->next;
	}
	temp->next=n;
}
vd display(node* head){
	node* temp=head;
	while(temp!=null){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
vd insatHead(node* &head,int val){
	node* n= new node(val);
	n->next=head;
	head=n;
}
bool search(node* head,int key){
	node* temp=head;
	while(temp!=null){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
vd delHead(node* &head){
	node* todel=head;
	head=head->next;
	del todel;
}
vd deletion(node* &head, int val){
	if(head==null){
		return;
	}
	if(head->next==null){
		delHead(head);
		return;
	}
	node* temp=head;
	while(temp->next->data != val){
		temp=temp->next;
	}
	node* todel= temp->next;
	temp->next=temp->next->next;
	del todel;
}
node* rev(node* head){
	node* pre=null;
	node* curr=head;
	node* nn;
	while(curr!=null){
		nn=curr->next;
		curr->next=pre;

		pre=curr;
		curr=nn;
	}
	return pre;
}

/*
	*IMPLEMENTAIONS*
		INSERT AT TAIL
			*insatTail(head, value)

		INSERT AT HEAD
			*insatHead(head, value)

		DELETE AN ELEMENT
			*deletion(head, value)

		DELETE THE HEAD
			*delHead(head)
			
		DISPLAY THE HEAD
			*display(head)
*/

//linked list code end
vd solve(){
	int t;cin>>t;
	tc(t){
		int n;cin(n);
		int res=0;
		while(n--){
			int s;cin(s);
			res=res^s;
		}
		print(res)
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	   solve();
	return 0;
}