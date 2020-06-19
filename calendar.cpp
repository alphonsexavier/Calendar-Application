#include<iostream>
using namespace std;
struct node
{
    int date;
    string day,month;
    node *event;
    node *anniversary;
    node *birthday;
}*start;
class calendar
{
public:
    void create_list();
    void add_list();
    void display();
    void update();
    calendar()
    {
        start=NULL;
    }
};
void calendar::create_list()
{
    node *ptr=new node;
    ptr->date=0;
    ptr->day="NULL";
    ptr->month="NULL";
    ptr->event=NULL;
    ptr->anniversary=NULL;
    ptr->birthday=NULL;
    start=ptr;
}
void calendar::add_list()
{
    int choice,opt,date,cnt=0,flag=0,i;
    string day,month;
    node *temp=new node;
    node *ptr1;
    while(1)
    {
    cout<<"\nEnter the Date:";
    cin>>date;
    if(date>0&&date<32)
    {
        break;
    }
    else
    {
        cout<<"\n invalid";
    }
    }
    while(1)
    {
    cout<<"\nEnter the Month:";
    cin>>month;
    for(i=0;i<month.length();i++)
    {
        if(month[i]>=65&&month[i]<=90||month[i]>=97&&month[i]<=122)
        {
            flag=1;
        }
        else
        {
            flag=0;
            cout<<"\n Invalid";
            break;
        }
    }
    if(flag==1)
    {
        break;
    }
    }
     while(1)
    {
    cout<<"\nEnter the Day:";
    cin>>day;
    for(i=0;i<day.length();i++)
    {
        if(day[i]>=65&&day[i]<=90||day[i]>=97&&day[i]<=122)
        {
            flag=1;
        }
        else
        {
            flag=0;
            cout<<"\n Invalid";
            break;
        }
    }
    if(flag==1)
    {
        break;
    }
    }
    temp->date=date;
    temp->month=month;
    temp->day=day;
    temp->anniversary=NULL;
    temp->birthday=NULL;
    temp->event=NULL;
    ptr1=start;
    do
    {
        cout<<"\nTo create a Event press 1:";
        cout<<"\nTo create a Anniversary press 2:";
        cout<<"\nTo create a Birthday press 3:\n";
        cin>>opt;
        switch(opt)
        {
            case 1:ptr1=start;
                    while(ptr1->event!=NULL)
                    {
                        ptr1=ptr1->event;
                    }
                    ptr1->event=temp;
                    ++cnt;
                    break;
            case 2:ptr1=start;
                    while(ptr1->anniversary!=NULL)
                    {
                        ptr1=ptr1->anniversary;
                    }
                    ptr1->anniversary=temp;
                    ++cnt;
                    break;
           case 3:ptr1=start;
                    while(ptr1->birthday!=NULL)
                    {
                        ptr1=ptr1->birthday;
                    }
                    ptr1->birthday=temp;
                    ++cnt;
                    break;
        }
        if(cnt==3)
        {
            choice=0;
            break;
        }
        else
        {
        cout<<"\nPress 1 to continue or any other number to exit.";
        cin>>choice;
        }
    }while(choice==1);
}
void calendar::update()
{
    int choice,opt,date,cnt=0,flag=0,i;
    string day,month;
    node *temp=new node;
    node *ptr1;
    while(1)
    {
    cout<<"\nEnter the Date:";
    cin>>date;
    if(date>0&&date<32)
    {
        break;
    }
    else
    {
        cout<<"\n invalid";
    }
    }
    while(1)
    {
    cout<<"\nEnter the Month:";
    cin>>month;
    for(i=0;i<month.length();i++)
    {
        if(month[i]>=65&&month[i]<=90||month[i]>=97&&month[i]<=122)
        {
            flag=1;
        }
        else
        {
            flag=0;
            cout<<"\n Invalid";
            break;
        }
    }
    if(flag==1)
    {
        break;
    }
    }
     while(1)
    {
    cout<<"\nEnter the Day:";
    cin>>day;
    for(i=0;i<day.length();i++)
    {
        if(day[i]>=65&&day[i]<=90||day[i]>=97&&day[i]<=122)
        {
            flag=1;
        }
        else
        {
            flag=0;
            cout<<"\n Invalid";
            break;
        }
    }
    if(flag==1)
    {
        break;
    }
    }
    temp->date=date;
    temp->month=month;
    temp->day=day;
    temp->anniversary=NULL;
    temp->birthday=NULL;
    temp->event=NULL;
    ptr1=start;
    do
    {
        cout<<"\nTo create a Event press 1:";
        cout<<"\nTo create a Anniversary press 2:";
        cout<<"\nTo create a Birthday press 3:\n";
        cin>>opt;
        switch(opt)
        {
            case 1:ptr1=start;
                    while(ptr1->event!=NULL)
                    {
                        ptr1=ptr1->event;
                    }
                    ptr1->event=temp;
                    ++cnt;
                    break;
            case 2:ptr1=start;
                    while(ptr1->anniversary!=NULL)
                    {
                        ptr1=ptr1->anniversary;
                    }
                    ptr1->anniversary=temp;
                    ++cnt;
                    break;
           case 3:ptr1=start;
                    while(ptr1->birthday!=NULL)
                    {
                        ptr1=ptr1->birthday;
                    }
                    ptr1->birthday=temp;
                    ++cnt;
                    break;
        }
        if(cnt==3)
        {
            choice=0;
            break;
        }
        else
        {
        cout<<"\nPress 1 to continue or any other number to exit.";
        cin>>choice;
        }
    }while(choice==1);
}
void calendar::display()
{
    int check=0;
    node *ptr2;
    cout<<"\n************************************  \tEvents\t        *********************************";
    ptr2=start->event;
    while(ptr2!=NULL)
        {
            cout<<"\nDate:"<<ptr2->date<<"\tMonth:"<<ptr2->month<<"\tDay:"<<ptr2->day;
            ptr2=ptr2->event;
            ++check;
        }
        if(check==0)
            cout<<"\nNo Events";
    cout<<"\n************************************";
    cout<<"\tAnniversary\t*********************************";
    check=0;
    ptr2=start->anniversary;
    while(ptr2!=NULL)
        {
            cout<<"\nDate:"<<ptr2->date<<"\tMonth:"<<ptr2->month<<"\tDay:"<<ptr2->day;
            ptr2=ptr2->anniversary;
            ++check;
        }
        if(check==0)
            cout<<"\nNo Anniversary";
    cout<<"\n************************************  \tBirthdays\t*********************************";
    check=0;
    ptr2=start->birthday;
    while(ptr2!=NULL)
        {
            cout<<"\nDate:"<<ptr2->date<<"\tMonth:"<<ptr2->month<<"\tDay:"<<ptr2->day;
            ptr2=ptr2->birthday;
            ++check;
        }
        if(check==0)
            cout<<"\nNo Birthdays";
     cout<<"\n*****************************************************************************************";
}
int main()
{
    int i,n,option;
    calendar c;
    c.create_list();
    cout<<"\n\t\t\t\t\t\tCalendar Application";
    cout<<"\nEnter the Number of nodes to be created:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        c.add_list();
    }
    c.display();
    cout<<"\nDo you want to update the Calendar,Press 1 to continue or any other number to exit.";
    cin>>option;
    if(option==1)
    {
        cout<<"\nEnter the Number of nodes to be created:";
        cin>>n;
        for(i=0;i<n;i++)
        {
        c.update();
        }
        c.display();
    }
}
