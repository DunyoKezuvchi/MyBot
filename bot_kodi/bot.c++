#include <bits/stdc++.h>

using namespace std;
const int ch_MAX = 26;
string RandomString(int ch)
{
    char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}
int main()
{
   srand(time(NULL));
   int ch ;
   cin>>ch;
   cout<<RandomString(ch) <<"\n";
   return 0;
}
