/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* Name - Kirthika 
College - Vivekananda college of engineering for women 
Input used in this program is
  FUNCTIONS
  CLASS AND OBJECT 
  WHILE LOOP
  SWITCH CASE 
  IF-ELSE CONDITIONAL STATEMENT  */
#include <iostream>

using namespace std;
//Using class
class Weather{
    
    public://using public to access all the user
    
    //using functions  
    void report(){
        
        int day;
        cout<<"Enter the report day wanted to know of the choice(1,2,3)- "<<" "<<endl;
        cin>>day;
        //switch case
        switch(day){
            case 1:cout<<"The weather report of today"<<endl;
            break;
            case 2:cout<<"The weather report of yesterday  "<<endl;
            break;
            case 3:cout<<"The weather report of tomorrow  "<<endl;
            break;
            default :cout<<"!!!!Unavailable!!!! "<<endl;
            break;
            exit(day);
        }
    }
    //functions
    void climate(){
        
        int t;
        cout<<"Enter the temperature:"<<" "<<endl;
        cin>>t;
        //using if-else conditional statement 
        if(t>=100)
        {
            cout<<"The climate is very hot.....!"<<endl;
        }
        else if(t<=100)
        {
            cout<<"The climate is moderate.....!"<<endl;
        }
        else
        {
            cout<<"The climate is cool.....!"<<endl;
            
        }
        
    }
    
};

int main()
{
    string name;
    string loc;
    //input from uset
    cout<<"Name:"<<" "<<endl;
    cin>>name;
    cout<<"Name of your location : "<<" "<<endl;
    cin>>loc;
    
    // object for class
    Weather w;
    while(1){
        
        int choice;
        cout<<"\t1.Day"<<endl;
        cout<<"\t2.Temperatue"<<endl;
        cout<<"\t3.Exit"<<endl;
        cin>>choice;
        //switch case
        switch(choice){
            case 1:
             w.report();
             break;
            case 2:
              w.climate();
              break;
            case 3:
               exit(1);
               break;
            default:
              cout<<"something went wrong....!"<<endl;
              break;
              
             
        }
    }

    return 0;
}

