#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> fibo(int n){
	vector<int> ans;
	int count=0,t1=0,t2=1,next;
	for(int i=1;i<=n;i++ ){
		if(i==1){
			ans.push_back(t1);
//			cout<<t1<<" ";
			continue;
		} 
		if(i==2){
			ans.push_back(t2);
//			cout<<t2<<" ";
			continue;
		}
		next=t1+t2;
		t1=t2;
		t2=next;
		
		
		ans.push_back(next);
//		cout<<next<<" ";
		return ans;
	}
}
//
void pattern(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		for(int j=1; j<=x; j++){
			if(j==x){
				cout<<"1 "<<" ";
			} else {
				cout<< "  ";
			}
		}
		cout<<endl;
		if(i<=n/2) x++;
		else x--;
	}

}


int main(){
	int n;
	cout<<"Enter the number terms : ";
	cin>>n;
//	fibo(n);
//	pattern(7);





	vector<int> ans;
	int count=0,t1=0,t2=1,next;
	for(int i=1;i<=n;i++ ){
		if(i==1){
			ans.push_back(t1);
//			cout<<t1<<" ";
			continue;
		} 
		if(i==2){
			ans.push_back(t2);
//			cout<<t2<<" ";
			continue;
		}
		next=t1+t2;
		t1=t2;
		t2=next;
		
		
		ans.push_back(next);
//		cout<<next<<" ";
	
	}
	int c=0;
	int x=1;
	for(int i=1;i<=n;i++){
		for(int j=1; j<=x; j++){
			if(j==x){
				cout<<ans[c]<<" ";
//				cout<<"1 "<<" ";
			} else {
				cout<< "  ";
			}
		}
		cout<<endl;
		if(i<=n/2) x++;
		else x--;
		c+=1;
	}
	
}
