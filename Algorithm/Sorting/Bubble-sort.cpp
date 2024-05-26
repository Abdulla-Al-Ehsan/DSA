#include <bits/stdc++.h>
using namespace std;
#define ll long long

   int Swap( int *a, int *b)
   {
       int tmp = *a;
       *a=*b;
       *b=tmp;
   }

     int main()
     {
        int n; 
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)  cin>>ar[i];
        

         for(int i=0; i<n; i++)
         { 

            for(int j=0; j<n; j++)
              { 
                 if(ar[j]>ar[j+1])
                 {
                    Swap( &ar[j], &ar[j+1]);
                 }
              }

         }


          for(int i=0; i<n; i++)
         {
            cout<<ar[i]<<" ";
 
}
     }

