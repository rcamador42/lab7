#include "RombergIntegration.h"
#include "RecursiveIntegration.h"
#include "QueueLinked.h"
#include "Double.h"
using CSC2110::Double;

#include <math.h>

//a is the lower limit and b is the upper limit
double RombergIntegration::accurateRomberg(MultiVarFunction* f, double a, double b, int level)
{
   Double* db;  //use this variable to place and retrieve values on the queue
   
   QueueLinked<Double>* q1 = QueueLinked<Double>::peek(a);
   QueueLinked<Double>* q2 = QueueLinked<Double>::peek(b);


   int counter = 0;
   int n = 1;  //current number of intervals
   while (counter =< level)
   {
      //DO THIS
      //obtain the required number of trapezoid evaluations depending on the number of levels requested
      //put all of the level 0 results on the q1

	 q1->enque









      n = 2*n;  //double the number of intervals
      counter++;
   }

   //q1 now has all of the level 0 integration results

   double factor;  //use this to compute the current Romberg Factor (4^k stuff)
   int power = 1;  //k, used to compute the Romberg Factor

   //if level 0 has been requested, the loop will not execute
   //the total number of executions of the loop is ??

   //DO THIS
   int iterations = 4               //can be precomputed
   while (iterations > 0)
   {
      //DO THIS
      //use the algorithm described in the lab to improve the accuracy of your level 0 results
	
	 Il = q1->dequeue();
	 Im = q1->peek();
	 
	 for(int i = 0; i < power; i++)
	  {
		factor = (4*factor);  
	  }  
	  
	  double answer = ((factor * Im) - Il) / (factor - 1)
	  
	  q2->enqueue(answer);

	  power++
      iterations--;
   }

   //obtain the final answer
   db = q1->dequeue();
   double result = db->getValue();  
   delete db;

   delete q1;
   delete q2;

   return result;
}
