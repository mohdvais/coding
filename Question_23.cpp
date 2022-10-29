
/******************************************************************************
                                 Question 23
                                Vector concept
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
   
  /* 
   1.vector <data_type> vector_name;
   2.vector <data_type> vector_name(size);
   3.vector <data_type> vector_name(size, element)
   */
   vector<int> v1;
   vector<int>v2(10);
   vector<int>v3(4,23);
   
   v3[0] = 2;
   v3[1] = 4;
   v3[2] = 6;
   v3[3] = 8;
   
   //cout<<v1.size()<<endl;
   /*
   cout<<v1.size()<<endl;
   cout<<v2.size()<<endl;
   
   /*
   for(int i=0;i<v3.size();i++)
   {
       cout<<v3.size()<<endl;
   }
   
   
   for(int i: v3)
   {
       cout<<i<<" ";
   }
   */
   
}
/***
Output
cout<<v1.size()<<endl;
cout<<v2.size()<<endl;
0
10
 for(int i=0;i<v3.size();i++)
   {
       cout<<v3.size()<<endl;
   }
4
4
4
4

2 4 6 8 
***/
