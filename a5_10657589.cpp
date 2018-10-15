#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
     typedef struct {
                    int idNumber[5];
                    string name[5];
                    int age[5];
                    string gender[5];
                    int score[5];
                    string grade[5];
                    } student;

                  student student1;

                 int fend,i,j;
        cout<<"Hello!, provide any information you are asked to. "<<endl;

        for(i=0;i<5;i++){
           cout<<"Please enter your ID:" ;
            cin>>student1.idNumber[i];
             cout<<endl;
           cout<<"Please enter your name :";
           cin>>student1.name[i];
           cout<<endl;
           cout<<"Please enter your age :";
           cin>>student1.age[i];
           cout<<endl;
           cout<<"Gender"<<endl;
           cout<<"1. Male  \t\t 2.Female"<<endl;
          cin>>fend;
     if(fend==1){
      student1.gender[i]="Male";
       }
     else if (fend==2){
     student1.gender[i]="Female";
     }
     else{cout<<" Invalid info!"<<endl;
      }
        cout<<endl;
      cout<<"Please enter your score : ";
      cin>>student1.score[i];
     cout<<endl;
     switch(student1.score[i]){
            case 80 ... 100 :
                  student1.grade[i]="A";
                          break;
           case 70 ... 79:
             student1.grade[i]="B";
                  break;
          case 60 ... 69 :
              student1.grade[i]="C";
                    break;
          case 50 ... 59:
             student1.grade[i]="D";
             break;
        case 40 ... 49 :
              student1.grade[i]="E";
         break;
       case 0 ... 39 :
              student1.grade[i]="F";
                  break;
        default:
        cout<<"Ivalid score"<<endl;
        }
        }
        cout<<"ID NUMBER"<<setw(10)<<"NAME"<<setw(10)<<"AGE"<<setw(10)<<"GENDER"<<setw(10)<<"SCORE"<<setw(10)<<"GRADE"<<endl;
       cout<<endl;
     for(j=0;j<5;j++){
      cout<<student1.idNumber[j]<<setw(10)<<student1.name[j]<<setw(10)<<student1.age[j]<<setw(10)<< student1.gender[j]<<setw(10)<<student1.score[j]<<setw(10)<<student1.grade[j]<<endl;
     }
return 0;
}
