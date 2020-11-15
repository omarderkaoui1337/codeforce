#include<iostream>
#include<string>
using namespace std;

int main()
{
    string tab;
    int i=0,x=0,x1=0;
    char pars;
    cin>>tab;
        while (tab[i])
        {
            pars= tab[i];
            while (tab[i]==pars)
            {
                    i++;
                    x++;
            } 
            if (x >= x1)
                x1=x;
            x=0;
        }
        cout << x1<<endl;
    return (0);
}