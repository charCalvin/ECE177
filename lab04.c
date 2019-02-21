#include <stdio.h>

int main() {	// Code to compute the date of Easter --- MAKE MINIMAL CHANGES!

	char A, B, C, D, E, F, G, H, I, K, L, M, N, P;	// These work as char
	int year, month, day;
	int startyear, endyear, flip;
	char * monthstring;			// A string to hold the month name
	int earliestD, earliestM, latestM, latestD;
	int yearInterval = 0;
	int set = 0;

// Get inputs
	printf("Enter the start year: ");
	scanf("%d", &startyear);
	printf("Enter the end year: ");
	scanf("%d", &endyear);
	printf("\n");

	//fix the mistakes of the week minded...
	if (startyear > endyear) {
		flip = startyear;
		startyear = endyear;
		endyear = flip;
		printf("Next time make sure you enter the dates in order please.\n\n");
	}

	if (startyear < 1700) {
		printf("Woah! No one told me time went back that far.\n\n");
	}

	if ((startyear >= 1700) && (startyear < 1800)) { /* For the heck of it*/
		printf("startyear is in 1700s!\n\n");	/* flag startyear in the 1700s	*/
	}

	if ((startyear >= 1800) && (startyear < 1900)) { /* also startyear in the 1800s */
		printf("startyear is in 1800s!\n\n");	/* using different test expression */
	}

	if ((startyear >= 1900) && (startyear < 2000)) {
		printf("startyear is in the 1900s!\n\n");
	}

	if (startyear >= 2000 && (startyear < 3000)) {				// and also startyear equal to 2000
		printf("startyear ");			// printf broken into multiple lines
		printf("starts in the 2000s!\n\n");	// (leave it as two lines)
	}

	if (startyear >= 3000) {
		printf("You probably shouldn't plan that far ahead...\n\n");
	}

// Calculate the dates
	for (year = startyear; year <= endyear; year++) {
		A = year % 19;
		B = year / 100;
		C = year % 100;
		D = B / 4;
		E = B % 4;
		F = (B + 8) / 25;
		G = (B - F + 1) / 3;
		H = (19 * A + B - D - G + 15) % 30;
		I = C / 4;
		K = C % 4;
		L = (32 + 2*E + 2*I - H - K) % 7;
		M = (A + 11 * H + 22 * L) / 451;
		N = (H + L - 7 * M + 114) / 31;
		P = (H + L - 7 * M + 114) % 31;

		month = N;			// (March = 3, April = 4)
		day = P + 1;

// Why can't I put this in the for loop conditions like the year++?
		yearInterval++;

		printf("Date of Easter in %d is %s %d\n", year, (month == 3) ? "March" : "April", day);

		if (month == 3) {			// This is another way to print the month
			monthstring = "March";
		}
		else {						// else part of if statement
			monthstring = "April";
		}
		printf("Date of Easter in %d is %s %d\n\n", year, monthstring, day);

// Calculate the earliest and latest dates:
		/*earliestD = day;           //maybe an if statement in an if statement
		earliestM = month;*/				 //would work.

		if (set == 0){
			earliestM = month;
			earliestD = day;
			latestM   = month;
			latestD   = day;
			set++;
 		}

		if ((month < earliestM) || ((month == earliestM) && (day < earliestD))) {
			earliestM = month;
			earliestD = day;
		}

		if ((month > latestM) || ((month == latestM) && (day > latestD))) {
			latestM = month;
			latestD = day;
		}
	}

	// Print the earliest and latest dates.
	if (startyear != endyear) {
		printf("The earliest easter is %s %d ", (earliestM == 3) ? "March" : "April", earliestD);
		printf("and the latest Easter is %s %d\n", (latestM == 4) ? "April" : "March", latestD);
	}

// Give the interval of years.
	printf("Interval: %d years\n", yearInterval);


	return 0;
}
