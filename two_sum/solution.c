int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2 ;
	int* temp = (int*) malloc(sizeof(int)*2);
    for(int i = 0;i<numsSize;i++){
        for(int j = 0;j<numsSize;j++){
            if((target - nums[i]) == nums[j] && i != j){
                if(i<j ){
                    temp[0] = i;
                    temp[1] = j;
                }
                else{
                    temp[0] = j;
                    temp[1] = i;
                }
                break;
            }
        }
    }
    //printf("%d",returnSize[0]);
    return temp;
}
