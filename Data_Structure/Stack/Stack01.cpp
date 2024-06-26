#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



class mystack
{
    private:

    int mxsize;
    int *stc;     
    int top;
    

    public:

    mystack( int size=3 ){
         
         mxsize = size;
         stc = new int [mxsize];     // Dynamically allocated memory
         top=0;

        }
   

    ~ mystack()
    {
        delete [] stc;
    }


    bool  isFull()    {  return top == mxsize; }
    bool  isEmpty()   {  return top == 0; }


    void resize()
    {  cout<<" Size increasing"<<endl;
        int size=100;
        int *tmp = new int [mxsize + size ];
        for (int i=0; i<mxsize; i++)
         {
              tmp[i]=stc[i];
         }
        
        mxsize= mxsize + size;
        delete [] stc ;
         stc = tmp;     

    }


    void push( int element )
    {
        if(isFull())
        {
            resize();
        }

        stc[top++]= element;
    }



     bool pop ()
     {
        if (isEmpty())
        {
            cout<<"Stack is Empty."<<endl;
            return false;
        }

        top--;
        return true;
     }




    void display()
    {

        cout<<" Elements : ";
        for(int i=top-1; i>=0; i--)
        {
            cout<<stc[i]<<" ";
        }
        cout<<endl;
    }

};

 
 int main()
 {
    mystack st;
    st.push(10);
    st.push(15);
    st.push(12);

    st.display();
    
    st.pop();
    st.pop();      
    
    cout<<"After Deleting 2 values : ";
    st.display();
 }


