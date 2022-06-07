#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie();
 cout.tie();
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
 int TestCase;
 cin >> TestCase;
 while (TestCase--)
 {
  int Cricket, FootBall;
  cin >> FootBall >> Cricket;
  vector<pair<int, string>> Data;
  int Array[FootBall];
  int Array2[Cricket];
  int i = 0;
  while (FootBall--)
  {
   int Num;
   cin >> Num;
   Data.push_back(make_pair(Num, "FOOTBALL"));
  }
  while (Cricket--)
  {
   int Num;
   cin >> Num;
   Data.push_back(make_pair(Num, "CRICKET"));
  }
  sort(Data.begin(), Data.end());
  int Channel = 0;
  string Current = "FOOTBALL";
  int Siz = Data.size();
  for (int i = 0; i < Siz; i++)
  {
   if (Data[i].second == "FOOTBALL" && Current == "FOOTBALL")
   {
    continue;
   }
   else if (Data[i].second == "CRICKET" && Current == "FOOTBALL")
   {
    Current = "CRICKET";
    Channel++;
   }
   else if (Data[i].second == "FOOTBALL" && Current == "CRICKET")
   {
    Channel++;
    Current = "FOOTBALL";
   }
   else
   {
    continue;
   }
  }
  cout << Channel << endl;
 }
}