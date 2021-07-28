//selection sort of an array
#include<iostream>
using namespace std;
int main(){
	int a[] = {2, 9, 5, 10, 25, 14, 4};
	int i, j, temp, min, len;
	len = sizeof(a)/sizeof(int);
	cout<<len<<endl;
	for(j=0; j<len; j++){
		min = j;
		for(i=0+j; i<len; i++){
			if(a[min] > a[i]){
				min = i;
			}
		}
		temp = a[j];
		a[j] = a[min];
		a[min] = temp;
		cout<<a[j]<<" ";
	}
	
	/*for(i=0; i<len; i++){
		cout<<a[i]<<" ";
	}*/
	
	return 0;
}
