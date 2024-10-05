// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string pass;
    getline(cin,pass);
    if(pass.length()<4||(pass[0]>='0'&&pass[0]<='9')){
        cout<<0;
        return 0;
    }
    int capitalletters=0;
    int numericdigit=0;
    int spaceslash=0;
    for(int i=0;i<pass.length();i++){
        if(pass[i]==' '||pass[i]=='/'){
            spaceslash++;
        }
        else if(pass[i]>='A'&&pass[i]<='Z'){
            capitalletters++;
        }
        else if(pass[i]>='0'&&pass[i]<='9'){
            numericdigit++;
        }
    }
    if(spaceslash==0){
        if(numericdigit>=1){
            if(capitalletters>=1){
                cout<<1;
                return 0;
            }
        }
    }
    cout<<0;
    return 0;
}