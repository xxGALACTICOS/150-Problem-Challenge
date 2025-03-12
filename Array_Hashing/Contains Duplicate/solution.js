class Solution{
    hasDuplicate(nums){
        const set = new Set();
        for (var num of nums){
            if(set.has(num)) return true;
            set.add(num);
        }
        return false;
    }
}