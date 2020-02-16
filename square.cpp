 #include<bits/stdc++.h>
 
using namespace std;

bool square(int n)
 {
   for (int i=1; i<=n; i++)
    {
      if ((n%i==0) && (n/i ==i)) 
	  {
         return true;
      }
   }
   return false;
}


int main()
 {
   int n;
   cin>>n;
   if(square(n))
   {
      cout << "perfect square "<<n<<endl;
   }
    else
    {
      cout<<"not square"<<endl;
   }
}
 
