#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin >> n;
   int e = n % 10;
   int f = n / 10;
   if(n == 10)
   {
       cout << "YES";
   }else if(e % f == 0 || f % e == 0)
   {
       cout << "YES";
   }else
   {
       cout << "NO";
   }

    return 0;
}
