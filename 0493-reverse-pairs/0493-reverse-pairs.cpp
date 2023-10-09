class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high,int& count) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    int newLeft=left;
    int newRight=mid+1;
    while(newLeft<=mid && newRight<=high){
        if(arr[newLeft]>(long long)2*arr[newRight]){
            count=count+(mid-newLeft+1);
            newRight++;
        }
        else{
            newLeft++;
        }
                
    }
    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high,int& count) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid,count);  // left half
    mergeSort(arr, mid + 1, high,count); // right half
    merge(arr, low, mid, high,count);  // merging sorted halves
}

    int reversePairs(vector<int>& arr) {
        int count=0;
        mergeSort(arr,0,arr.size()-1,count);
        return count;
    }
};