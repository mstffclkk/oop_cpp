
// Member-function definitions for class Time.
#include "Time.h" // include definition of class Time from Time.h


/* Not: static const int data memberlar d���nda, bir class�n data memberler�,class g�vdesinde
		bildirildikleri yerde ba�lat�lamaz.
		
		Ba�ka bir deyi�le, bir s�n�f�n statik olmayan bir veri �yesini s�n�f tan�m�nda 
		(Aray�z veya Ba�l�k kodu) a��k�a ba�latmaya �al��mak bir s�zdizimi hatas�d�r.
	
		*/
		
// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.

Time::Time()
{
	hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s){
	if((h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60)){
		hour = h;
		minute = m;
		second = s;
	}
	else
		throw invalid_argument("hour,min and second was out of the range");
}

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":" 
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard(void){
	if(hour == 0 || hour == 12)
		cout << 12;
	else
		cout << hour % 12;
	cout << ":" << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 ) << second;	
	
	if(hour < 12)
		cout << " AM";
	else
		cout << " PM";
}


