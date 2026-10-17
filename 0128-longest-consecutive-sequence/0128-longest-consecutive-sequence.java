class Solution {
    public int longestConsecutive(int[] nums) {
    HashSet<Integer> set = new HashSet<>();
    for (int i = 0; i < nums.length; i++) {
    set.add(nums[i]);
}
    Iterator<Integer> it = set.iterator();
    int longest = 0;
    while(it.hasNext()) {
        int num = it.next();
            if(!set.contains(num-1)){
            int currNum=num;
            int count=1;
            while(set.contains(currNum+1)){
                currNum++;
                count++;
            }
            longest=Math.max(longest,count);
        }
    }
    return longest;
    }
}
    
    