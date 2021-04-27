#include <iostream>

using namespace std;

int main()
{
    int N, M, sum;
    cin>>N;
    sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin>>M;
        sum += M;
        
    }
    cout<<sum;
    
}