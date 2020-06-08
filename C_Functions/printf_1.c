/* https://www.dummies.com/programming/c/how-to-format-with-printf-in-c-programming/
 * you can use more than the basic %f conversion character to format floating-point values. In fact, here’s a great format you can use in the printf() function’s formatting text:
 * %w.pf
 */

#include <stdio.h>
int main() {
    /* formatting integer
     * %[width]d : if width=<[length of integer], width will be ignored, or simply width=[length of integer]
     * %[width]d : if width>[length of integer]
     *      if width>0, additional spaces will padded on the left
     *      if width<0, additional spaces will padded on the right
     */
    int anInt = 1234;
    printf("print positive Integer, padding on the left\n");
    printf("%%6d = %6d\n", anInt);
    printf("%%5d = %5d\n", anInt);
    printf("%%4d = %4d\n", anInt);
    printf("%%3d = %3d\n", anInt);
    printf("%%2d = %2d\n", anInt);
    printf("%%1d = %1d\n", anInt);
    printf("print positive Integer, padding on the right\n");
    printf("%%6d = %6d\n", anInt);
    printf("%%-6d = %-6d\n", anInt);
    printf("%%-5d = %-5d\n", anInt);
    printf("%%-4d = %-4d\n", anInt);
    printf("%%-3d = %-3d\n", anInt);
    printf("%%-2d = %-2d\n", anInt);
    printf("%%-1d = %-1d\n", anInt);

    anInt = -234;
    printf("print negative Integer, padding on the left\n");
    printf("%%6d = %6d\n", anInt);
    printf("%%5d = %5d\n", anInt);
    printf("%%4d = %4d\n", anInt);
    printf("%%3d = %3d\n", anInt);
    printf("%%2d = %2d\n", anInt);
    printf("%%1d = %1d\n", anInt);
    printf("print negative Integer, padding on the right\n");
    printf("%%6d = %6d\n", anInt);
    printf("%%-6d = %-6d\n", anInt);
    printf("%%-5d = %-5d\n", anInt);
    printf("%%-4d = %-4d\n", anInt);
    printf("%%-3d = %-3d\n", anInt);
    printf("%%-2d = %-2d\n", anInt);
    printf("%%-1d = %-1d\n", anInt);

    float sample1 = 34.5;
    float sample2 = 12.3456789;
    // padding space(s) on the left
    printf("%%9.1f = %9.1f\n",sample1);
    printf("%%8.1f = %8.1f\n",sample1);
    printf("%%7.1f = %7.1f\n",sample1);
    printf("%%6.1f = %6.1f\n",sample1);
    printf("%%5.1f = %5.1f\n",sample1);
    printf("%%4.1f = %4.1f\n",sample1);
    printf("%%3.1f = %3.1f\n",sample1);
    printf("%%2.1f = %2.1f\n",sample1);
    printf("%%1.1f = %1.1f\n",sample1);
    printf("%%9.1f = %9.1f\n",sample2);
    printf("%%9.2f = %9.2f\n",sample2);
    printf("%%9.3f = %9.3f\n",sample2);
    printf("%%9.4f = %9.4f\n",sample2);
    printf("%%9.5f = %9.5f\n",sample2);
    printf("%%9.6f = %9.6f\n",sample2);
    printf("%%9.7f = %9.7f\n",sample2);
    printf("%%9.6f = %9.6f\n",sample2);
    printf("%%9.7f = %9.7f\n",sample2);
    printf("%%9.8f = %9.8f\n",sample2);

    // padding space(s) on the right
    printf("%%9.1f = %-9.1f\n",sample1);
    printf("%%8.1f = %-8.1f\n",sample1);
    printf("%%7.1f = %-7.1f\n",sample1);
    printf("%%6.1f = %-6.1f\n",sample1);
    printf("%%5.1f = %-5.1f\n",sample1);
    printf("%%4.1f = %-4.1f\n",sample1);
    printf("%%3.1f = %-3.1f\n",sample1);
    printf("%%2.1f = %-2.1f\n",sample1);
    printf("%%1.1f = %-1.1f\n",sample1);
    printf("%%9.1f = %-9.1f\n",sample2);
    printf("%%9.2f = %-9.2f\n",sample2);
    printf("%%9.3f = %-9.3f\n",sample2);
    printf("%%9.4f = %-9.4f\n",sample2);
    printf("%%9.5f = %-9.5f\n",sample2);
    printf("%%9.6f = %-9.6f\n",sample2);
    printf("%%9.7f = %-9.7f\n",sample2);
    printf("%%9.6f = %-9.6f\n",sample2);
    printf("%%9.7f = %-9.7f\n",sample2);
    printf("%%9.8f = %-9.8f\n",sample2);
    // padding space(s) on the left
    printf("%%15s = %15s\n","hello");
    printf("%%14s = %14s\n","hello");
    printf("%%13s = %13s\n","hello");
    printf("%%12s = %12s\n","hello");
    printf("%%11s = %11s\n","hello");
    printf("%%10s = %10s\n","hello");
    printf(" %%9s = %9s\n","hello");
    printf(" %%8s = %8s\n","hello");
    printf(" %%7s = %7s\n","hello");
    printf(" %%6s = %6s\n","hello");
    printf(" %%5s = %5s\n","hello");
    printf(" %%4s = %4s\n","hello");

    printf("%9s men\n","meet");
    printf("%8s men\n","meet");
    printf("%7s men\n","meet");
    printf("%6s men\n","meet");
    printf("%5s men\n","meet");
    printf("%4s men\n","meet");
    printf("%3s men\n","meet");
    printf("%2s men\n","meet");
    printf("%1s men\n","meet");

    // padding space(s) on the right
    printf("%%15s = %-15s\n","hello");
    printf("%%14s = %-14s\n","hello");
    printf("%%13s = %-13s\n","hello");
    printf("%%12s = %-12s\n","hello");
    printf("%%11s = %-11s\n","hello");
    printf("%%10s = %-10s\n","hello");
    printf(" %%9s = %-9s\n","hello");
    printf(" %%8s = %-8s\n","hello");
    printf(" %%7s = %-7s\n","hello");
    printf(" %%6s = %-6s\n","hello");
    printf(" %%5s = %-5s\n","hello");
    printf(" %%4s = %-4s\n","hello");
    
    printf("%-9s men\n","meet");
    printf("%-8s men\n","meet");
    printf("%-7s men\n","meet");
    printf("%-6s men\n","meet");
    printf("%-5s men\n","meet");
    printf("%-4s men\n","meet");
    printf("%-3s men\n","meet");
    printf("%-2s men\n","meet");
    printf("%-1s men\n","meet");

    return(0);
}