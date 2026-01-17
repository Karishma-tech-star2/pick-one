#include<iostream>
#include <algorithm> 
#include <cstdlib>
 using namespace std;
  int main ()
   {
    string c;
    cout<<"<--This is game only for choose favourite Dish -->";
    cout<<"\n\nIn the game pick the one dish \n\n\n";
    cout<<"\nChole Bhature And Burger\n\n"; 
    cout<<"\nWhat you favourite dish in this first pick one than write  your favourite \n\n";

    getline(cin,c);//cholebhature
    transform(c.begin(), c.end(), c.begin(), ::tolower); 

    if(c=="chole bhature")
      {
        cout<<"\nNow, \n you pick one in this Chole bhature and noodles\n";
        getline(cin,c);
         transform(c.begin(), c.end(), c.begin(), ::tolower); 

         if( c=="chole bhature")
          {
           cout<<"\nNow, \n you pick one in this Chole bhature and pizza\n";
           getline(cin,c);
           transform(c.begin(), c.end(), c.begin(), ::tolower); 
         
           if(c=="chole bhature")
            {
               cout<<"\nNow, \n you pick one in this Chole bhature and Golgappe\n";
               getline(cin,c);
               transform(c.begin(), c.end(), c.begin(), ::tolower); 
         
               if(c=="chole bhature")
                  {
                     cout<<"The finally is your favourite item is CholleBhature\n";
                     exit(0);
                  } 
               else if(c=="golgappe"|| c=="Golgappe")
                            {
                                cout<<"The finally is your favourite item is Golgappe"; 
                                exit(0);
                            }
            } 
        
          else if(c=="pizza")
                    {
                     cout<<"\nNow, \n you pick one in this pizza and Golgappe\n";
                     getline(cin,c);
                     transform(c.begin(), c.end(), c.begin(), ::tolower);

                           if(c=="pizza")
                            {
                                cout<<"The finally is your favourite item is pizza ";
                                exit(0);
                            }  
                            else if(c=="golgappe")
                            {
                                cout<<"The finally is your favourite item is Golgappe"; 
                                exit(0);
                            } 
                    }             
            }

       else if(c=="noodles")//noodle
          {
            cout<<"\nNow, \n you pick one in this noodles and pizza\n";
            getline(cin,c);
            transform(c.begin(), c.end(), c.begin(), ::tolower);

                   if(c=="noodles")
                    {
                      cout<<"\nNow, \n you pick one in this noodles and golgappe\n";
                      getline(cin,c);
                      transform(c.begin(), c.end(), c.begin(), ::tolower);

                       if(c=="noodles")
                       {
                          cout<<"The finally is your favourite item is Noodles ";
                          exit(0);
                       }  
                       else if(c=="golgappe")
                            {
                                cout<<"The finally is your favourite item is Golgappe"; 
                                exit(0);
                            }
                     }  
                    
                   else if(c=="pizza")
                    {

                          cout<<"\nNow, \n you pick one in this pizza and Golgappe\n";
                          getline(cin,c);
                          transform(c.begin(), c.end(), c.begin(), ::tolower);

                           if(c=="pizza")
                            {
                                cout<<"The finally is your favourite item is pizza ";
                                exit(0);
                            }  
                           else if(c=="golgappe")
                            {
                                cout<<"The finally is your favourite item is Golgappe"; 
                                exit(0);
                            }                       
                    }  
                }    
           }   

     else if( c=="burger")
      {
        cout<<"\nNow, \nyou pick one in this Burger and noodles\n";
        getline(cin,c);
        transform(c.begin(), c.end(), c.begin(), ::tolower);

        if(c=="burger")
          {
           cout<<"\nNow, \n you pick one in this Burger and pizza\n";
           getline(cin,c);
           transform(c.begin(), c.end(), c.begin(), ::tolower);

           if(c=="burger")
            {
             cout<<"\nNow, \n you pick one in this Burger and golgappe\n";
             getline(cin,c);
              if(c=="burger")
               {
                 cout<<"The finally is your favourite item is Burger";
                 exit(0); 
               }
              else if(c=="golgappe")
               {
                 cout<<"The finally is your favourite item is Golgappe"; 
                 exit(0); 
               }   
            }  
         
           else if(c=="pizza")
            {
               cout<<"\nNow, \n you pick one in this pizza And golgappe\n";
               getline(cin,c);
               transform(c.begin(), c.end(), c.begin(), ::tolower);

                 if(c=="pizza")
                    {
                        cout<<"The finally is your favourite item is pizza ";
                        exit(0);
                    }   
                  else if(c=="golgappe")
                    {
                       cout<<"The finally is your favourite item is Golgappe"; 
                        exit(0);
                    }   
              }   
          }
        
        else if(c=="noodles")//noodle
          {
                   cout<<"\nNow, \n you pick one in this noodles and pizza\n";
                   getline(cin,c);
                   transform(c.begin(), c.end(), c.begin(), ::tolower);

                   if( c=="noodles")
                    {
                      cout<<"\nNow, \n you pick one in this noodles and golgappe\n";
                      getline(cin,c);
                      transform(c.begin(), c.end(), c.begin(), ::tolower);

                      if(c=="noodles")
                       {
                         cout<<"The finally is your favourite item is Noodles ";
                         exit(0);
                       }  
                      else if(c=="golgappe")
                       {
                         cout<<"The finally is your favourite item is Golgappe"; 
                         exit(0);
                       }
                    }

                   else if(c == "pizza" )
                    {
                        cout<<"\nNow, \n you pick one in this pizza and Golgappe\n";
                        getline(cin,c);
                        transform(c.begin(), c.end(), c.begin(), ::tolower);

                        if(c == "pizza" )
                         {
                           cout<<"The finally is your favourite item is pizza ";
                           exit(0);
                         }

                        else if(c=="golgappe")
                         {
                           cout<<"The finally is your favourite item is Golgappe"; 
                           exit(0);
                         }   
                    }  
                 }
          }    
       
    return 0;  
   }