//Point-of-Sale System  


#include <stdio.h>

void main (void)  {
	int code, qty;
	float price, amt, totalAmt, cash, change;
	char addAnother;
	

	//do-while loop -> post-test
	//while loop    -> pre-test
	//for loop      -> pre-test
	
	do {
	printf("====================\n");
	printf("COMRADE SHOPPING MENU\n");
	printf("====================\n\n");
	printf("[1] Maize Flour\t\tKsh  = 285.00\n");
	printf("[2] Baking Flour\t\tKsh = 300.00\n");
	printf("[3] Toothpaste     \t\tKsh= 76.00\n");
	printf("[4] Meat\t\tKsh= 300.00\n");
	
	printf("\nEnter Code\t : ");
	scanf("%d", &code );
	printf("\nEnter Quantity\t: ");
	scanf("%d", &qty);
	
	switch(code) {
		case 1: price = 285.00;
		break;
		case 2: price = 300.00;
		break;
		case 3: price = 76.00;
		break;
		case 4: price = 300.00;
		break;
	}
    amt = price * qty;  
    printf("\nAmount\t\t: %.2f", amt);
    
    totalAmt = totalAmt + amt;
    printf("\nTotal Amount\t: %.2f", totalAmt);
    
    printf("\nAdd another order(y/n)? ");
    addAnother = getche();
  }while(addAnother == 'y'  || addAnother == 'Y');
  
  do{
  	  printf("\nCash Tendered\t: ");
      scanf("%f", &cash);   
  }while(cash < totalAmt);
 

  
  change = cash - totalAmt;
  printf("\nChange\t\t: %.2f", change);    
printf("\n\nThank you! Come Again!");
	
}

