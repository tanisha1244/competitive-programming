class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
         int i=0;
    int k=0;
    int j=n-1;
    while(k<=j)
    {
        if(a[k]==0)
        {
            swap(a[i],a[k]);
            i++;
            k++;
        }
       else if(a[k]==2)
        {
            swap(a[k],a[j]);
            j--;
        }
        else if(a[k]==1)
        {
            k++;
        }
        
    }
    }
    
};
