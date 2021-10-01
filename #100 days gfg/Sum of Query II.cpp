class Solution{
public:
    vector<int> querySum(int n, int arr[], int q1, int queries[])
    {
        // code here
        queue<pair<int,int>>q;
        vector<int>s;
        int i=0;
        int n1=2*q1;
        while(i< n1-1)
        {
            q.push({queries[i],queries[i+1]});
            i=i+2;
        }
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            int sum=0;
            for(int j=x-1;j<y;j++)
            {
                sum=sum+arr[j];
            }
            s.push_back(sum);
            
            
        }
        return s;
    }
};