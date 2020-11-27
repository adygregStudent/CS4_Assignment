/*
    Write a C program to check whether a number is Armstrong number or not.

    source by com.adygreg
    [25:11:2020]

*/

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    return 1;

}

int armstrongChecker (int n) {

    int flag = 0, temp = n, size = 0, result = 0, remain = 0;

    while (temp != 0) {

        size++;
        temp /= 10;

    }

    temp = n;

    while (temp != 0) {
        
        remain = temp%10;
        result += power(remain, size);
        temp /= 10;

    }
    
    

    if (n == result)
        flag = 1;

    return flag;

}

int main (void) {

    int num;
    
    printf("Enter :: ");
    scanf("%d", &num);

    if (armstrongChecker(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;

}
