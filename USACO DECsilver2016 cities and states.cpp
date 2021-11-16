#include <iostream>
#include <map>
#define  Max 100000
using namespace std;
map<int ,int > res[Max];
int get_res(string str);
    int main()
    {
        int n;
        cin>>n;
        string str1,str2;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>str1>>str2;
            string str=str1.substr(0,2);
            int x1=get_res(str);
            int x2=get_res(str2);
            if(res[x2][x1]!=0&&x1!=x2)
            {
                ans+=res[x2][x1];
            }
            res[x1][x2]++;
        }
    cout<<ans<<endl;
    return 0;

    }

    int get_res(string str)
    {
        int t=0;
        for(int i=0;i<str.size();i++)
        {
            t=t*100+str[i];
        }
        return t;
    }
