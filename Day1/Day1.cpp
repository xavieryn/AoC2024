#include "/Users/xavieryn/GitHub/AoC2024/bits/stdc++.h"
using namespace std;


// int main(){
//     freopen("/Users/xavieryn/GitHub/AoC2024/Day1/input.txt", "r", stdin);
//     vector<int> array1, array2; 
//     int distance = 0;

//     int a, b;
//     while ( cin >> a >> b){
//         array1.push_back(a);
//         array2.push_back(b);
//     }

//     sort(array1.begin(),array1.end());
//     sort(array2.begin(),array2.end());

//     for (int i = 0; i < array1.size(); i++) {
//         distance += abs(array1[i] - array2[i]);
//         cout << abs(array1[i] - array2[i]) << endl;
//         //cout << array1[i] << " " << array2[i] << endl;
//     }
//     // cout << array1.size() << endl;

//     cout << distance;
// }

int main(){
    freopen("/Users/xavieryn/GitHub/AoC2024/Day1/input.txt", "r", stdin);
    vector<int> array1, array2; 

    unordered_map<int, int> mp;
    
    int a, b;
    while ( cin >> a >> b){
        array1.push_back(a);
        array2.push_back(b);
    }

    for (int i = 0; i < array2.size(); i++){
        if (!mp[array2[i]]){
            mp[array2[i]] = 1;
        } else{
            mp[array2[i]] += 1;
        }
    }
    int similarity_score = 0; 
    for (int i = 0; i < array1.size(); i++){
        if(mp[array1[i]]){
            similarity_score += array1[i] * mp[array1[i]];
        }
    }

    cout << similarity_score << endl;  
}