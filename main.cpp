#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{

int a,b,c,d,e,f,g,h,ID;
   cout<<endl;
   system("cls");
   line:
   cout<<"\t\t\t**********WELCOME TO VARENDRA UNIVERSITY LIBRARY**********"<<endl;
   cout<<endl;
   cout<<"1. COMPUTER SCIENCE AND ENGINEERING\n2. ELECTRICAL AND ELECTRONIC ENGINEERING\n3. PHARMACY\n4. BUSINESS ADMINISTRATION\n5. ENGLISH\n6. LAW\n7. OTHER\n"<<endl;
   cout<<"CHOOSE YOUR DEPARTMENT: "<<endl;
   cin>>a;
   system("cls");
   cout<<endl;
   cout<<endl;

       if(a==1)
       {
        cout<<"\t\t***WELCOME TO COMPUTER SCIENCE AND ENGINEERING DEPARTMENT LIBRARY***"<<endl;
        cout<<endl;
        cout<<"1.  C\n2.  OBJECT ORIENTED PROGRAMMING WITH C++\n3.  DATA STRUCTURE SYSTEM\n4.  SOFTWARE ENGINEERING\n5.  COMPUTER FUNDAMENTAL\n6.  DIGITAL LOGIC DESIGN\n7.  COMPUTER ARCHITECTURE\n8.  COMPUTER GRAPHICS DESIGN\n9.  DISCREATE MATHEMATICS AND IT'S APPLICATIONS\n10. DIFFERENTIAL EQUATION AND SPECIAL FUNCTION\n11. ELECTRICAL CIRCUITS\n12. CO ORDINATE GEOMETRY\n13. DIFFERENTIAL AND INTEGRAL CALCULUS\n"<<endl;
        cout<<"Please Tell,Which Book Do You Need?"<<endl;
        cin>>b;
        system("cls");
   {
      ofstream o;
            o.open("123.txt",ios::app);
        if(b==1)
            {cout<<"You want to take C BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"C"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;
            }

        else if(b==2)
        {cout<<"You want to take OBJECT ORIENTED PROGRAMMING WITH C++ BOOK\n\nplease,confirm your ID no. to get your book\n";cin>>ID;

            o<<"C++"<<endl;
        cout<<"Thank you,your book is confirm"<<endl;
        }
        else if(b==3)
            {cout<<"You want to take DATA STRUCTURE SYSTEM BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"DATA STRUCTURE SYSTEM"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;
            }
           else  if(b==4)
            {
            cout<<"You want to take SOFTWARE ENGINEERING BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"software engineering"<<endl;

            cout<<"Thank you,your book is confirm"<<endl;
            }
            else if(b==5)
            {cout<<"You want to take COMPUTER FUNDAMENTAL BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"COMPUTER FUNDAMENTAL"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;
            }
            else if(b==6)
            {cout<<"You want to take DIGITAL LOGIC DESIGN BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"DIGITAL LOGIC DESIGN"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==7)
            {cout<<"You want to take COMPUTER ARCHITECTURE BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"COMPUTER ARCHITECTURE"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==8)
            {cout<<"You want to take COMPUTER GRAPHICS DESIGN BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"COMPUTER GRAPHICS DESIGN"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==9)
            {cout<<"You want to take DISCREATE MATHEMATICS AND IT'S APPLICATIONS BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"DISCREATE MATHEMATICS"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==10)
            {cout<<"You want to take DIFFERENTIAL EQUATION AND SPECIAL FUNCTION BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"DIFFERENTIAL EQUATION AND SPECIAL FUNCTION"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==11)
            {cout<<"You want to take ELECTRICAL CIRCUITS BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"ELECTRICAL CIRCUITS"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==12)
            {cout<<"You want to take  CO ORDINATE GEOMETRY BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"CO ORDINATE GEOMETRY"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else if(b==13)
            {cout<<"You want to take  DIFFERENTIAL AND INTEGRAL CALCULUS BOOK\n\nplease,confirm your ID no. to get your book\n"<<endl;cin>>ID;
            o<<"DIFFERENTIAL AND INTEGRAL CALCULUS"<<endl;
            cout<<"Thank you,your book is confirm"<<endl;}
            else
            {cout<<"sorry to say that books are not available.....\n\nthanks for visit our website"<<endl;
            o<<"not available"<<endl;}
            o.close();


   }

}
       else if(a==2)
       {
        cout<<"\t\t***WELCOME TO ELECTRICAL AND ELECTRONIC ENGINEERING DEPARTMENT LIBRARY***"<<endl;
        cout<<endl;
        cout<<"1. ELOCTRONIC DEVIESES AND CIRCUITS\n2. ELECTRONIC PRINCIPAL\n3. Data Structure System\n4. NETWORK LINES AND FIELDS\n5. Computer Fundamental \n6. DIGITAL LOGIC DESIGN\n7. COMPUTER ARCHITECTURE\n8. COMPUTER GRAPHICS DESIGN\n"<<endl;
        cout<<"please,tell which book do you need?"<<endl;
        cin>>c;
        system("cls");
        cout<<endl;
        {
            ofstream o;
            o.open("123.txt",ios::app);

            if(c==1)
              {
            cout<<"you want to take ELOCTRONIC DEVIESES AND CIRCUITS\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"ELECTRONIC DEVICES AND CIRCUITS"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
        else if(c==2)
            {cout<<"you want to take ELECTRONIC PRINCIPAL\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"ELECTRONIC PRINCIPAL"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==3)
            {cout<<"you want to take Data Structure System\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Data Structure System"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==4)
            {cout<<"you want to take NETWORK LINES AND FIELDS\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"NETWORK LINES AND FIELDS"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==5)
           {cout<<"you want to take Computer Fundamental\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           o<<"Computer Fundamental"<<endl;
           cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==6)
            {cout<<"you want to take DIGITAL LOGIC DESIGN\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"DIGITAL LOGIC DESIGN"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==7)
            {cout<<"you want to take COMPUTER ARCHITECTURE\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"COMPUTER ARCHITECTURE"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(c==8)
            {cout<<"you want to take COMPUTER GRAPHICS DESIGN\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"COMPUTER GRAPHICS DESIGN"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
           else
             {cout<<"this book are not available at that moment......thanks"<<endl;
             o<<"not available"<<endl;}
             o.close();

       }
       }

       else if(a==3)
       {
           cout<<endl;
           cout<<"\t\t\t***WELCOME TO PHARMACY DEPARTMENT LIBRARY***"<<endl;
           cout<<endl;
           cout<<"1. Organic Chemistry\n2. Human Phisiology\n3. Microbiology \n4. Pharmaceutical Chemistry\n5. Essential Of Physical Chemistry \n6. Chemistry Fundamental\n7. Medical Physiology\n8. Inorganic Chemistry\n"<<endl;
    cout<<"Which book you want to take : "<<endl;
    cin>>d;
    system("cls");
    cout<<endl;
    {
        fstream o;
        o.open("123.txt",ios::app);
        if(d==1)
              {
            cout<<"you want to take Organic Chemistry\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Organic Chemistry"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
        else if(d==2)
            {cout<<"you want to take Human Physiology \n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Human Physiology"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==3)
            {cout<<"you want to take Microbiology\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Microbiology"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==4)
            {cout<<"you want to take Pharmaceutical Chemistry\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Pharmaceutical Chemistry"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==5)
           {cout<<"you want to take Essential Of Physical Chemistry\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           o<<"Physical Chemistry"<<endl;
           cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==6)
            {cout<<"you want to take chemistry fundamental\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"chemistry fundamental"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==7)
            {cout<<"you want to take medical physiology\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"medical physiology"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(d==8)
            {cout<<"you want to take inorganic chemistry\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"inorganic chemistry"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
           else
             {cout<<"this book are not available at that moment......thanks"<<endl;
             o<<"NOT AVAILABLE"<<endl;
             }
             o.close();

    }
       }
       else if(a==4)
       {
           cout<<endl;
           cout<<"\t\t\t***WELCOME TO BBA DEPARTMENT LIBRARY***"<<endl;
           cout<<endl;
           cout<<"1. Effective Training\n2. International Business\n3. International Management\n4. Cost Accounting\n5. Principles of Marketing\n6. Marketing Research\n7. Micro Economics\n8. Management\n"<<endl;
           cout<<"Which book you want to take : "<<endl;
           cin>>e;
           system("cls");
           cout<<endl;
           {
               ofstream o;
              o.open("123.txt",ios::app);
                if(e==1)
              {
            cout<<"you want to take Effective Training\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Effective Training"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
        else if(e==2)
            {cout<<"you want to take International Business \n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"International Business"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==3)
            {cout<<"you want to take International Management\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"International Management"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==4)
            {cout<<"you want to take Cost Accounting\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Cost Accounting"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==5)
           {cout<<"you want to take Principles of Marketing\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==6)
            {cout<<"you want to take Marketing Research\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Marketing Research"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==7)
            {cout<<"you want to take Micro Economics\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Micro Economics"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(e==8)
            {cout<<"you want to take Management\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"Management"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
           else
             {cout<<"this book are not available at that moment......thanks"<<endl;
             o<<"NOT AVAILABLE"<<endl;
             }
             o.close();

           }

       }
       else if(a==5)
       {
           cout<<endl;
           cout<<"\t\t\t***WELCOME TO ENGLISH DEPARTMENT LIBRARY***"<<endl;
           cout<<endl;
           cout<<"1. POETRY VI\n2. POETRY VII\n3. PROSE(NON FICTION-FICTION)\n4. READING SKILL\n5. WRITING SKILL\n"<<endl;
           cout<<"Which book you want to take : "<<endl;
           cin>>f;
           system("cls");
           cout<<endl;

{
              ofstream o;
              o.open("123.txt",ios::app);
         if(f==1)
              {
            cout<<"you want to take POETRY VI\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"POETRY VI"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
        else if(f==2)
            {cout<<"you want to take POETRY VII\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"POETRY VII"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(f==3)
            {cout<<"you want to take PROSE(NON FICTION-FICTION)\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"PROSE(NON FICTION-FICTION)"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(f==4)
            {cout<<"you want to take READING SKILL\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"READING SKILL"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(f==5)
           {cout<<"you want to take WRITING SKILL\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           o<<"WRITING SKILL"<<endl;
           cout<<"your book is confirm.....\nthank you"<<endl;}
           else
             {cout<<"this book are not available at that moment......thanks"<<endl;
             o<<"NOT AVAILABLE"<<endl;}
             o.close();

}
       }

       else if(a==6)
       {
           cout<<endl;
           cout<<"\t\t\t***WELCOME TO LAW DEPARTMENT LIBRARY***"<<endl;
           cout<<endl;
           cout<<"1. CIVIL PROCEDURE CODE 1908\n2. CRIMINAL PROCEDURE CODE 1898\n3. PENAL CODE 1860\n4. TESTIMONY LAW 1872\n5. LAW OF LIMITATION 1908\n"<<endl;
           cout<<"Which book you want to take : "<<endl;
           cin>>g;
           system("cls");
           cout<<endl;
           {
               ofstream o;
              o.open("123.txt",ios::app);
              if(g==1)
              {
            cout<<"you want to take CIVIL PROCEDURE CODE 1908\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"CIVIL PROCEDURE CODE 1908"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}

        else if(g==2)
            {cout<<"you want to take CRIMINAL PROCEDURE CODE 1898\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"CRIMINAL PROCEDURE CODE 1898"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(g==3)
            {cout<<"you want to take PENAL CODE 1860\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"PENAL CODE 1860"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(g==4)
            {cout<<"you want to take TESTIMONY LAW 1872\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"TESTIMONY LAW 1872"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(g==5)
           {cout<<"you want to take LAW OF LIMITATION 1908\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           o<<"LAW OF LIMITATION 1908"<<endl;
           cout<<"your book is confirm.....\nthank you"<<endl;}
           else

       {cout<<"this book are not available at that moment......thanks"<<endl;
       o<<"NOT AVAILABLE"<<endl;}
       o.close();


           }
       }

       else if(a==7)
       {
           cout<<endl;
           cout<<"\t\t\t***WELCOME FOR FINDING OTHER BOOK***"<<endl;
           cout<<endl;
           cout<<"1. GOLPO SHOMOGRO\n2. CURRENT WORLD\n3. LIFE WITHOUT LIMBS\n4. ENGLISH LEARNING BOOKS\n5. ADVANCE LEARNERS\n"<<endl;
           cout<<"Which book you want to take : "<<endl;
           cin>>h;
           system("cls");
           cout<<endl;
           {
               ofstream o;
              o.open("123.txt",ios::app);
              if(h==1)
              {
            cout<<"you want to take GOLPO SHOMOGRO\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"GOLPO SHOMOGRO"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(h==2)
            {cout<<"you want to take CURRENT WORLD\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"CURRENT WORLD"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(h==3)
            {cout<<"you want to take LIFE WITHOUT LIMBS\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"LIFE WITHOUT LIMBS"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(h==4)
            {cout<<"you want to take ENGLISH LEARNING BOOKS\n\nplease,confirm your ID number to get your book\n"<<endl;
            cin>>ID;
            o<<"ENGLISH LEARNING BOOKS"<<endl;
            cout<<"your book is confirm.....\nthank you"<<endl;}
            else if(h==5)
           {cout<<"you want to take ADVANCE LEARNERS\n\nplease,confirm your ID number to get your book\n"<<endl;
           cin>>ID;
           o<<"ADVANCE LEARNERS"<<endl;
           cout<<"your book is confirm.....\nthank you"<<endl;}
           else

       {cout<<"this book are not available at that moment......thanks"<<endl;
       o<<"NOT AVAILABLE"<<endl;}
       o.close();
           }
       }
       system("cls");
       char choise;
       cout<<"Do you want to continue yes/no?\n\nif yes press y or press n for no...\n\nthanks"<<endl;
       cin>>choise;
       system("cls");
       if(choise=='y')
       goto line;
       else


    return 0;

}
