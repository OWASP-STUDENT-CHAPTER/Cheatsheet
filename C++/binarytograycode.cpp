#include<iostream>
using namespace std;

int odone(int a, int b){
    int x,y;
    x=a;
    y=b;
    if(x==0&&y==0){
        return 0;
    }
    else if(x==0&&y==1){
        return 1;
    }
    else if(x==1&&y==1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
    cin>>b[i];
    }
    int g[a];
    g[0]=b[0];
    cout<<g[0];
    for(int i=0;i<a-1;i++){
       g[i+1] = odone(b[i],b[i+1]);
       cout<<g[i+1];
    }
   
}