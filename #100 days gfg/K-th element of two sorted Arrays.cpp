int i=n-1,j=0;
        while(i>=0 && j<m){
            if(arr1[i]>arr2[j]){
               swap(arr1[i],arr2[j]);
            }
            i--;
            j++;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        long result =0;
        if(n>=k){
            result= arr1[k-1];
        }
        else{
            result= arr2[k-n-1];
        }
        return result;
}