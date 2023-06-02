//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
   static int comparator(int n,int m)
    {
        int cnt1 = __builtin_popcount(n);
        int cnt2 = __builtin_popcount(m);
    
        if (cnt1 <= cnt2) return false;
        return true;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr, arr+n, comparator);
    }
};

stable_sort is a C++ standard library function that sorts a 
range of elements in ascending order using a comparison function. 

The function is called "stable" because the relative order 
of the elements with equal values is preserved after sorting.

The sortBySetBitCount function takes an integer array arr 
and its size n as input and sorts the array in descending 
order based on the number of set bits in the binary representation of each number.

The comparator function is the comparison function used by stable_sort. 
It takes two integers n and m as input and compares them based on the 
number of set bits in their binary representation. 
The function uses the built-in __builtin_popcount function 
to count the number of set bits in each integer. 
The __builtin_popcount function is a compiler built-in function
that counts the number of set bits in an integer using efficient hardware instructions.

The comparator function returns false if the 
number of set bits in n is less than or equal to 
the number of set bits in m, and true otherwise. 
This means that if two numbers have the same number of set bits, 
their relative order is preserved after sorting.

The sortBySetBitCount function then calls stable_sort 
with the array arr, its size n, and the comparator function as arguments. 
This sorts the array in descending order based on thenumber of 
set bits in the binary representation of each number.

Overall, the sortBySetBitCount function sorts 
the array in descending order based on the 
number of set bits in each number using a 
stable sorting algorithm, which preserves the 
relative order of equal elements. The comparator function uses 
the __builtin_popcount function to count the number of set 
bits in each integer efficiently. This approach is useful 
when we want to sort an array based on some specific 
property of its elements, in this case, the number of set bits, 
and we want to preserve the relative order of equal elements.