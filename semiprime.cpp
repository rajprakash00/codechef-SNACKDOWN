#include<bits/stdc++.h>

using namespace std;

int csp(int num)                          //code for semi-prime

{
    int cnt = 0;


    for (int i = 2; cnt < 2 && i * i <= num; ++i)

   while (num % i == 0)

        num /= i, ++cnt;

       if (num > 1)

        ++cnt;


  return cnt == 2;

}


int chk(int b)

{
    float a;

 a=sqrt(b);

 if(a==2.0)

       return 0;

   else if(a==3.0)

        return 0;

  else if(a==5.0)

        return 0;

  else if(a==7.0)

        return 0;

  else if(a==11.0)

        return 0;

  else if(a==13.0)

        return 0;

   else

        return 1;

}


int main()
{
	int t,n,a=1,b,x=0,j,k;

	cin>>t;

for(int i=0;i<t;i++)
{
       cin>>n;

	for(int i = 0; i < n/2; i++)

		{
	b=n-a;
                     if (csp(a)){

                                if(csp(b)){

                                           j=chk(a);

                                           k=chk(b);

                                           if(j==1 && k==1){

                                                        printf("YES\n");

                                                         x=1;

                                                         break;
                                                           }

                                           }

 				 }


                        a++;

		}

            if(x==0)
          {

           printf("NO\n");

          }

		a=1;

		x=0;

}


return 0;

}
