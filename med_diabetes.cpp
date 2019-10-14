#include<bits/stdc++.h>
#include <fstream>
using namespace std;
class med_diabetes{
public:
    int n;
    int a1c,b_p,col,glu,d_y_s;
    void plan();
    void what_is_diabetes();
};
void display(int i,int j,int k,int q)
{
    if(i<120)
        {  system("cls");
                cout<<"                                            Holla!! \n";
                cout<<"                                       You Are Not Suffering\n";
                cout<<"                                            Diabetes\n";
                exit(0);
        }
    else if(i>=120)
        {       system("cls");
                string getcontent;
                cout<<"                                   You Are Suffering From DIABETES\n";
                if(120<=i&&i<180)
                {
                  cout<<"                                    You are on the Boderline!!\n";
                  cout<<"                                   Your Diet Chart is As Follows\n";
                  cout<<ifstream("diet_chart1.txt").rdbuf();
                }
                else if(180<i&&i<=280)
                {
                  cout<<"                                    Your Sugar Level is High!!\n";
                  cout<<"                                   Your Diet Chart is As Follows\n";
                  cout<<ifstream("diet_chart2.txt").rdbuf();
                }
                else if(280<i&&i<=315)
                {
                  cout<<"                                    You Sugar Level is Very High!!\n";
                  cout<<"                                    Your Diet Chart is As Follows\n";
                  cout<<ifstream("diet_chart3.txt").rdbuf();
                }
                else if(i>315)
                {
                  cout<<"                                              ALARMING!!\n";
                  cout<<"                                   Your Diet Chart is As Follows\n";
                  cout<<ifstream("diet_chart4.txt").rdbuf();
                  }
                }
        }
void med_diabetes::plan()
{
    cout<<"************1.A1C Test:";
    cin>>a1c;
    cout<<"************2.Blood Pressure:";
    cin>>b_p;
    cout<<"************3.Colestrol:";
    cin>>col;
    cout<<"************4.Do you smoke?:";
    cin>>d_y_s;
    system("cls");
    display(a1c,b_p,col,d_y_s);
}
void med_diabetes::what_is_diabetes()
{      system("cls");
      cout<<ifstream("about_diabetes.txt").rdbuf();
}
int main()
{
    med_diabetes md;
    cout<<"******************************************************************\n";
    cout<<"******************************************************************\n";
    cout<<"**************************Beat_Diabetes***************************\n";
    cout<<"******************************************************************\n";
    cout<<"******************************************************************\n";
    cout<<"               1.@About Diabetes\n";
    cout<<"               2.Diet Chart for Diabetes Patient\n";
    label:
    cin>>md.n;
    system("cls");
    switch(md.n)
    {
        case 1: md.what_is_diabetes();
                break;
        case 2: md.plan();
                break;
        default:cout<<"Please Select Correct Option:";
                goto label;
    }
}
