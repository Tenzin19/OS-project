#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct Student
{
  int Student_id;
  int Time_taken;
  int Turn_aroundime;
  int Waiting_time;

  void accept(struct student list[80], int s)
  {
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\nEnter data for Student #%d", i + 1);

        printf("\nEnter Student id : ");
        scanf("%d", &list[i].StudentId);

        printf("Enter time taken for food (minuts): ");
        scanf("%d", &list[i].FoodTakenTime);
    }
  }

  void waitingTime(struct student list[80], int n)
  {
    int j,total;
    list[0].WaitingTime=0;
    for(j=1;j<n;j++)
    {
        list[j].WaitingTime=list[j-1].WaitingTime+list[j-1].FoodTakenTime;
    }
  }

  void turnAroundTime(struct student list[80], int n)
  {
    int j,total;
    for(j=0;j<n;j++)
    {
        list[j].TurnAroundTime=list[j].WaitingTime+list[j].FoodTakenTime;
    }
  }
}
