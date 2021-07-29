/*"Singing Champs" is a famous reality series. The show organizers have planned to roll out the show’s 5th season in the coming month. The auditions for the show is announced at various Cities widely and the organizers have inaugurated the first audition today.
 
Large mass of people gathered at the venue. Based on the selection procedure for the first level, all the people are made to stand in a queue. Participants who are standing in the even positions of the queue are selected initially. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person.
 
To help them in the selection procedure, the organizers approached you to write a recursive function for determining the position of that final person in the original queue.*/

#include<stdio.h>
int findPos(int n)
{
	if (n==1)
		return 1;
	else
		return 2*findPos(n/2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",findPos(n));
	return 0;
}

