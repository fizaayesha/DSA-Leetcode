#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] >= arr[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    int binarySearch(vector<int> &arr, int s, int e, int t)
    {
        // int s = 0;
        // int e = arr.size() - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == t)
            {
                return mid;
            }
            else if (arr[mid] > t)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int pivot = pivotIndex(arr);
        int ans;
        if (target >= arr[pivot] && target <= arr[n - 1])
        {
            ans = binarySearch(arr, pivot, n - 1, target);
        }
        else
        {
            ans = binarySearch(arr, 0, pivot - 1, target);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr{2, 5, 6, 11, 12};
    cout << s.search(arr, 6);
    return 0;
}