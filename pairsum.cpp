#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vect;
    vector<int> sum;
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        vect.push_back(j);
    }
    for(int i=0;i<vect.size()-1;i++){
        for(int j=i+1;j<vect.size();j++){
            sum.push_back(vect[i]+vect[j]);
        }
    }
    //for(auto e:sum) cout << e << " ";
    sort(sum.begin(), sum.end());
    for(int i =0;i<m;i++){
        int in;
        cin >> in;
        if(binary_search(sum.begin(),sum.end(), in)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}

