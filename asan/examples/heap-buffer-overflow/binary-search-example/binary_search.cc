#include <iostream>
#include <vector>

size_t binary_search(std::vector<int> &nums, int target)
{
    size_t left = 0, right = nums.size();
    while (left < right)
    {
        size_t mid = left + (right - left - 1) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left] == target ? left : -1;
}

int main()
{
    std::vector<int> a = {2};
    int target = 3;
    std::cout << binary_search(a, target) << std::endl;
}