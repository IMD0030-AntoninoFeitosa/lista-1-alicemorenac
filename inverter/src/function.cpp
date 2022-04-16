#include <iostream>
#include <array>

template <std::size_t SIZE>
void reverse(std::array< std::string, SIZE >& arr)
{
    int s = arr.size();
    for (int i = 0; i < s / 2; i++)
    {
        swap(arr[i], arr[s - i - 1]);
    }
}
