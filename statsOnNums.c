#include <stdio.h>
#include <stdlib.h>

void stats(double *nums, int n, double *min, double *max, double *avg) {
  *min = *max = nums[0];
  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (nums[i] < *min){*min = nums[i];}
    else if (nums[i] > *max){*max = nums[i];};
  sum += nums[i];
  };
  *avg = sum / n;
};

int main(int argc, char *argv[]){
  //Print help \/ 
  if (argc < 2) {printf("This is displays the statistics of an array of numbers. Type in the command ./stats [numbers] to get the max, the min, the avg, and the amount of nums.");};
  
  if (argc >= 1){
  int n = argc -1; //Count number of arguments
  double nums[n];

  for (int i = 0; i < n; i++){
   nums[i] = atof(argv[i + 1]);
  };
  double max, min, avg;
  stats(nums, n, &min, &max, &avg);
       printf("min: %.2f\n", min);
       printf("max: %.2f\n", max);
       printf("avg: %.2f\n", avg);

 };
};
