// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int j=n;
//         int k=0;
//         for(int i=1;i<=n;i++)
//         {
//             if(j>=i)
//             {
//                 k++;
//                 j=j-i;
//             }
//             else{
//                 break;
//             }
//         }
//         return k;
        
//     }
// };//O(n)
class Solution {
public:
    int arrangeCoins(int n) {
        long long N = n;
        return (-1 + sqrt(N*8 + 1)) / 2;
    }
};//o(1)