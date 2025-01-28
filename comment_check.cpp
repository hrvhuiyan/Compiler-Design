#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    int l=line.length();
    cout<<l<<endl;
    //hello
    /*hello*/
    if(line[0]=='/'&&line[1]=='/'&&line[2]!='/')
    {
      cout<<"This is comment"<<endl;
    }

    else if(line[0]='/'&&line[1]=='*'&&line[line.size()-1]=='/'&&line[line.size()-2]=='*')
    {
        cout<<"This is comment";
    }
    else
        cout<<"This is not comment";
}
