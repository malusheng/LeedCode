/*************************************************************************
	> File Name: LeetCode287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时54分51秒
 ************************************************************************/

int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[nums[q]]];
    } while (p != q);
    int cnt = 0;
    do {
        cnt++;
        p = nums[p];
    } while (p != q);
    q = nums[0], p = nums[0];
    while (cnt--) p = nums[p];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}


/*
int findDuplicate(int* nums, int numsSize){
    int p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
*/
