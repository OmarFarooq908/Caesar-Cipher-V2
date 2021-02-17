#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string a,z;
    int d,e,f,g;

    cout<<" _______________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"| In the Name of Allah, the Most Gracious and the Most Merciful |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;
    cout<<"\n _______________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"|                Name    : Muhammad Omar Farooq                 |"<<endl;
    cout<<"|                Roll No :       20-CP-33                       |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;
    cout<<"\n________________________________________________________________"<<endl;
    cout<<"|                                                               |"<<endl;
    cout<<"|               Department of Computer Engineering              |"<<endl;
    cout<<"|          University of Engineering and Technology, Taxila     |"<<endl;
    cout<<"|_______________________________________________________________|"<<endl;

    cout<<"\n >> Message >> ";
    getline(cin,a);
    cout<<" >> Shift >> ";
    cin>>d;
    cout<<" >> Caesar Encryption >> ";
    if (d>26){
        d = d%26;
        if (d == 0){
            d = 26;
        }
    }
    f = a.length();
    g = f-1;
    for (int i=0; i<=g;i++){
        e = int(a[i])+d;
        if (((e-d)<=90&&e>=97&&e<=122)||((e-d)>=97&&(e-d)<=122&&e>=122)){
            e = e-26;
        }
        if (e>90&&e<97){
            e = e-26;
        }
        if (a[i]==32){
                e = int(a[i]);
        }
        cout<<char(e);
}
    cout<<"\n\n";
    system("pause");
    getch();

    return 0;
}
