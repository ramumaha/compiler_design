#include<bits/stdc++.h>
using namespace std;

int i=0;
char s[10];

void A(){
    if(s[i]=='b' || s[i]=='c')i++;
}

void B(){
    if(s[i]=='a' || s[i]=='b')i++;
}


void S(){
    if(s[i]=='a'){
        i++;
        B();
        if(s[i]=='b')i++;
    }else if(s[i]=='c'){
        i++;
        if(s[i]=='c'){
            i++;
            A();
        }
    }
}

int main(){
    cout<<"Given grammer is"<<"\n";
    cout<<"S->aBb/ccA"<<"\n";
    cout<<"A->b/c"<<"\n";
    cout<<"B->a/b"<<"\n";
    cout<<"Enter the string\n";
    cin>>s;
    char eos[]="$";
    strcat(s,eos);
    cout<<s;
    S();
    if(s[i]=='$')cout<<"\n String is valid\n";
    else{
        cout<<"\n string is invalid\n";
    }
    return 0;
}





