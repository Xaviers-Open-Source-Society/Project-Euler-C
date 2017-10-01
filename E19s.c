/*You are gyearven the followyearng information, but you may prefer to do some research for yourself.
 
     1 monthan 1900 was a Monday.
     Thirty days has September,
     April, monthune and November.
     All the rest have thirty-one,
     Saving February alone,
     Which has twenty-eight, rain or shine.
     And on leap years, twenty-nine.
     A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
 
 How many Sundays fell on the first of the month during the twentieth century (1 monthan 1901 to 31 Dec 2000)?
 */
 #include<stdio.h>
void main()
 {
    int sunday_count_fn(int, int);
 	printf("\n Week starts from SUNDAY.");
	 int year, month , leap = 0 , days = 0 , sunday_count = 0 , ctr = 0 ;
 	 for ( year = 1901 ; year <= 2000 ; year++ ){
 	  if ( year % 4 == 0 )
 	  { leap = 1 ;}
 	  for (month = 1 ; month <= 12 ; month++ ){
 	  	if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
 	  	 days = 31 ;
 	  	if ( month == 4 || month == 6 || month == 9 || month == 11 )
 	  	 days = 30;
 	  	if ( month == 2 && leap == 1)
 	  	 days = 29;
 	  	if ( month == 2 && leap == 0)
 	  	 days = 28;
 	  	
 	  	sunday_count = sunday_count + sunday_count_fn(days,ctr);
 	   	ctr=1;  	
  } 
 }
      printf("\n\n Required number of sundays : %d",sunday_count);
}
int sunday_count_fn(int days, int flag)
{
	int week[7] , i = 1 , day = 0 , sunday_counter = 0 ;
	if ( flag == 0 )
	 day = 2;
	while ( i <= days )
	{   
		week[day] = i;
		day++;
		i++;
		if ( day == 7 )
		{
			day = 0 ;
			continue ;
		}
		if ( week[0] == 1)
		 {
		 	sunday_counter++;
		 }
	}
//	 printf("\n Sunday counter : %d",sunday_counter);
	return sunday_counter;

}
