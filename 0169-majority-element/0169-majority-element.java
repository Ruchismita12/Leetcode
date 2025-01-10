class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer> mp=new HashMap<>();
        //occurence of each element      
        for(int i=0;i<n;i++)
        {
            int value=mp.getOrDefault(nums[i],0);
            mp.put(nums[i],value+1);
        }

        //find majority element
        for(Map.Entry<Integer,Integer> it:mp.entrySet())
        {
            if(it.getValue()>n/2)
            {
                return it.getKey();
            }
        }

        return -1;
        
    }
}