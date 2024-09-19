//Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)
#include<iostream>
using namespace std;

class worker {
	

	
	
	private :
	 string  name;
    float hours,rate;
     int salary
	
		
		public :
			void get(string n,float h,float r,int s){
			    name=n;
				hours=h;
				rate=r;
				salary=s;	  
			
				
				
			}
	          void dispaly(){
	          	
	          		  cout<<"entre name of worker";
				  cin>>n;
				  cout<<"entre number of hours";
				  cin>>h;
				  cout<<"entre rate of pay";
				  cin>>r;
				  	
	          	
	          	
	          	
			  }
	
	      void salary(){
	      	
	      cout<<"salary of worker is"<<h*r;
	      	
	      	
		  }
	
	
	
	
	
};
int main(){
	worker ;
	worker.get(s);
	
return 0;	
}