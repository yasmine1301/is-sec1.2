
#include <iostream>
#include <fstream>
#include<string>

using namespace std;
 
int main()
{ 
   fstream file;
   file.open("sample.txt",ios::out);
   
   if(!file)
   {
       cout<<"Error in creating file!!!"<<endl;
       return 0;
   }
    
   cout<<"File created successfully."<<endl;
   file<<"ABCD";
   file.close();
   file.open("sample.txt",ios::in);
    
   if(!file)
   {
       cout<<"Error in opening file!!!"<<endl;
       return 0;
   }   
   string ch; 
   cout<<"File content: ";
    
   while(!file.eof())
   {
       file>>ch;
       cout<<ch;
   }
    
   file.close(); //close file
    
   return 0;
}	 

