long long merge(long long arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    long long inversionCount = 0;

    vector<long long> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            inversionCount += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // copy to the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    };

    return inversionCount;
}

long long mergeSort(long long arr[], int low, int high)
{
    if (low >= high)
        return 0;
    long long int cnt = 0;
    int mid = low + ((high - low) >> 1);

    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

public:
long long int inversionCount(long long arr[], long long N)
{
    return mergeSort(arr, 0, N - 1);
}