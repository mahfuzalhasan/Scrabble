#include<cstdio>
#include"filetask.h"

using namespace std;

int main()
{ dictbuild();
    while(1)
      {
          char inp[15000];
          gets(inp);
          cout<<search(inp)<<endl;
      }
}
