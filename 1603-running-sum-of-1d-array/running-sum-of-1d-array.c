/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    if (arr == NULL){
        *returnSize = 0;
        return NULL;
    }

      arr[0]= nums[0];
     for (int i = 1; i < numsSize;i++){
    
        
        arr[i]=arr[i-1] + nums[i];
        }

*returnSize = numsSize;
return arr ;
 
     }
