#include <stdio.h>
int main()
{
  int students = 3, subject = 5;

  int arr[3][5];
  for (int i = 0; i < students; i++)
  {
    for (int j = 0; j < subject; j++)
    {
      printf("the marks of the sudent %d subject %d \n", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
    
  }
  for (int i = 0; i < students; i++)
  {
    for (int j = 0; j < subject; j++)
    {
      printf("the marks of the sudent %d on subject %d is: %d\n", i + 1, i + 1, arr[i][j]);
      
    }
    
  }
  return 0;
}
