#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Enter 5 numbers\n";
    int i, arr[5], j, temp, minimum, pos;
    for(i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    for(i=0; i<5; i++)
    {
        minimum=arr[i];
        pos=i;
        //Finding minimum in remaining list
        for(j=i+1; j<5; j++)
        {
            if(minimum>arr[j])
            {
                minimum=arr[j];
                pos=j;
            }
        }
        //Swapping with minimum value
        temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
    cout<<"The sorted list is:\n";
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<"\t";
    }
}
