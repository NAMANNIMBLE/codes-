 #include<iostream>
 using namespace std;

 int main ()
 {
   int n ;
   cout<<"enter the value of n :";
   cin>> n;

   int i = 2 ;

   while (i <= n-1 )
   {
      if (n % i == 0)
     cout<<"the number is not prime number"<<endl; 
      i++;
  }

  cout <<"the number is prime"<<endl;
  
  return 0;
}


