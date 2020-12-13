/*
    Matrix Calculator Version 1.0

    source by com.adygreg
    [12:12:2020]
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int meMax (int a, int b) {

    int max = (a>b) ? a:b;
    return max;

}

char *strtolwr (char word[15]) {

    for(int i=0; i<15; i++) {

        if(word[i]=='\n')
            break;

        if(word[i]>='A' && word[i]<='Z')
            word[i] += 32;

    }

    return word;

}

struct matrix {

    int m;
    int n;

} one, two;

struct matrixConstruct {

    int mat[MAX][MAX];

} first, second;

void construction (void) {

    printf("Lets Construct the Matrix\n");

    int i, j;

    printf("Matrix One\n");
    for(i=0; i<one.m; i++)
        for(j=0; j<one.n; j++) {

            printf("A%d%d :: ", i+1, j+1);
            scanf("%d", &first.mat[i][j]);

        }

    printf("Matrix Two\n");
    for(i=0; i<two.m; i++)
        for(j=0; j<two.n; j++) {

            printf("B%d%d :: ", i+1, j+1);
            scanf("%d", &second.mat[i][j]);

        }
}

void additionMAT (void);
void subtractionMAT (void);
int multiplicationMAT (void);

void calc_Redirect (int o) {

    construction();

    switch (o) {

        case 1:
            additionMAT();
            break;
        
        case 2:
            subtractionMAT();
            break;

        case 3:
            multiplicationMAT();
            break;

        default:
            printf("<< Run this Program Again >>");
            break;

    }

}


int main (void) {

    char entry[10], oper[15], bool;

    y:
        printf("Enter the size of matrix in this form [m x n]\n");
    
    printf("Matrix 1 :: ");
    gets(entry);
    sscanf(entry, "%d x %d", &one.m, &one.n);
    printf("Matrix 2 :: ");
    gets(entry);
    sscanf(entry, "%d x %d", &two.m, &two.n);

    printf("Which one would you like ?\n");
    printf("1) Addition         2) Subtraction\n3) Multiplication   more coming soon....");

    operation:
        printf("\n>> ");
        gets(oper);

    int o=0;
    if(strcmp(strtolwr(oper), "addition")==0)
        o = 1;
    else if(strcmp(strtolwr(oper), "subtraction")==0)
        o = 2;
    else if(strcmp(strtolwr(oper), "multiplication")==0)
        o = 3;
    else {

        printf("Spelling Mistake, try again :)");
        goto operation;

    }

    if(o==3)
        if(one.n!=two.m) {

            printf("Not Possible (%d x= %d)\n", one.n, two.m);
            goto signout;

        }

    calc_Redirect(o);

    signout:
        printf("Do you wanna try again [y/N] ?\n>> ");
        scanf("%c", &bool);
            
        if(bool=='y' || bool=='Y')
            goto y;

    
    printf("\nThank for Using :)");

    return 0;

}

void additionMAT (void) {

    int m=meMax(one.m, two.m), n=meMax(one.n, two.n); 

    int sum[m][n];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            sum[i][j] = first.mat[i][j] + second.mat[i][j];

    for(int i=0; i<m; i++) {

        for(int j=0; j<n; j++)
            printf("%d ", first.mat[i][j]);
        
        if((m/2)==i)
            printf(" +  ");
        else
            printf("    ");    

        for(int j=0; j<n; j++)
            printf("%d ", second.mat[i][j]);

        if((m/2)==i)
            printf(" =  ");
        else
            printf("    ");
        
        for(int j=0; j<n; j++)
            printf("%d ", sum[i][j]);

        printf("\n");

    }

}

void subtractionMAT (void) {

    int m=meMax(one.m, two.m), n=meMax(one.n, two.n); 

    int dif[m][n];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            dif[i][j] = first.mat[i][j] - second.mat[i][j];

    for(int i=0; i<m; i++) {

        for(int j=0; j<n; j++)
            printf("%d ", first.mat[i][j]);
        
        if((m/2)==i)
            printf(" -  ");
        else
            printf("    ");    

        for(int j=0; j<n; j++)
            printf("%d ", second.mat[i][j]);

        if((m/2)==i)
            printf(" =  ");
        else
            printf("    ");
        
        for(int j=0; j<n; j++)
            printf("%d ", dif[i][j]);

        printf("\n");

    }

}

int multiplicationMAT (void) {

    int m=meMax(one.m, two.m), n=meMax(one.n, two.n); 

    int pro[one.m][two.n];

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            pro[i][j] = 0;

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            for (int k=0; k<n; k++)
                pro[i][j] += first.mat[i][k] * second.mat[k][j];
    
    for(int i=0; i<m; i++) {

        for(int j=0; j<n; j++)
            printf("%d ", first.mat[i][j]);
        
        if((m/2)==i)
            printf(" x  ");
        else
            printf("    ");    

        for(int j=0; j<n; j++)
            printf("%d ", second.mat[i][j]);

        if((m/2)==i)
            printf(" =  ");
        else
            printf("    ");
        
        for(int j=0; j<n; j++)
            printf("%d ", pro[i][j]);

        printf("\n");

    }

    return 0;

}
