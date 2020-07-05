 #include<iostream.h>
 #include<conio.h> 
         
  class sub
{
  int a,b,c;

 public:
   void get();
   void sub();
   void show();
};

   void sub::get()
{
   cout<<"Enter two int:";
   cin>>a>>b;
}
   void sub::sub()
{
   c=a-b;
}
   void sub::show()
{
   cout<<"Intgers are"<<a<<"and"<<b;
   cout<<"sub="<<c;
}

    int main()
 {
     sub S;
     clrscr();
     S.get();
     S.add();
     S.show();
     getch();
     return 0;
 }