#include<iostream>
using namespace std;
int scorestring(char str[]){
    int score=0;
    for(int i=0;str[i]!='\0';i++){
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u'){
        score+=2;
    }
    else{
        score+=1;
    }
    }
    return score;
}
int main()
{
    char str[100];
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"the score of string is :"<<scorestring(str)<<endl;


    return 0;
}