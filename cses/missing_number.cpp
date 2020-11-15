#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int sum=0;

    cin>>n;
    while (n-1)
    {
        sum +=sum;
        cin >>sum;
        n--;
    }
    cout << sum-(n+1)*n/2<<endl;
    return (0);
}