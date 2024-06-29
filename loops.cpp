#include<iostream>
using namespace std;

int main(){
//display table of 19
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"19x"<<i<<"="<<19*i<<endl;
    }


//dispaly ap-1,3,5,7,9 ... n terms
    for(int i=4;i<=3*n+1;i+=3){
        cout<<i<<"  ";
    }
//method -2
    int a=4;
    for(int j=1;j<=n;j++){
        cout<<a<<"  ";
        a+=3;
    }

//display gp -1,2,4,8,16....n terms
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<"  ";
        a*=4;
    }


//wap tofind highest factor of a number in 'n'
    int f=1;
    for(int i=1;i<n;i++){
        if(n%i==0)f=i;
    }
    cout<<f;

//method 2

    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i;
            break;
        }
    }

//wap to check if a number is a composite or not

    for(int i=2;i=n/2;i++){
        if(n%i==0){
            cout<<"composite";
            break;
        }else{
            cout<<"prime";
            break;
        }
    }

//prime number or not
    bool flag=true;//true means prime hai
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1){
        cout<<"neither prime nor composite";
    }
    else if(flag==true){
        cout<<"prime";
    }else{
        cout<<"composite";
    }


//skip 3 and 8 using continue

    for(int i=1;i<n;i++){
        if(i==3) continue;
        if(i==8) continue;
        cout<<i<<" ";
    }

// print odd number using continue

    for(int i=1;i<=n;i++){

        if(i%2==0)continue;
        else cout<<i<<endl;

    }


//while loop
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }


//do-while
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while (i<=10);


//count digit of given number

    int count=0;
    while(n!=0){
        n=n/10;
        count++;

    }
    cout<<count;


//sum of n digit

    int sum=0;
    int ld;
    while (n!=0)
     {
        /* code */
        ld=n%10;
        sum+=ld;
        n=n/10;

     }
    cout<<sum;



//sum of even digit

   int digit,sum=0;

   while(n!=0){
    digit=n%10;
    if(digit%2==0){
        sum+=digit;

    }
    n/=10;
   }
   cout<<sum;



//reverse the given number
    int rev=0;
    int temp=n;
    while(n!=0){
        int ld=n%10;
        rev*=10;
        rev+=ld;
        n=n/10;
    }
    cout<<rev<<endl;
//sum of reverse and given number
    int sum_reverse=temp+rev;
    cout<<sum_reverse;


//factorial of given number

    int prod=1;
    for(int i=1;i<=n;i++){
        prod*=i;

        cout<<prod<<endl;
    }


//ascii value and its 26 alphabets
    int i=65;
    char ch;
    while(i<=n){
        ch=(char)i;
        cout<<i<<" "<<ch<<endl;
        i++;
    }


}