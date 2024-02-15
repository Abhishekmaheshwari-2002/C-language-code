#include <stdio.h>

struct worker

{
   int id;
   char firstletter;
   float tax;
   int salary;

};


int main()
{
  struct worker rahul ={1,'r',28.35,10000  };
  struct worker mohan = {2, 'm', 25.355, 25000};
  struct worker rohit = {3, 'r', 28.35, 2000};
  struct worker raju= {4, 'r', 10.35, 11000};

   printf(" worker rahul id no is %d \n first letter name of his name is %c\n sallary of rahul is %d \n tax is %f ",rahul.id,rahul.firstletter,rahul. salary,rahul.tax);
   printf(" worker mohan id no is %d \n first letter name of his name is %c\n sallary of mohan is %d \n tax is %f ", mohan.id, mohan.firstletter, mohan.salary, mohan.tax);
   printf(" worker rohit id no is %d \n first letter name of his rohitis %c\n sallary of rahul is %d \n tax is %f ", rohit.id, rohit.firstletter, rohit.salary, rohit.tax);
   printf(" worker raju id no is %d \n first letter name of his rajuis %c\n sallary of rahul is %d \n tax is %f ", raju.id, raju.firstletter, raju.salary, raju.tax);

   return 0;
}
