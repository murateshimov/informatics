/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> n;
    bool zeroExist = false;
 
    for (int i = 1; i <= n ; i++)
    {
        cin >> x;
        if (x == 0)
        {
            zeroExist = true;
            
        }
    }
      if (zeroExist)
        cout<<"YES";
      else
        cout << "NO";
}
