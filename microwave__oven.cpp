/*Amy Fowler, a microwave oven manufacturer recommends increasing the heating time by 50% when two items are heated and doubling the heating time when three items are heated. Heating more than three items at once is not recommended. Now, write a C++ program to find out the recommended heating time.
Input format
The first input is an integer which denotes the number of items.
The second input is a floating-point number which denotes the single item heating time.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int items;
    float time,ttime;
    cin>>items;
    cin>>time;
    if(items == 1){
        ttime= time;
         cout<<fixed<<setprecision(2)<<ttime;
    }
    else if(items == 2){
        ttime = time+ ((time*50)/100);
        cout<<fixed<<setprecision(2)<<ttime;
    }
    else if(items == 3){
        ttime = time*2;
        cout<<fixed<<setprecision(2)<<ttime;
    }
    else {
        cout<<"Number of items is more";
    }
    return 0;
}