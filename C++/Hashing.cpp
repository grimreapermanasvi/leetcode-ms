#include <bits/stdc++.h>
using namespace std;


/*int main()
{//Count the number in array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;

}*/
/*WHEN IT SAYS ONLY UPPER CASE int main()
{
    string s;
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}*/
/*When nothing stated 
int main ()
{
    string s;
    cin>>s;


    //pre compute 
    int hash[256]={0};
    for(int i=0;i<n;i++)
       {hash[s[i]]++;}
    int q;
    cin>>q;
    while{q--} {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}
*/
// USING MAP METHOD 
/**/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //pre cpompute
    map<int, int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int number ;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}