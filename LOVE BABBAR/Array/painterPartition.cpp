bool isPossible(vector<int> &boards,int k,int n,int mid){
    int paintersCount=1,boardsSum=0;
    for(int i=0;i<n;i++){
        if(boardsSum+boards[i]<=mid){
            boardsSum+=boards[i];
        }
        else{
            paintersCount++;
            if(paintersCount>k || boards[i]>mid){
                return false;
            }
            boardsSum=0;
            boardsSum+=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    
    int start=0,ans=-1,n=boards.size(),sum=0;
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int end=sum;
    if(k>n){
        return -1;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossible(boards,k,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}