#include "/Users/xavieryn/GitHub/AoC2024/bits/stdc++.h"
using namespace std;

int main(){ 
    fstream new_file;
    new_file.open("/Users/xavieryn/GitHub/AoC2024/Day2/input.txt", ios::in);
    // input length of line changes

    int unsafe = 0;
    if(new_file.is_open()){
        string sa; 
        int n;
        bool increasing; 
        while(getline(new_file, sa)){
            istringstream my_stream(sa);          
            bool unsafeBool = false;
            vector <int> v;

            while(my_stream){;
                if(my_stream){
                    my_stream >> n;
                    v.push_back(n);
                }
            }

            // Defines in the start whether the first two numbers are increasing or decreasing
            bool decreasing;
            if (v[0] > v[1]){
                decreasing = true;
            }  else{ 
                decreasing = false;
            }     
            for (int i = 1; i < v.size() - 1; i++ ){
                cout << v.size() << endl;
                if (decreasing && v[i] > v[i+1] && v[i] - v[i+1] <= 3){ }
                if (!decreasing && v[i] < v[i+1] && v[i+1] - v[i] <= 3){ }
                else{
                    unsafe +=1;
                    break;
                }
            }     
        }
        cout << 1000 - unsafe << endl;

    }

}