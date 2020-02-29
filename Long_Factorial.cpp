#include<iostream>
#include<iomanip>
#define Max 10000
using namespace std;

class factoraial_data
{
    int main_num;
    int sum_num[Max]= { 0 };
public:
    inline void multiplication_Logic();
    inline void factoraial();
    inline void display_Factorial();
};

void factoraial_data::factoraial()
{
    cout<<"Enter the The Number To Find Factorial (5-Digits Only) : ";
    cin>>main_num;
    int temp=main_num;
    for(int i=Max-1; i>=Max-5; i--)
    {
        if(temp>0)
        {
            sum_num[i]=temp%10;
            temp=temp/10;
        }
    }
}

void factoraial_data::multiplication_Logic()
{
    cout<<endl;
    for(int i_num=main_num-1; i_num>0; i_num--)
    {
        for(int j_num=Max-1; j_num>=0; j_num--)
        {
            if(sum_num[j_num]>0)
               sum_num[j_num]=sum_num[j_num]*i_num;
        }
        for(int i=Max-1; i>=0; i--)
        {
            if(sum_num[i]!=0)
            {
                sum_num[i-1]=sum_num[i-1]+sum_num[i]/10;
                sum_num[i]=sum_num[i]%10;
            }
        }
    }
}

void factoraial_data::display_Factorial()
{
    cout<<"The Factorial of the number "<<main_num<<" is : ";
    int tmp=0;
    cout<<endl;
    for(int i=0; i<=Max-1; i++)
    {
        tmp++;
        if(sum_num[i]>0)
            break;
    }
    for(int j=tmp-1; j<=Max-1; j++)
    {
        cout<<sum_num[j];
    }
}

int main()
{
    factoraial_data fact_1;
    fact_1.factoraial();
    fact_1.multiplication_Logic();
    fact_1.display_Factorial();
    return 0;
}
