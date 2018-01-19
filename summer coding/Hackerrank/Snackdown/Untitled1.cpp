#include<iostream>

using namespace std;
int main()
{
 long t=0;
 cin>>t;
 for(long n=1;n<=t;n++)
 {
    for(long k=1;k<=t;k++)
       {
        long a[8];
        for(int i=0;i<8;i++)
            cin>>a[i];



           if((a[0]!=a[2])&&(a[1]!=a[3]))
           {
               cout<<"no"<<endl;break;
           }
           else if((a[4]!=a[6])&&(a[5]!=a[7]))
           {
               cout<<"no"<<endl;break;
           }
           else
           {
               if((a[0]==a[2]&&a[1]==a[3])&&(a[4]==a[6]&&a[5]==a[7]))
               {
               	
                   if(a[0]==a[4]&&a[1]==a[5])
                   {
                       cout<<"yes"<<endl;break;
                   }
                   else
                   {
                       cout<<"no"<<endl;break;
                   }

               }
               else
               {
                   if(a[0]==a[2]&&a[1]==a[3])
                   {
                       if((a[4]==a[6])&&(a[6]==a[0]))
                       {
                           if(a[5]<a[7])
                           {
                               if(a[1]>=a[5]&&a[1]<=a[7])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[5]>a[7])
                           {
                               if(a[1]<=a[5]&&a[1]>=a[7])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }

                       }
                       else if((a[5]==a[7])&&(a[7]==a[1]))
                       {
                           if(a[4]<a[6])
                           {
                               if(a[0]>=a[4]&&a[0]<=a[6])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[4]>a[6])
                           {
                               if(a[0]<=a[4]&&a[0]>=a[6])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }

                       }
                       else
                       {
                           cout<<"no"<<endl;break;


                       }


                   }
                   else if(a[4]==a[6]&&a[5]==a[7])
                   {
                       if((a[0]==a[2])&&(a[2]==a[4]))
                       {
                           if(a[1]<a[3])
                           {
                               if(a[5]>=a[1]&&a[5]<=a[3])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[1]>a[3])
                           {
                               if(a[5]<=a[1]&&a[5]>=a[3])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }

                       }
                       else if((a[1]==a[3])&&(a[3]==a[5]))
                       {
                           if(a[0]<a[2])
                           {
                               if(a[4]>=a[0]&&a[4]<=a[2])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[0]>a[2])
                           {
                               if(a[4]<=a[0]&&a[4]>=a[2])
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }

                       }
                       else
                       {
                           cout<<"no"<<endl;break;

                       }

                   }
                   else
                   {
                       if((a[0]==a[2]&&a[5]==a[7])||(a[4]==a[6]&&a[1]==a[3]))
                       {
                           if((a[0]==a[4]&&a[1]==a[5])||(a[0]==a[6]&&a[1]==a[7])||(a[2]==a[4]&&a[3]==a[5])||(a[2]==a[6]&&a[3]==a[7]))
                           {
                               cout<<"yes"<<endl;break;

                           }
                           else
                           {
                               cout<<"no"<<endl;break;

                           }

                       }
                       else if(a[0]==a[2]==a[4]==a[6])
                       {
                           if(a[1]<a[3])
                           {
                               if((a[5]>=a[1]&&a[5]<=a[3])||(a[7]>=a[1]&&a[7]<=a[3]))
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[1]>a[3])
                           {
                               if((a[5]<=a[1]&&a[5]>=a[3])||(a[7]<=a[1]&&a[7]>=a[3]))
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }


                       }
                       else if(a[1]==a[3]==a[5]==a[7])
                       {
                           if(a[0]<a[2])
                           {
                               if((a[4]>=a[0]&&a[4]<=a[2])||(a[6]>=a[0]&&a[6]<=a[2]))
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }
                           else if(a[0]>a[2])
                           {
                               if((a[4]<=a[0]&&a[4]>=a[2])||(a[6]<=a[0]&&a[6]>=a[2]))
                               {
                                   cout<<"yes"<<endl;break;

                               }
                               else
                               {
                                   cout<<"no"<<endl;break;

                               }

                           }


                       }

                       else
                       {
                           cout<<"no"<<endl;break;

                       }
                   }



               }
           }

       }
 }
 return 0;
}



