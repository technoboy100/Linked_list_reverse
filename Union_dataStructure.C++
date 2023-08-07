#include <bits/stdc++.h>
using namespace std;
 union data{
 	int n;
 	int x;
 }data1,data2;

 int main(){
 	cout<<sizeof(data1)<<" "<<sizeof(data2);
 	return 0;
 }