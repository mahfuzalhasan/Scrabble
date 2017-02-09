#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;



#ifndef FILETASK_H_INCLUDED
#define FILETASK_H_INCLUDED

typedef struct arrays
{ public:
    char hihi[ 10000];

}array;


bool operator< (const array &a,const array &b)
{
    return (strcmp(a.hihi,b.hihi)<0);
}

vector<array>v;


void dictbuild()
{
    FILE *fp;
    fp=fopen("sakin.txt","r");
char sakin[12000];
 int count;

array filechar;

 if(fp!=NULL){
 while(!feof(fp))
 {
     strcpy(sakin,"");
     fscanf(fp,"%s",sakin);
     strcpy(filechar.hihi,sakin);
     v.push_back(filechar);
	 count++;

   //  fprintf(stdout,"%s\n",sakin);


 }


 }

  fclose(fp);

sort(v.begin(),v.end());


cout<<count<<endl;

}

bool search(char *inputs)
{bool found=false;
   {
int low=0,high=450;


while(low<=high)
  {
      int mid=(low+high)/2;
      int cmp=strcmp(v[mid].hihi,inputs);
      if(cmp==0){found=true;
                            break;
                        }
      else if(cmp>0)high=mid-1;
      else low=mid+1;
  }

if(found)cout<<"found"<<endl;
else cout<<"not"<<endl;

}
return found;

}
#endif // FILETASK_H_INCLUDED
