#include "/Users/xavieryn/GitHub/AoC2024/bits/stdc++.h"
using namespace std;

int main(){ 
    fstream new_file;
    new_file.open("/Users/xavieryn/GitHub/AoC2024/Day2/input.txt", ios::in);
    // input length of line changes

    int unsafe = 0;
    if(new_file.is_open()){
        string sa; 
        // int oldN, newN;
        bool increasing; 
        while(getline(new_file, sa)){
            istringstream my_stream(sa);

            my_stream >> oldN;
            my_stream >> newN;

            // Checks the first set of numbers to see if it is decreasing increasing
            // if (oldN > newN){
            //     increasing = false;
            // }else{
            //     increasing = true;
            // }
            // oldN = newN;
            bool unsafeBool = false;
            vector <int> v = {}; 


            while(my_stream){;
                if(my_stream){
                    my_stream >> n;
                    // if (!unsafeBool && oldN > newN && !increasing && oldN - newN <= 3){
                    //     // cout << oldN << " " ; 
                    // }
                    // else if (!unsafeBool && oldN < newN && increasing && newN - oldN <= 3){
                    //     // cout << oldN << " " ; 
                    // }else{
                    //     unsafe += 1;
                    //     break;
                    //     unsafeBool = true; 
                    // }
                    // oldN = newN;
                    v.push_back(n);
                }
            }
            
        }
        cout << 1000 - unsafe << endl;

    }

}