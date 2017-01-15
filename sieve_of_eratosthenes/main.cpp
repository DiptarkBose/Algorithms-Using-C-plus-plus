#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter upper limit: ";
    cin>>n;
    int i, arr[100], j=0, counter=0;
    for(i=2; i<=n; i++)
    {
        arr[j]=i;
        j++;
        counter++;
    }

    for(i=0; i<counter; i++)
    {
        if(arr[i]!=-1)
        {
            for(j=i+1; j<counter; j++)
            {
                if(arr[j]!=-1)
                {
                    if(arr[j]%arr[i]==0)
                    {
                        arr[j]=-1;
                    }
                }

            }
        }
    }
    cout<<"\nAll the prime numbers till "<<n<<"\n";
    for(j=0; j<counter; j++)
    {
        if(arr[j]!=-1)
            cout<<arr[j]<<"\t";
    }

    return 0;
}
