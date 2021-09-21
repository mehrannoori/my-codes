#include<cstdlib>
#include<iostream>
using namespace std;

struct Time {int yy; int mm; int dd; int h; int s;};

void comparsion(Time* DT_1, Time* DT_2)
{
    Time C;
    if(DT_1->yy > DT_2->yy)
    {
        C = *DT_1;
        *DT_1 = *DT_2;
        *DT_2 = C;
    }
    else if(DT_1->yy == DT_2->yy)
    {
        if(DT_1->mm > DT_2->mm)
        {
            C = *DT_1;
            *DT_1 = *DT_2;
            *DT_2 = C;
        }
        else if(DT_1->mm == DT_2->mm)
        {
            if(DT_1->dd > DT_2->dd)
            {
                C = *DT_1;
                *DT_1 = *DT_2;
                *DT_2 = C;
            }
            else if(DT_1->dd == DT_2->dd)
            {
                if(DT_1->h > DT_2->h)
                {
                    C = *DT_1;
                    *DT_1 = *DT_2;
                    *DT_2 = C;
                }
                else if(DT_1->h == DT_2->h)
                {
                    if(DT_1->s > DT_2->s)
                    {
                        C = *DT_1;
                        *DT_1 = *DT_2;
                        *DT_2 = C;
                    }
                    else{return;}
                }
                else{ return; }
            }
            else{ return; }
        }
        else{ return; }
    }
    else{ return; }
}

int main(){
    Time DT[10];
    for(int i=0; i<10; i++){
        // int randNum = rand()%(max-min + 1) + min;
        DT[i].yy = rand()%(2002-2000+1) + 2000;
        DT[i].mm = rand()%(12) + 1;
        DT[i].dd = rand()%(30) + 1;
        DT[i].h = rand()%(24+1);
        DT[i].s = rand()%(23+1);
    }
    
    // print dates before sorting
    cout << "\n\tDates befor sorting :\n";
    for(int i=0; i<10; i++){
        cout << "\t" << DT[i].yy << ", " << DT[i].mm << ", " << DT[i].dd << ", " << DT[i].h << ", " << DT[i].s << endl; 
    }

    //
    cout << "\n\tDates after sorting :\n";
    for(int i=0; i<10; i++){
        for(int j=0; j<i+1; j++){
            comparsion(&DT[i], &DT[j]);
        }
    }

    for(int i=0; i<10; i++){
        cout << "\t" << DT[i].yy << ", " << DT[i].mm << ", " << DT[i].dd << ", " << DT[i].h << ", " << DT[i].s << endl; 
    }cout << endl;
    
    return EXIT_SUCCESS;
}