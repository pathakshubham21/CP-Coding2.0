#include<iostream>
using namespace std;
void solve(string str, string output)
{
    if(str.length()==0)
    {
        cout<<output<<endl;
        return;
    }

    string output1 = output;
    string output2 = output;
    
    output2.push_back(str[0]);
    str.erase(str.begin()+0);
    solve(str, output1);
    solve(str, output2);
}
int main()
{
    string str = "ab"
    string output = "";
    solve(str, output);
    return 0;

}