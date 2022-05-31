#include<iostream>
#include<string>
using namespace std;

int main()
{
    float CCPI;
    float Ccredits;
    int n;
    cout<<("Enter the current CPI(till last sem) \n");
    cin>>CCPI;
    printf("Enter the current Credits(till last sem) \n");
    cin>>Ccredits;
    cout<<("enter number of courses this sem \n");
    cin>>n;
    int i=0, credits[n], grade[n];
    string coursename[n];
    cout<<("Enter the course name, credits and grade point (eg. for AB, write 9) for")<<endl;
    cout<<("P.S. - DONT PUT ANY SPACES IN THE COURSENAME, YOU CAN USE UNDERSCORE(_) TO DISTINGUISH BW WORDS ")<<endl;
    for(i=0;i<n;i++)
    {
        cout<<("course ")<<i+1<<("\n");
        cout<<("coursename - ");
        cin>>coursename[i];
        cout<<("\n");
        cout<<("credits for this course - ");
        cin>>credits[i];
        cout<<("\n");
        cout<<("your grade for this course - ");
        cin>>grade[i];
        cout<<("\n");
    }
    for(i=0; i<n; i++)
    {
        cout<<coursename[i];
        cout<<("\t");
        cout<<credits[i];
        cout<<("\t");
        cout<<grade[i];
        cout<<("\n");
    }
    // COPIED STARTS HERE
    float NCPI;
    float Ncredits = 0;
    for(i=0; i<n; i++)
    {
        Ncredits = Ncredits + credits[i];
    }
    cout<<("new credits = ")<<Ncredits<<endl;
    float NSPI;
    float sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum + (credits[i]*grade[i]);
    }
    cout<<("sum is")<<sum;
    NSPI = (sum/Ncredits);
    NCPI = ((CCPI*Ccredits)+(sum))/(Ccredits+Ncredits);
    cout<<("\n")<<("Your SPI is :")<<NSPI;
    cout<<("\n")<<("Your CPI is :")<<NCPI;

}
