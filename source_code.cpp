#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
#include <sstream>  // for string streams 
#include <string>  // for string 

using namespace std;

int countDigit(long long n)           //counting digits of a number 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 

int main()
{
	unsigned int input1 , input2;
	int digits[100];
	//taking inputw
	cout<<"ANY OF THE NUMBER CAN BE MAX UPTO 4 DIGIT OF ACCURATE RESULT\n\n\n";
	
	cout<<"enter the first no - ";
	cin>>input1;
	cout<<"\nenter the second no - ";
	cin>>input2;
	system("cls");
	
//extracting digits of input 2 	
				unsigned int temp,num,factor=1;
				
				num = input2;
				temp=input2;
				int i =0;
				while(temp)
				{
				    temp=temp/10;
				    factor = factor*10;
				}
				while(factor>1)
				{
					factor = factor/10;
				    digits[i] = num/factor;
				    num = num % factor;
				    i++;
				}
		  		int n=i;
				  
				  	
cout<<right<<setw(50)<<setfill(' ')<<input1<<endl;     //outputting input1
    	
		//converting input 2 to string to add "X" in front 
		ostringstream str2; 
      	str2 << input2; 
   		string s3 = "X" ;
    	s3 = s3 + str2.str();            
    	
    	
cout<<right<<setw(50)<<setfill(' ')<<s3<<endl;       //outputting input2
  
  
			  //counting digits for priting the line 
			  int count1,count2,count;
			  count1 = countDigit(input1);
			  count2 = countDigit(input2);
			  if(count2>=count1)
			  {
			  	count = count2;
			  }
			  else
			  {
			  	count = count1;
			  }
			  
		//printing the line 	  
		  string s5 = "";
		  for(int j=1;j<=count+3;j++)
		  {
		  	s5 = s5 + "-";
		  }
		  cout<<right<<setw(50)<<setfill(' ')<<s5<<endl;
		  

	//printing the multiplication the invidual digits of input 2 with the input 1		  
			  string s = "";
			  for(i=0;i<n;i++)
			  {
			  	unsigned int ans=0;
			  	ans = input1 * digits[i];
			  	ostringstream str1; 
			  
			    str1 << ans; 
			  
			    string s1 = str1.str();
			    string s2;
			    s2 = s1 + s;
			  	cout<<right<<setw(50)<<setfill(' ')<<s2<<endl;
			  	s = s + "X";
			  	
			  }
 
 
 //couting the final answer digits for outputting the ending line
  count1 = countDigit(input1*input2);
  string s6 = "";
  for(int j=1;j<=count1+3;j++)
  {
  	s6 = s6 + "-";
  }
  
  
  
    cout<<right<<setw(50)<<setfill(' ')<<s6<<endl;                  //printing line
	cout<<right<<setw(50)<<setfill(' ')<<input1*input2<<endl;		//printing final ans
	cout<<right<<setw(50)<<setfill(' ')<<s6<<endl; 					//printing line
  getch();
  return 0;
  
}
