int maxLength=0;
        int sum=0;
        map<int,int> mpp;
        
        for(int i=0;i<N;i++){
            sum += A[i];
            if(sum == K){
                maxLength=i+1;
            }
            if(mpp.find(sum-K) != mpp.end()){
                maxLength= max (maxLength,i-mpp[sum-K]);
            }
            if(mpp.find(sum) == mpp.end()){
                mpp[sum]=i;
            }
        }
        
        return maxLength;
