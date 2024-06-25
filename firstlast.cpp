#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5 ,7 ,7 ,8, 8,10};
    int target = 8;

    int s = 0;
    int e = nums.size() - 1; 
    int mid = s + ( e - s) / 2;

    while( s <= e )
    {
        if(nums[mid] < target)
        {
           s = mid + 1;
        }
        else if(nums[mid] < target)
        {
            e = mid = 1;    
        }
        else if(nums[mid] == target)
        {
            int ans = mid;
            cout<<ans<<endl;
            s = mid + 1;
        }
        mid = s + ( e - s) / 2;
    }
    return 0;
}
