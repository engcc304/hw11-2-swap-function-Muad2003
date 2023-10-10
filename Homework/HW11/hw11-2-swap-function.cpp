/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/

#include <stdio.h>

void swap ( int &A_Age  , int &B_Age ) { // การใส่ & ไว้เพื่อแปลงค่าจากฟังก์ชั่นไปหา main โดยตรง
    int temp = A_Age ;
    A_Age = B_Age ;
    B_Age = temp ;
} // end swap
int main() {
    
    int A_Age , B_Age ;
    char A_Name[ 100 ] , B_Name[ 100 ] ;

    printf ( "Input A\nName :\n" ) ;
    scanf ( "%s",&A_Name ) ;
    printf ( "Age :\n" ) ;
    scanf ( "%d", &A_Age ) ;

    printf ( "Input B\nName :\n" ) ;
    scanf ( "%s",&B_Name ) ;
    printf ( "Age :\n" ) ;
    scanf ( "%d", &B_Age ) ;

    printf ( "NAME: %s (%d)\n", A_Name , A_Age ) ;
    printf ( "NAME: %s (%d)\n", B_Name , B_Age ) ;

    printf ("\n** SWAP AGE **\n" ) ;
    swap( A_Age , B_Age ) ;
    printf ( "NAME: %s (%d)\n", A_Name , A_Age ) ;
    printf ( "NAME: %s (%d)\n", B_Name , B_Age ) ;
    
    
    return 0 ;
} // end main