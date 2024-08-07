// problem link
// https://codeforces.com/problemset/problem/1851/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), even, odd;
        
        for(int i = 0; i <n;i++){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                even.push_back(arr[i]);
            }else{
                odd.push_back(arr[i]);
            }
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        int i = 0, j = 0;
        for(int k = 0;k < n;k++){
            if(arr[k]%2 == 0){
                arr[k] = even[i];
                i++;
            }else{
                arr[k] = odd[j];
                j++;
            }
        }
        bool flag = true;
        
        for(int i = 0;i  < n-1;i++){
            if(arr[i] > arr[i+1]){
                flag = false;
                break;
            }
        }
        
        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}