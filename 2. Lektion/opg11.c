/* OPGAVEN
The Pythagorean theorem states that the sum of the squares of the sides of a right triangle is equal to the square of the hypotenuse.
For example, if two sides of a right triangle have lengths of 3 and 4, then the hypotenuse must have a length of 5. Together the integers 3, 4, and 5 form a Pythagorean triple.
There are an infinite number of such triples. Given two positive integers, m and n, where m > n, a Pythagorean triple can be generated by the following formulas:
 
    side1=m^2-n^2
    side2=2mn
    hypotenuse=m^2+n^2

The triple (side1 = 3, side2 = 4, and hypotenuse = 5) is generated by this for-mula when m = 2 and n = 1.
Write a program that takes values for m and n as input and displays the values of the Pythagorean triple generated by the formulas above.
*/

#include<stdio.h>

int main (void) {
    int m, n;
    printf("Input 2 integers, m and n, where m > n: ");
    scanf("%d %d", &m, &n);

    const int s1 = m*m - n*n;
    const int s2 = 2 * m * n;
    const int hyp = m*m + n*n;
    printf("\ns1 = %d, s2 = %d and hyp = %d", s1, s2, hyp);

    return 0;
}