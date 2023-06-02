
class Solution
{
public:


    //Instead of c can use i+j==k-1 cuz i+j given elements considered

    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j = 0, c = 0;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                if (c == k - 1)
                return arr1[i];
                c++;
                i++;
            }
            else
            {
                if (c == k - 1)
                return arr2[j];
                c++;
                j++;
            }
        }
        while (i < n)
        {
            if (c == k - 1)
            return arr1[i];
            c++;
            i++;
        }
        while (j < m)
        {
            if (c == k - 1)
            return arr2[j];
            c++;
            j++;
        }
        return -1;
    }
};