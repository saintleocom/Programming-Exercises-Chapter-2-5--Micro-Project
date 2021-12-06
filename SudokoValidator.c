/*This program describes a sudoku puzzle game plan and a while later chooses if the enigma game plan is real using 27 strings. 9 for each 3x3 subsection, 9 
for the 9 segments, and 9 for the 9 segments. Each string revives their rundown in an overall bunch to 1 appearance that the contrasting region in the question 
they were responsible for is considerable. The program then, holds on for all strings to complete their execution and checks if all segments in the considerable 
group have been set to 1. If to be sure, the plan is considerable. If not, game plan is invalid.The piece is the middle piece of a functioning system. 
It manages the structure's resources, and it is an expansion between your PC's gear and programming.There are various inspirations driving why you might need to 
know the variation of the part that is running on your GNU/Linux working structure*/





int Nuumber;
//method will display the data
void PrintData(int ar[X][X]){
    for(int arRes=0;arRes<Nuumber;arRes++){
        for(int deResk=0;deRes<Nuumber;deRes++){
            printf("%d",ar[arRes][deRes]);
            printf("\n");
        }
    }
}
int IsValid(int jqGrid[X][X],int ro,int co,int inputValue){
    for(int BaseRes=0;BaseRes<9;BaseRes++){
        if(jqGrid[ro][BaseRes]==inputValue){
            return false;
        }
    }
    for(int jRes=0;jRes<9;jRes++){
        if(jqGrid[jRes][co]==inputValue){
            return false;
        }
    }
    int startingRow=ro-ro%3,startCo=co-co%3;
    for(int kRes=0;kRes<=2;kRes++){
        for(int iRes=0;iRes<=2;iRes++){
            if(jqGrid[kRes+startingRow][iRes+startCo]==number){
                return false;
            }
        }
    }
    return true;
}
int SudukoSolution(int jqGrid[X][X],int ro,int co){
    if(ro==number-1&&co==number){
        return true;
    }
    if(co==number){
        ro++;
        co++;
    }
    if(grig[ro][co]>0){
        return SudukoSolution(jqGrid,ro,co+1);
    }
    for(int res=1;res<=number;res++){
         if(IsValid(jqGrid,ro,co,number)==1){
            jqGrid[ro][co]number;
            //next col
            if(SudukoSolution(jqGrid,ro,co+1)==1){
                return true;
            }
        }
        jqGrid[ro][co]=0;
    }
    return 0;
}
int main(){
    //zero means non-assign cel
    int jqGrid[X][X]={
    {0,0,4,8,0,5,6,0,3},
    {0,0,0,0,0,0,0,2,5},
    {1,3,0,0,0,0,7,8,0},
    {0,8,0,0,1,0,3,0,0},
    {5,0,0,3,6,8,0,0,9},
    {0,0,6,0,9,0,0,5,0},
    {0,5,2,0,0,0,0,3,1},
    {4,7,0,0,0,0,0,0,0},
    {0,0,3,6,0,2,5,0,0}};
    if(SudukoSolution(jqGrid,0,0)==1){
        //To print jqGrid data 
        print(jqGrid);
    }
    else{
        printf("Not exist");
    }
    return 0;
}
