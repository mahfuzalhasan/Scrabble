#include<cstring>
#include<cstdio>
#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{char str[20];map<string,int>array;string aa;
 FILE *fp;char filestr[20];int c;
 fp=fopen("sakin.txt","r");

 if(fp!=NULL){
 while(!feof(fp))
 {fgets(filestr,19,fp);
 for(int i=0;i<strlen(filestr)-1;i++)
  aa.push_back(filestr[i]);
  array[aa]=1;
 cout<<aa<<endl;
  aa.clear();}}
 fclose(fp);

 while(cin>>aa)
 {if(array[aa]==1)printf("yes\n");
 else printf("no\n");

 }
 return 0;}


