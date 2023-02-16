#include<iostream>
  using namespace std;

int main()
{
  
int n, k, i;
  
cin >> n ;
 cin >> k;
  
int a[n];
  
int count = 0;
  
for (i = 0; i < n; i++)
    {
      
cin >> a[i];
    
}
  
for (i = 0; i < n; i++)
    {
      
for (int j = i + 1; j < n; j++)
    {
      
if ((a[i] + a[j]) % k == 0)
        {
          
count++;
        }
    
}
    
}
  
cout << count;
  
return 0;

}
