#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3,4};
    
    for(int i = 0; i < nums2.size(); i++)
    {
        nums1.push_back(nums2[i]);
    };

    sort(nums1.begin(), nums1.end());

        int s = 0;
        int e = nums1.size() - 1;
        int mid = s + ( e - s) / 2;

           if(nums1.size() % 2 == 0){
                double ans = (nums1[mid] + nums1[mid + 1]) / 2.0; 
                cout<<ans<<endl;
            } 
           else{
                cout<<nums1[mid]<<endl;
            }
    return 0;
}
