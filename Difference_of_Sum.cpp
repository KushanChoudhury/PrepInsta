#include <iostream>

using namespace std;

int differenceofSum (int n, int m)
{
    int sumdivis=0;
    int sumnotdivis=0;
    for(int i=1;i<=m ;i++){
        if(i%n==0)
            sumdivis+=i;
        else
            sumnotdivis+=i;
    }
    
    return sumnotdivis-sumdivis;
}

int main ()
{
  int n, m;
  int result;
  cin >> n;
  cin >> m;
  result = differenceofSum (n, m);
  cout << result;
  return 0;
}