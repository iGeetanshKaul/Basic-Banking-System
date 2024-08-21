#include<stdio.h>
#include <criterion/criterion.h>

Test(add, firstAddTest){
    int result = add(3, 5);
    cr_assert(result == 8);
}