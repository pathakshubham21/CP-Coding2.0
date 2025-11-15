#include<iostream>
using namespace std;
void solve(string &str, string &output, int &result)
{
    if(str.length()==0)
    {
        if(output.length()==1 && output[0]!= '0')
        result++;
        if(output.length()==2 && output<="26")
        result++;
        return;
    }

    string output1 = output;
    string output2 = output;
    
    output2.push_back(str[0]);
    str.erase(str.begin()+0);
    solve(str, output1,result);
    solve(str, output2, result);
}
int main()
{
    string str = "ab";
    string output = "";
    int result =0;
    solve(str, output, result );
    cout << result << endl;
    return 0;

}