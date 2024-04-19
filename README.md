#include <iostream>
 #include <stdlib.h>
 #include <stdio.h>
 #include <cstring>
#include <algorithm>
 
 using namespace std;
struct rw{
int payment;
char name[20];
struct rw*  next;
};


void add(struct rw * g){
  int payment;
  cout<<"enter a number: ";
  cin>>payment;
  if(g->payment == -1){
    g->payment = 100;
    strcpy(g->name,"MOHAMMED");
    g->next = NULL;
    }else{
    while(g->next!=NULL)
      g= g->next;
    g->next = (struct rw*)malloc(sizeof(struct rw));
    g=g->next;
    strcpy(g->name,"MOHAMMED");
     g->payment = 100;
  g->next=NULL;
  } 
}

 
void show(struct rw * g){
  while(g!=NULL){
    cout<<"------------"<<endl;
    cout<<g->name<<endl;
    cout<<g->payment<<endl;
    g=g->next;
    
  }
    
}
 
 int main(){
    
struct rw* head (struct rw*)malloc(sizeof(struct rw)) ;
   add(head);
   show(head);
    
  return 0;
  
 }
### Hi there 👋

<!--
**1M7D/1M7D** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->
