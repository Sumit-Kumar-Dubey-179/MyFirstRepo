#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[min]>arr[j])
              min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}
