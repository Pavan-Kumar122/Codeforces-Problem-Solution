#include<bits/stdc++.h>
using namespace std;
long long n;
int distinct_count(long long int n){

    int arr[10] = {0};
    int count = 0;
    int i = 0;
    while (n)
    {
        arr[i = n%10] = 1;
        n /= 10;
    }

    for (int  j = 0; j < 10; j++)
    {
        if(arr[j]) count++;
    }
    
    return count;
}

int digit_count(long long int n){

    int count =  0;
    while (n)
    {
        count++;
        n /= 10;

    }
    
    return count;
}

int main(){
	cin>>n;
    while (n < INT_MAX)
    {
        int get_distinct_count = distinct_count(n+1);
        int get_digit_count = digit_count(n+1);

        if(get_distinct_count == get_digit_count) {cout<<n+1; break;}
        else n++;
        
    }
    
    
    return 0 ;
}