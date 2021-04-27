#include <iostream>

using namespace std;

int main()
{
    int N, even, odd;
    cin>>N;
    
    while (N > 0)
    {
        if (N % 2 == 0)
        {
           even += 1; 
        }
        
        N = N / 10;
        
    }
    cout << even;
    

    
}
