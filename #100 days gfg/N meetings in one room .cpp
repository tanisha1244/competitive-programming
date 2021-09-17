class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
   
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>>y;
        for(int i=0;i<n;i++)
        {
            y.push_back({end[i],start[i],i+1});
        }
        sort(y.begin(),y.end());
        int l=y[0][0];
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(y[i][1]>l)
            {
                l=y[i][0];
                c++;
            }

        }
        return c;
    }
};