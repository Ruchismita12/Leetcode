class Solution {
public:
    void merge(int left,int mid,int right, vector<int>& nums)
    {
        int n1=mid-left+1;
        int m1=right-mid;
        vector<int>L(n1),R(m1);
        for(int i=0;i<n1;i++)
        {
            L[i]=nums[left+i];
        }
        for(int j=0;j<m1;j++)
        {
            R[j]=nums[mid+1+j];
        }
        int i=0,j=0,k=left;
        while(i<n1 && j<m1)
        {
            if(L[i]<=R[j])
            {
                nums[k]=L[i];
                i++;
            }
            else
            {
                nums[k]=R[j];
                j++;
                
            }
            k++;

        }

        while(i<n1)
        {
            nums[k]=L[i];
            i++;
            k++;
        }

        while(j<m1)
        {
            nums[k]=R[j];
            j++;
            k++;
        }

    }
    void mergeSort(int left,int right,vector<int>& nums)
    {
        if(left>=right)
        {
            return;
        }
        int mid=left+(right-left)/2;
        mergeSort(left,mid,nums);
        mergeSort(mid+1,right,nums);
        merge(left,mid,right,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0,nums.size()-1,nums);
        return nums;
        
    }
};