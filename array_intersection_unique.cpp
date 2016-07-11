//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2]

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums1.erase( unique( nums1.begin(), nums1.end() ), nums1.end() );
        nums2.erase( unique( nums2.begin(), nums2.end() ), nums2.end() );
        
       
        vector<int> inter;
        int i=0,j=0,s1=nums1.size(),s2=nums2.size();
        while(i<s1&&j<s2){
            if(nums1[i]==nums2[j]){
                inter.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else
            j++;
        }
        return inter;
    }
};
