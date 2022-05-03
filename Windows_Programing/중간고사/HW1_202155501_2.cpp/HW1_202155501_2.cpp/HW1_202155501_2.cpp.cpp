#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector; using std::copy;
using std::ostream_iterator;
using std::reverse;

void PrintVec(vector<int>& arr)
{
    copy(arr.begin(), arr.end(),
        ostream_iterator<int>(cout, ", "));
    cout << endl;
}

int main()
{
    vector<int> day = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    reverse(day.begin(), day.end());
    PrintVec(day);

    return EXIT_SUCCESS;
}
