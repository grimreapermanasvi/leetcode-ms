#include <bits/stdc++.h>
using namespace std;
/*int cnt=0;
 
void print(){
    if(cnt==3)
        return;
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){
    print();

    return 0;
}*/

// PRINT NAMES 1 TO N TIMES 
/*void print(int i,int n )
{
    if(i>n)
       return;
    cout<<"raj";
    print(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    print(1,n);
    return 0;
}*/
//PRINT NAMES FROM N TO 1
/*void func(int i,int n)
{
    if(i<1)
        return;
    cout<<i;
    func(i-1,n);
}
int main()
{
    int n;
    cin>>n;
    func(n,n);
}*/
//PRINT NAMES FROM 1 TO N(Backtraking )
/*void func(int  i,int n)
{
    if(i<1)
        return;
    func(i-1,n);
    cout<<i;
}
int main(){
    int n;
    cin>>n;
    func(n,n);
}*/
//PRINT NAMES FROM N TO 1 (BACKTRACKING)
/*void func(int i,int n)
{
    if(i>n)
        return;
    func(i+1,n);
    cout<<i;
}
int main()
{
    int n;
    cin>>n;
    func(1,n);
}*/


//SUM OF 3 NUMBER 2 ways :1.Parameterised  2.Functional
/*void func(int i,int sum)//Parameterised method 
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    func(i-1,sum+i);
}
int main()
{
    int n;
    cin>>n;
    func(n,0);
}*/

/*int  func(int n) //Functional method 
{
    if(n==0)
        return 0;
    return n + func(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<func(n);
}*/

//REVERSE AN ARRAY
/**/
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void rev(int arr[],int start,int end)
{
    if(start<end)
    {swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
}
}
int main()
{
    int n=5;
    int arr[]={5,4,6,3,2};
    rev(arr,0,n-1);
    print(arr,n);
}

