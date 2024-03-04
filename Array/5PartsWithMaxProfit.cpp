#include <iostream>
#include <unordered_map>
#include <vector>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int uid[n];
    for(int i=0; i<n; i++){
        cin>>uid[i];
    }

    int profit[n];
    for(int i=0; i<n; i++){
        cin>>profit[i];
    }

    int ans = 0;
    int max_val =0;

    for(int i=0; i<n;i++){
        max_val = max(max_val,profit[i]);

        for(int j=i+1; j<n; j++){
            if(uid[i] == uid[j]){
                max_val = max(max_val,profit[j]);
            }
            else{
                i=j-1;
                break;
            }
        }
        ans+=max_val;
        max_val = 0;
    }

    cout<<ans;
}





// int maxProfit(vector<int>& uniqueId, vector<int>& profit) {
//     int n = uniqueId.size();
//     if (n == 0) return 0;
    
//     unordered_map<int, int> maxProfitMap;

//     // Filtering out profits less than 0
//     vector<int> positiveProfits;
//     vector<int> positiveIds;
//     for (int i = 0; i < n; ++i) {
//         if (profit[i] >= 0) {
//             positiveProfits.push_back(profit[i]);
//             positiveIds.push_back(uniqueId[i]);
//         }
//     }

//     n = positiveIds.size(); // Update size after filtering

//     for (int i = 0; i < n; ++i) {
//         maxProfitMap[positiveIds[i]] = max(maxProfitMap[positiveIds[i]], positiveProfits[i]);
//     }

//     int maxProfit = 0;
//     for (auto& pair : maxProfitMap) {
//         maxProfit += pair.second;
//     }

//     return maxProfit;
// }

// int main() {
//     int n;
//     cout << "Enter the number of automobile parts: ";
//     cin >> n;

//     vector<int> uniqueId(n);
//     vector<int> profit(n);

//     cout << "Enter the unique IDs of the automobile parts: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> uniqueId[i];
//     }

//     cout << "Enter the profits corresponding to each part: ";
//     for (int i = 0; i < n; ++i) {
//         cin >> profit[i];
//     }

//     int max_profit = maxProfit(uniqueId, profit);

//     cout << "Maximum profit: " << max_profit << endl;

//     return 0;
// }
