#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>





int dealing(int *gamerecord[]); 
int playing(int *bet, int *win, int *lose, int MinBet, double bankroll);
// void beginning(int *win, int *lose);
// void ending(int *win, int *lose);





int main()
{

	double bankroll = 1000;
	int gamerecord[] = {0, 0, 0, 0}; // [Won, Lost, blackjack, busted]
 	int bet = 0;
 	int MinBet = 10;
 	int MaxBet = 1000;
 	int win = 0;
 	int lose = 0;
 	int blackjack = 0;
 	int busted = 0;
 	char z = '\0';


	srand(time(NULL));



	do{

		// beginning(&win, &lose, &bet);
		bankroll =  playing(&win, &lose, &bet, MinBet, bankroll);
		// ending(win, lose, bet);


		if (bankroll == 0){

			printf("You have no money left! \n");
			break;
		}

		printf("Current bank balance is %.2f$ \n", bankroll );
		printf("Do you want to play again? (y/n) : \n");
		scanf("\n%c", &z);

	
	}while(z != 'N' && z != 'n');

	return 0;
}





































int dealing(int *gamerecord[])   //C by ptr/addr  gcc *.c
{
	 int gamerecord[] = gamerecord[];
	int blackjack = gamerecord[2];
	int win = gamerecord[0];
	int lose = gamerecord[1];
	int busted = gamerecord[3];
	(*player_card1) = random()%13+1;
	(*player_card2) = random()%13+1;
	int player_sum;
	int dealer_sum;
	int player_gets_blackjack = 0;
	int dealer_gets_blackjack =0;
	char key;
	int player_extra_card;
	int dealer_extra_card
	if (type = 0) {
	
								if ((player_card1 == 1 || player_card2 > 9) && ((player_card2 == 1 || player_card1 > 9))) {
									player_gets_blackjack = 1;
									printf("\n Automatic blackjack!\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", sum, *player_card1, *player_card2);
									
								}

								else if (player_card1 > 1 && player_card1 < 10 && player_card2 > 1 && player_card2 < 10) {
									printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", sum, *player_card1, *player_card2);
					
									player_sum = player_card1 + player_card2;

									

								} else if (player_card1 > 1 && player_card1 < 10 && player_card2 > 10) {
									printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", sum, *player_card1, *player_card2);
								
									player_sum = player_card1 + 10;
									
									

											}
								else if (player_card1 > 10 && player_card2 > 1 && player_card2 < 10) {
											player_sum = player_card2 + 10;

											
													}
								else if (player_card1 > 10 && player_card2 > 10) {
											player_sum = 20;

											

													}

								if (player_gets_blackjack == 1) {
									player_sum = 21;
									
								}
								if (player_gets_blackjack == 1) {
									blackjack = blackjack + 1;
									
								}

	(*dealer_card1) = random()%13+1;
	(*dealer_card2) = random()%13+1;

								if ((dealer_card1 == 1 || dealer_card2 > 9) && ((dealer_card2 == 1 || dealer_card1 > 9))) {
									dealer_gets_blackjack = 1;
									printf("\n Automatic blackjack!\n Dealer results: %d (Card 1 = %d, Card 2 = %d).\n", sum, *player_card1, *player_card2);
									
								}

								else if (dealer_card1 > 1 && dealer_card1 < 10 && dealer_card2 > 1 && dealer_card2 < 10) {

									dealer_sum = dealer_card1 + dealer_card2;

									


								} else if (dealer_card1 > 1 && dealer_card1 < 10 && dealer_card2 > 10) {
									dealer_sum = dealer_card1 + 10;
									
									

											}
								else if (dealer_card1 > 10 && dealer_card2 > 1 && dealer_card2 < 10) {
											dealer_sum = dealer_card2 + 10;

											

													}
								else if (dealer_card1 > 10 && dealer_card2 > 10) {
											dealer_sum = 20;

											

													}

								if (dealer_gets_blackjack == 1) {
									dealer_sum = 21;
									
								}


								if (dealer_gets_blackjack == player_gets_blackjack) {
									printf("\n Both dealer and player have blackjack. It is a push.");
									blackjack  blackjack + 1;
								}
								else if (dealer_gets_blackjack = 1 && player_gets_blackjack = 0) {
									printf("Dealer wins on blackjack!")
									lose = lose + 1;
								
								}
								else if (dealer_gets_blackjack = 0 && player_gets_blackjack = 1) {
											printf("Player wins on blackjack!")
											win = win + 1;
										
										}
								while (player_sum < 21){
									printf("\nWould you like to take a hit? Press Y for yes and N for no.");

									scanf(" %c", &key);

									if (key == 'Y' || key == 'y') {
										(*player_extra_card) = random()%13+1;
										if (player_extra_card == 1) {
											printf("\n You have been given an Ace!.");
											printf("\nWould you like the ace to be equal to 1 or 11?.");
											scanf(" %c", &player_extra_card);
											player_sum = player_sum + player_extra_card;
											
										}
										else if (player_extra_card > 9){
											printf("\n You have been given a %d", dealer_extra_card);
											printf("\n Therefore you have earned 10 points");
											player_sum = player_sum + 10;
											
										}
										else if (player_extra_card <10 && player_extra_card > 1) {
											printf("\n You've been given a %d. Therefore the dealer has earned %d points", dealer_extra_card, dealer_extra_card);
											player_sum = player_sum + player_extra_card;
										
										}
									else if (key == 'N' || key == 'n'){
										break;
										
											}
									}

								while (dealer_sum < 17){
									
									(*dealer_extra_card) = random()%13+1;
										if (player_extra_card == 1) {
											printf("\n The dealer has been given an Ace!.");
											dealer_sum = dealer_sum + 11;
											
										}
										else if (dealer_extra_card > 9){
											printf("\n The dealer has been given a %d", dealer_extra_card);
											printf("\n Therefore the dealer has earned 10 points");
											dealer_sum = dealer_sum + 10;
											
										}
										else if (dealer_extra_card <10 && dealer_extra_card > 1) {
											printf("\n You've been given a %d. Therefore the dealer has earned %d points", dealer_extra_card, dealer_extra_card);
											dealer_sum = dealer_sum + dealer_extra_card;
											
										}
									else if (key == 'N' || key == 'n'){
										break;
										return dealer_sum;
											}
									}
								if ( player_sum > 21 && dealer_sum < 21) {
									printf("\n Sorry, you've been busted. Dealer wins.");
									printf("Your total sum was %d and the Dealer's sum was %d.", &player_sum, &dealer_sum);
							
									busted = busted + 1;
									lose = lose + 1; 
											}
								if ( player_sum < 21 && dealer_sum > 21) {
											printf("\n The Dealer has been busted. You win.");
											printf("Your total sum was %d and the Dealer's sum was %d.", &player_sum, &dealer_sum);
											win = win + 1;
										}
								if ( player_sum > 21 && dealer_sum > 21) {
									printf("\n Sorry, Both the dealer and you have been busted. It is a push.");
									printf("Your total sum was %d and the Dealer's sum was %d.", &player_sum, &dealer_sum);
									busted = busted + 1;
					
								}
								if (player_sum < 21 && dealer_sum < 21) {
									if ( (21 - player_sum) < (21 - dealer_sum)){
										printf("Congratulations you won!")
										printf("Your total sum was %d and the Dealer's sum was %d.", &player_sum, &dealer_sum);
										win = win + 1;
											}
									if ( (21 - player_sum) > (21 - dealer_sum)){
										printf("Sorry, Dealer wins.")
										printf("Your total sum was %d and the Dealer's sum was %d.", &player_sum, &dealer_sum);
										lose = lose + 1;
											}


										}
		}



	int 

	printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", player_sum, *player_card1, *player_card2);

	gamerecord[0] = win;
	gamerecord[1] = lose;
	gamerecord[2] = blackjack;
	gamerecord[3] = busted;

	 return gamerecord[];
}





















int playing(int *bet, int *win, int *lose, int MinBet, double bankroll)
{

	return -1;
}



/* 
	int type;
	int betamount;


	printf("\nPlease place a bet from %d to %0.2lf:", MinBet , bankroll);

	scanf(" %d", &betamount);

	while (betamount < MinBet || betamount > bankroll) {

		printf("\nSorry, please enter a valid bet amount\n");
		scanf(" %d", &betamount);
				}

		int sum = dealing(&type);

		if (sum == 7 || sum == 11) {
		
			*win = *win + 1;

			return bankroll+betamount;


		} else if (sum == 2 || sum == 3 || sum == 12) {

		
			*lose = *lose + 1;

			return bankroll - betamount;

		} else {

			printf("\n Press 'y' if you'd like to double your bet! \n");

			scanf(" %c", &key);

			if (key == 'y'){

				betamount = betamount * 2;

			} 
		

			int reroll = dealing(&d1, &d2);

			while (reroll != sum && reroll != 7){
				reroll = dealing(&d1, &d2);
			}

			if (reroll == 7){

				*lose = *lose + 1;

				return bankroll - betamount;	

			} else {

				*win = *win + 1;

				return bankroll+betamount;
			}

		
	} 
	
	else if(key != 'f') {

		printf("\n Bet-against: 7, 11 lose; 2, 3, 12 win\n");

		printf("\nPlease place a bet from %d to %0.2lf:", MinBet , bankroll);

		scanf(" %d", &betamount);

		while (betamount < MinBet || betamount > bankroll) {

			printf("\nSorry, please enter a valid bet amount\n");
			scanf(" %d", &betamount);
		}
		
		int sum = dealing(&d1, &d2);

		if (sum == 2 || sum == 3 || sum == 12) {
			
			*win = *win + 1;

			return bankroll + betamount;

		} else if (sum == 7 || sum == 11) {

			*lose = *lose + 1;

			return bankroll - betamount;

		} else {
		
			printf("\n Press 'y' if you'd like to double your bet! \n");

			scanf(" %c", &key);

			if (key == 'y'){

				betamount = betamount * 2;
			}


			int reroll = dealing(&d1, &d2);

			while (reroll != sum || reroll != 7){

				reroll = dealing(&d1, &d2);

			}

			if (reroll == 7){

				*win = *win + 1;

				return bankroll + betamount;	

			} else {

				*lose = *lose + 1;

				return bankroll-betamount;
			}

		}

	}


*/





/*
void beginning(pointers to variables(win, lose, ba, bf))
{

	FILE *fp = fopen("game_info.txt", "w");
	if(fp == NULL){
		// no such file exits
		// set pointer all to zero
	}
	else{
		// parse the file
		// google parse / read file in c
		// set the values read to the pointers
	}	
}


void ending(regular vairables win, lose, ba, bf. Not pointers)
{
	FILE *fp = fopen("game_info.txt", "w");

	// write the variables from the parameters to the file
	// This should be done with fputs or something, just
	// google write variables to file in c

}*/