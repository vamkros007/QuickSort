
//
//  main.cpp
//  Data Structure
//
//  Created by Vamsi Krishna on 11/01/21.
//

//
//  main.cpp
//  Data Structure
//
//  Created by Vamsi Krishna on 08/01/21.
//

#include <iostream>
#include <vector>

void PrintArray(std::vector<int>arr)
{
   
    for(int i = 0; i < arr.size(); i++)
    {
        std::cout<<arr[i]<<" ";
    }

}

void Swap(int start,int end,std::vector<int>&arr)
{
    if(arr[start] != arr[end])
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
   
}



int Partition(std::vector<int> &arr, int start, int end)
{
    int pivot = start++;
    
    while(start < end)
    {
        
        while(arr[start] < arr[pivot])
        {
            start++;
        }
        
        while(arr[end] > arr[pivot])
        {
            end--;
        }
            if(start < end)
            {
                Swap(start, end, arr);
            }
    }

    
    Swap(pivot,end, arr);
    //PrintArray(arr);

    return end;
}

void Quicksort(int start , int end, std::vector<int>&arr)
{
    if(start < end)
    {
        int pivotIndex = Partition(arr, start, end);
        
        Quicksort(start,pivotIndex - 1, arr);
        Quicksort(pivotIndex + 1, end, arr);
    }
   
    
}



int main(int argc, const char * argv[])
{
    std::vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(9);
    arr.push_back(73);
    arr.push_back(24);
    arr.push_back(153);
    arr.push_back(28);
    
    int size = arr.size() - 1;
    Quicksort(0, size, arr);
    PrintArray(arr);
    

    return 0;
    
    
}
    







