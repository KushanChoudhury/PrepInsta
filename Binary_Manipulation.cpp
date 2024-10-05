// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    string binsent;
    getline(cin,binsent);
    if(binsent.length()==0){
        cout<<-1;
        return 0;
    }
    int result=binsent[0];
    for(int i=1;i<binsent.size();i=i+2){
        switch(binsent[i]){
            case 'A':
                result=result&(binsent[i+1]-'0');
                break;
            case 'B':
                result=result|(binsent[i+1]-'0');
                break;
            case 'C':
                result=result^(binsent[i+1]-'0');
                break;
        }
    }
    cout<<result;
    return 0;
}