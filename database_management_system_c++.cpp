#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<bits/stdc++.h>
#include<sys/stat.h>
#include<stdio.h>
#include<cstdio>


using namespace std;


int design();
int adminlogin();
int userlogin();
int creataccount();
int login();
int detailsuserlogin();
int supload();
int showdetails();
int deletedetails();
int adminview();
int main();
int cafu();
int sr();
int ur();
int dr();
int df();
int delay();
int drawing();


int drawing()
{


     cout<<"\n                        ======================";
     cout<<"\n                        !                    !";
     cout<<"\n                        !  DATA              !";
     cout<<"\n                        !    BASE            !";
     cout<<"\n                        !       MANAGEMENT   !";
     cout<<"\n                        !            SYSTEM..!";
     cout<<"\n      ____________      !                    !      _____________";
     cout<<"\n      |          |____  !                    !  ____|           |";
     cout<<"\n      |  ====[]  |    | ====================== |    |  ====[]   |";
     cout<<"\n      |__________|    |         |    |         |    |___________|";
     cout<<"\n                      |         |    |         |";
     cout<<"\n      ____________    |         |    |         |    _____________";
     cout<<"\n      |          |____|_________|____|_________|____|           |";
     cout<<"\n      |  ====[]  |    |________________________|    |  ====[]   |";
     cout<<"\n      |__________|    |                        |    |___________|";
     cout<<"\n                      |                        |";
     cout<<"\n      ____________    |                        |    _____________";
     cout<<"\n      |          |____|                        |____|           |";
     cout<<"\n      |  ====[]  |                                  |  ====[]   |";
     cout<<"\n      |__________|                                  |___________|";
     cout<<"\n                                                                 ";
     cout<<"\n                                                        -By NIX  \n\n";




}



int delay()
{

     for(int i = 0;i<2;i++)
     {

          cout<<"\nSaving Records...";

          for(int ii = 0;ii<20000;ii++)
          {

               for(int iii=0;iii<20000;iii++)
               {


               }

          }

     }

     cout<<"\nExiting Now...";

     for(int i =0;i<2;i++)
     {

          for(int ii = 0;ii<20000;ii++)
          {

               for(int iii = 0;iii<20000;iii++)
               {

               }

          }

     }

}



int design()
{
    int ascii = 178;
     char ch = ascii;

     for(int i =0;i<= 25;i++)
         cout<<ch;
}




int adminlogin()
{
     cout<<"\n\n";

     design();
     cout<<"______ADMIN LOGIN______";
     design();

     string username,password;



     cout<<"\n\nEnter your username -> ";
     cin>>username;
     cout<<"\n\nEnter your password -> ";
     cin>>password;

     if(username=="admin" && password == "queendevil" )
     {
           cout<<"\n\n                          LOGIN SUCCESSFULLY";
           adminview();

     }

     else
     {
          cout<<"\n\ninvalid username and password";

     }
}



int userlogin()
{
     int ul;
     cout<<"\n\n";
     design();
     cout<<"____user login____";
     design();
     cout<<"\n\n                              1.CREAT ACCOUNT ";
     cout<<"\n\n                              2.LOG IN ";
     cout<<"\n\n                              3.BACK     ";
     cout<<"\n\n                              0.EXIT ";

     cout<<"\n\nEnter your option -> ";
     cin>>ul;

     switch(ul)
     {
          case 1:
             creataccount();
             break;

         case 2:
             login();
             break;

         case 3:
              main();
              break;

         case 0:
              delay();
              break;



     }
}



int creataccount()
{
     string id,password;
     int yn;

     cout<<"\n";
     design();
     cout<<"____CREAT ACCOUNT____";
     design();

     cout<<"\n\nEnter your ID -> ";
     cin>>id;

     cout<<"\nEnter the password -> " ;
     cin>>password;

     ofstream myfile;
     myfile.open(id+password+".txt");
     myfile<<"\n\n----------------personal details---------------";
     myfile.close();



     cout<<"\n\n                ACCOUNT CREATED SUCCESSFULLY.......";


     cout<<"\n\n";
     design();
     cout<<"______OPTIONS______";
     design();


     cout<<"\n\nIF YOU WANT TO LOGIN ?";
     cout<<"\n\n 1.YES";
     cout<<"\n\n 2.No AND EXIT";
     cout<<"\n\n 3.BACK";
     cout<<"\n\nEnter your option -> ";
     cin>>yn;

     switch(yn)
     {
          case 1:
               login();
               break;

          case 2:
               delay();
               break;

          case 3:
               userlogin();
               break;
     }


}



int login()
{
     string id,password,ur_name,ur_pass;

     cout<<"\n\n";
     design();
     cout<<"_____LOG IN_____";
     design();

     cout<<"\n\nEnter your ID -> ";
     cin>>id;

     cout<<"\n\nEnter password -> ";
     cin>>password;

     ifstream myfile;
     myfile.open(id+password+".txt");



      if(myfile)
     {

          cout<<"\n                       LOGIN SUCCESSFULLY.......";
          supload();


     }

     else if(ur_name != id && ur_pass != password)
     {
           cout<<"invalid username and password";
     }


}



int detailsuserlogin()
{
     cout<<"\n\n";
     design();
     cout<<"_____DETAILS______";
     design();



     cout<<"\n\nEnter your details.......";

     int sd;

     string blank_,name,phone,mail,father,mother,fatheroccupation,motheroccupation,annualincome,address,district,pincode,bloodgroup,addardno,state,password,id,line;


     cout<<"\n\nEnter your ID -> ";
     cin>>id;

     cout<<"\n\nEnter password -> ";
     cin>>password;


     ifstream myfile(id+password+".txt");
     if(myfile.is_open())
     {

        ofstream myfile;
        myfile.open(id+password+".txt",ios::app);





     cout<<"fill the deails";
     getline(cin,blank_);


     cout<<"\n\nEnter your name -> ";
     getline(cin,name);

     cout<<"\n\nEnter yout phone number -> ";
     getline(cin,phone);

     cout<<"\n\nEnter your mail id -> ";
     getline(cin,mail);

     cout<<"\n\nEnter your Father name -> ";
     getline(cin,father);

     cout<<"\n\nEnter your Mother name -> ";
     getline(cin,mother);

     cout<<"\n\nEnter your address -> ";
     getline(cin,address);

     cout<<"\n\nEnter your district -> ";
     getline(cin,district);

     cout<<"\n\nEnter your pin code -> ";
     getline(cin,pincode);

     cout<<"\n\nEnter your state -> ";
     getline(cin,state);

     cout<<"\n\nEnter father occupuation -> ";
     getline(cin,fatheroccupation);

     cout<<"\n\nEnter mother occupuation -> ";
     getline(cin,motheroccupation);

     cout<<"\n\nEnter Annual income -> ";
     getline(cin,annualincome);

     cout<<"\n\nEnter your blood group -> ";
     getline(cin,bloodgroup);

     cout<<"\n\nEnter your addard number -> ";
     getline(cin,addardno);

     line = "--------------------------------------------------------";

     myfile<<"\nNAME                :"<<name<<endl<<"PHONE NUMBER        :"<<phone<<endl<<"E-MAIL              :"<<mail<<endl<<"FATHER NAME         :"<<father<<endl<<"MOTHER NAME         :"<<mother<<endl<<"ADDRESS             :"<<address<<endl<<"DISTRIC             :"<<district<<endl<<"PIN CODE            :"<<pincode<<endl<<"STATE               :"<<state<<endl<<"FATHER OCCUPATION   :"<<fatheroccupation<<endl<<"MOTHER OCCUPATION   :"<<motheroccupation<<endl<<"ANNUAL INCOME       :"<<annualincome<<endl<<"BLOOD GROUP         :"<<bloodgroup<<endl<<"ADDHAR NUMBER       :"<<addardno<<endl<<"\n\n"<<line;
     myfile.close();


     cout<<"\n                       UPLOAD SUCCESSFULLY....";



     cout<<"\n\n";
     design();
     cout<<"____OPTION____";
     design();

     cout<<"\n\n IF YOU WANT TO SHOW YOUR DETAILS.....";

     cout<<"\n\n1.YES";
     cout<<"\n\n2.NO and Exit";
     cout<<"\n\n3.BACK";

     cout<<"\n\nPRESS 1 TO SHOW DETAILS -> ";
     cin>>sd;

     switch(sd)
     {
          case 1:
               showdetails();
               break;

          case 2:
               delay();
               break;

          case 3:
               supload();
               break;


     }


     }

     else
     {

          cout<<"\n\nINVALID ID AND PASSWORD..........................";

     }



}



int supload()
{
     int ls;
     cout<<"\n\n";
     design();
     cout<<"____UPLOAD DETAILS____";
     design();


     cout<<"\n\n1.upload detils";
     cout<<"\n\n2.show deatils";
     cout<<"\n\n3.delete details";
     cout<<"\n\n4.BACK";
     cout<<"\n\n5.EXIT";

     cout<<"\n\nEnter your option -> ";
     cin>>ls;

     switch(ls)
     {
         case 1:
             detailsuserlogin( );
             break;


         case 2:
             showdetails();
             break;

         case 3:
             deletedetails();
             break;

         case 4:
              login();
              break;

         case 5:
              delay();

          }


}



int showdetails()
{

      cout<<"\n\n";
      design();
      cout<<"____SHOW DETAILS____";
      design();

      string srg,id,password;

      cout<<"\n\nEnter your ID -> ";
      cin>>id;

      cout<<"\n\nEnter password -> ";
      cin>>password;


      ifstream filestream(id+password+".txt");
      if(filestream.is_open())
      {
           while(getline(filestream,srg))
           {
                cout<<srg<<endl;

           }
           filestream.close();

      }

      else
      {

           cout<<"INVALID USERNAME AND PASSWORD";

      }

}



int deletedetails()
{

      cout<<"\n\n";
      design();
      cout<<"____DELETE_DETAILS____";
      design();

      string id,password;
      int dd;

      cout<<"\n\nEnter your ID -> ";
      cin>>id;

      cout<<"\n\nEnter password -> ";
      cin>>password;

      cout<<"\n\nARE YOU SURE WANT TO DELETE....";
      cout<<"\n\n1.YES";
      cout<<"\n\n2.NO";

      cout<<"\n\nPRESS 1 to delete -> ";
      cin>>dd;

      switch(dd)
      {
           case 1:

                ifstream filestream(id+password+".txt");
                if(filestream.is_open())
                {

                ofstream filestream(id+password+".txt",std::ofstream::out|std::ofstream::trunc);
                ofstream close();

                cout<<"\n\n             DELETED SUCCESSFULLY......";

                }

                else
                {
                     cout<<"\n\nINVALID ID AND PASSWORD";


                }

                break;
      }

}



int adminview()
{

     cout<<"\n\n";
     design();
     cout<<"____ADMIN PAGE____";
     design();

     int av;

     cout<<"\n\n                         1.CREAT ACCOUNT FOR USER";
     cout<<"\n\n                         2.SEARCH RECORD";
     cout<<"\n\n                         3.UPDATE RECORD";
     cout<<"\n\n                         4.DELETE RECORD";
     cout<<"\n\n                         5.DELETE FILE";
     cout<<"\n\n                         6.EXIT";


     cout<<"\n\nEnter your option -> ";
     cin>>av;

     switch(av)
     {

          case 1:
               cafu();
               break;


          case 2:
               sr();
               break;

          case 3:
               ur();
               break;

          case 4:
               dr();
               break;

          case 5:
               df();
               break;

          case 6:
               delay();
               break;
     }



}



int cafu()
{

     creataccount();


}




int sr()
{

      cout<<"\n\n";
      design();
      cout<<"____SEARCH RESULT____";
      design();

      string id,password;
      int ys;

      cout<<"\n\nEnter your ID -> ";
      cin>>id;

      cout<<"\n\nEnter password -> ";
      cin>>password;

      ifstream myfile;

      myfile.open(id+password+".txt");

      if(myfile)
      {
           cout<<"\n\n                      FILE EXISTS.......";

           cout<<"\n\n";
           design();
           cout<<"______OPTIONS______";
           design();

           cout<<"\n\nIF YOU WANT TO SEE...";
           cout<<"\n\n1.YES";
           cout<<"\n\n2.NO AND EXIT";
           cout<<"\n\n3.BACK";

           cout<<"\n\nEnter your option -> ";
           cin>>ys;

           switch(ys)

           {
                case 1:
                     showdetails();
                     break;

                case 2:
                     delay();
                     break;

                case 3:
                     adminview();
                     break;

           }

      }

      else
      {

           cout<<"         FILE NOT EXITTS............";

      }



}


int ur()
{

     cout<<"\n\n";
     design();
     cout<<"_____UPDATE______";
     design();



     cout<<"\n\nEnter your details.......";

     int sd;

      int date,month,year,nod,nodp,bs,allow,pf,total,op;
      string id,password,line_,title;

     cout<<"\n\nEnter your ID -> ";
     cin>>id;

     cout<<"\n\nEnter password -> ";
     cin>>password;


     ifstream myfile(id+password+".txt");
     if(myfile.is_open())
     {

        ofstream myfile;
        myfile.open(id+password+".txt",ios::app);


        title = "\n\n --------PAY SLIP----------";


        cout<<"\n\nDATE -> ";
        cin>>date;

        cout<<"\n\nMONTH -> ";
        cin>>month;

        cout<<"\n\nYEAR -> ";
        cin>>year;

        cout<<"\n\nTOTAL WORKING DAYS -> ";
        cin>>nod;

        cout<<"\n\nNO.OF DAYS PRESENT -> ";
        cin>>nodp;


        bs = 500*nodp;


        cout<<"\n\nEnter basic salary -> "<<bs;


        cout<<"\n\nALLOWANCE -> ";
        cin>>allow;

        pf = 0.12*bs;

        cout<<"\n\nPF -> "<<pf;

        total = bs+allow;

        cout<<"\n\nTOTAL -> "<<total;


        myfile<<"\n"<<title<<endl<<"\n\nDATE                     :"<<date<<endl<<"MONTH                    :"<<month<<endl<<"YEAR                     :"<<year<<endl<<"TOTAL WORKING DAYS       :"<<nod<<endl<<"NUMBER OF DAYS PRESENT   :"<<nodp<<endl<<"BASIC SALARY             :"<<bs<<endl<<"ALLOWANCE                :"<<allow<<endl<<"PF                       :"<<pf<<endl<<"------------------------------------"<<endl<<"TOTAL                    :"<<total<<endl<<"\n------------------------------------"<<endl;

        myfile.close();


        cout<<"\n                       UPLOAD SUCCESSFULLY....";


        cout<<"\n\n";
        design();
        cout<<"______OPTIONS______";
        design();

        cout<<"\n\nIF YOU WANT TO SEE UPDATED DETAILS";
        cout<<"\n\n1.YES";
        cout<<"\n\n2.NO AND EXIT";
        cout<<"\n\n3.BACK";

        cout<<"Enter your option -> ";
        cin>>op;

        switch(op)
        {

             case 1:
                  sr();
                  break;

             case 2:
                  delay();
                  break;

             case 3:
                  adminview();
                  break;



        }


        }

        else
        {
             cout<<"\n\nINVALID USERNAME AND PASSWORD...................";

        }





}


int dr()
{

       deletedetails();


}


int df()
{

      int status,op;
      char filename[20] ;

      cout<<"Enter the file name :";
      cin>>filename;

      status = remove(filename);

      if(status == 0)
      {

           cout<<"\nfile delete success";

           cout<<"\n\n";
           design();
           cout<<"______OPTIONS______";
           design();

           cout<<"\n\nGO BACK TO ADMIN PAGE";

           cout<<"\n\n1.BACK";
           cout<<"\n\n2.NO AND EXIT";

           cout<<"Enter your option";
           cin>>op;


           switch(op)
           {

                case 1:
                     adminview();
                     break;

                case 2:
                     delay();
                     break;
           }

      }

      else
      {

           cout<<"error occurs";

      }

      cout<<endl;
      return 0;




}



int main()
{

     drawing();

     design();


     cout<<" DATA BASE MANAGEMENT SYSTEM ";

     design();

     int first;

     cout<<"\n\n                                1.ADMIN LOGIN                  ";
     cout<<"\n\n                                2.USER  LOGIN                 ";
     cout<<"\n\n                                0.EXIT                ";


     cout<<"\n\nEnter your option -> ";
     cin>>first;

     switch(first)
     {
          case 1:
            adminlogin();
            break;

          case 2:
            userlogin();
            break;

          case 0:
              delay();
              break;


     }



}
