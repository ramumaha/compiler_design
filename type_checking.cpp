#include<bits/stdc++.h>
using namespace std;

int main(){
    string sym[10],types[10];
    char exprn[15];
    string opd1,opd2;
    string o1_type,o2_type;
    int n,choice;
    cout<<"input symbol table contents with attributes < system_name,type:";
    cout<<"\nNo. of entries in symbol table :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Entry"<<i+1<<": ";
        cout<<"Symbol name: ";
        cin>>sym[i];
        cout<<"Type: ";
        cin>>types[i];
    }
    cout<<"Symbol      type";
    cout<<"\n------------------\n";
    for(int j=0;j<n;j++){
        cout<<sym[j]<<"\t\t\t"<<types[j]<<" \n";
    }
    cout<<"Input an expression in form of <operand1><space><operator><space><operand2>: \n";
    cout<<"enter expression\n";
    cin.getline(exprn,15);
    scanf("%[^\n]s",exprn);
    int i=0;
    char*t=strtok(exprn," ");
    char*token[3];
    while(t!=NULL){
        token[i++]=t;
        t=strtok(NULL," ");
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(sym[i]==token[0]){
            o1_type=types[i];
            flag++;
        }
        if(sym[i]==token[2]){
            o2_type=types[i];
            flag++;
        }
        if(flag==2){
            break;
        }
    }
    cout<<"type of operand1: "<<o1_type;
    cout<<"\ntype of opernad2: "<<o2_type;
    if(o1_type==o2_type){
        cout<<"\nType match\n";
    }else{
        cout<<"\ntype_mismatch";
    }
}