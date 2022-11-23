#ifndef APP_H
#define APP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

typedef struct Customer_Car_Details
{
    //char capacity[20];
    int capacity;
	char cust_name[30];
    char pick[30];
    char drop[30];
	char _gender;
	struct Customer_Car_Details *next;
}Customer_Car_Details;

typedef struct customerDetails
{
	int _id;
	char _name[30];
	char _passwrd[30];
	char _place[30];
	char _gender;
	int _phonenum;
	//int _active;
	struct customerDetails *next;

}CD;/*CD is identifier for struct customerDetails*/
typedef struct driverDetails
{
	int _id;
	char _name[30];
	char _passwrd[30];
	char _gender;
	int _phonenum;
	struct driverDetails *next;

}DD;/*DD is identifier for struct driverDetails*/

CD* signUpCustomer(CD *, int *);
DD* signUpDriver(DD *, int *);
int signInCustomer(CD *);
int signInDriver(DD *);
DD* loadDD();
CD* loadCD();

int tokenizeDD(DD *, char *);
int tokenizeCD(CD *, char *);
int writeDD(DD *);
int writeCD(CD *);
int writeccD(Customer_Car_Details *);
void dispDD(DD *);
void checkBookedTrips(Customer_Car_Details *);
Customer_Car_Details* loadccD();
Customer_Car_Details* addCustomerCarDetails(Customer_Car_Details *, int *);
int tokenizeccd(Customer_Car_Details *, char *);
//int findDId(DD *);
//int updateCarDetails(DD *, char *);
//int updateCarDetails(DD *, char *, char *);
//int updateCarDetails(DD *);
void removeLeading(char *, char*);
void removeTrailing(char *);
int updateDetails(DD *);
int cap(Customer_Car_Details *);
int markCompleteTrips(Customer_Car_Details *);

#endif
