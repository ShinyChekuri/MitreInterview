#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>





int dealing(int *, int *, int *, int *); 
int playing(int, int, int);
//void beginning(int ((*)[4], int *)
// void ending(int *win, int *lose);





int main()
{

	int bankroll = 1000;
	int gamerecord[4] = {0, 0, 0, 0}; // [Won, Lost, blackjack, busted]
 	int bet = 0;
 	int MinBet = 10;
 	int MaxBet = 1000;
 	double status;
 	int count = 0;
 	char key;
 	int betamount = 10;

 	int Win = gamerecord[0];
 	int Lose = gamerecord[1];
 	int Blackjack = gamerecord[2];
 	int Busted = gamerecord[3];


 	printf("We are starting the game!");
 	printf("\nYou currently have: %d, The minimum bet is: %d.", bankroll, MinBet);
 
 	betamount =  playing(MinBet, MaxBet, bankroll);
 	printf("\nThe bet amount is: %d", betamount);
 	status = dealing(&Win, &Lose, &Blackjack, &Busted);
 	


	status = status/10.00;
	bankroll = bankroll + (betamount * status);


	gamerecord[0] = Win;
 	gamerecord[1] = Lose;
 	gamerecord[2] = Blackjack;
 	gamerecord[3] = Busted;
		printf("\nCurrent bank balance is %d \n", bankroll );
		printf("\nWins: %d, Loses: %d, Blackjack: %d, Busted: %d \n", gamerecord[0], gamerecord[1], gamerecord[2], gamerecord[3]);





	srand(time(NULL));


	while (bankroll > 0) {

			printf("\nWould you like to play another round? Press Y for yes and N for no.");

			scanf(" %c", &key);
				


				if (key == 'Y' || key == 'y') {
					printf("\nYou currently have: %d, The minimum bet is: %d.", bankroll, MinBet);

				 	betamount =  playing(MinBet, MaxBet, bankroll);
				 	printf("\nThe bet amount is: %d", betamount);
				 	status = dealing(&Win, &Lose, &Blackjack, &Busted);
				 	


					status = status/10.00;
					bankroll = bankroll + (betamount * status);


					gamerecord[0] = Win;
				 	gamerecord[1] = Lose;
				 	gamerecord[2] = Blackjack;
				 	gamerecord[3] = Busted;
						printf("\nCurrent bank balance is %d \n", bankroll);
						printf("\nWins: %d, Loses: %d, Blackjack: %d, Busted: %d \n", gamerecord[0], gamerecord[1], gamerecord[2], gamerecord[3]);

		
				}

				if (key == 'N' || key == 'n') {

					break;
				
				
				}
					
			

			}

			while (bankroll == 0){

						printf("You have no money left! Game is over! \n");
						break;

					}



		
		// beginning(&win, &lose, &bet);
		
		// ending(win, lose, bet);


	gamerecord[0] = Win;
 	gamerecord[1] = Lose;
 	gamerecord[2] = Blackjack;
 	gamerecord[3] = Busted;
		printf("\nCurrent bank balance is %d \n", bankroll );
		printf("\nWins: %d, Loses: %d, Blackjack: %d, Busted: %d \n", gamerecord[0], gamerecord[1], gamerecord[2], gamerecord[3]);
		

	return 0;
}





































int dealing(int *Win, int *Lose, int *Blackjack, int *Busted)  //C by ptr/addr  gcc *.c
{
	
	
	int player_card1 = random()%13+1;
	int player_card2= random()%13+1;
	int dealer_card1= random()%13+1;
	int dealer_card2= random()%13+1;
	int player_sum, dealer_sum;
	int player_extra_card, dealer_extra_card;
	int player_gets_blackjack = 0;
	int dealer_gets_blackjack =0;
	char key;
	int player_count = 0;
	double did_player_win;

	
	
								if ((player_card1 == 1 || player_card2 > 9) && ((player_card2 == 1 || player_card1 > 9))) {
									player_gets_blackjack = 1;
									player_sum = 21;
									*Blackjack = *Blackjack + 1;
									printf("\n Automatic blackjack!\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", player_sum, player_card1, player_card2);
									
								}

								
								else if (player_card1 > 1 && player_card1 < 10 && player_card2 > 1 && player_card2 < 10) {
					
									player_sum = player_card1 + player_card2;

									printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", player_sum, player_card1, player_card2);

								} else if (player_card1 > 1 && player_card1 < 10 && player_card2 > 10) {
									
									player_sum = player_card1 + 10;
									
									printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = 10 \n", player_sum, player_card1);

											}
								else if (player_card1 > 10 && player_card2 > 1 && player_card2 < 10) {
											
											player_sum = player_card2 + 10;

											printf("\n Player dealing results: %d (Card 1 = 10, Card 2 = %d).\n", player_sum, player_card2);

													}
								else if (player_card1 > 10 && player_card2 > 10) {
											
											player_sum = 20;

											printf("\n Player dealing results: %d (Card 1 = 10, Card 2 = 10).\n", player_sum);

													}

			while (player_sum < 21 && player_count == 0){
									printf("\nWould you like to take a hit? Press Y for yes and N for no.");

									scanf(" %c", &key);

									if (key == 'Y' || key == 'y') {
										(player_extra_card) = random()%13+1;
										if (player_extra_card == 1) {
											printf("\n You have been given an Ace!.");
											printf("\nWould you like the ace to be equal to 1 or 11?.");
											scanf(" %c", &player_extra_card);
											player_sum = player_sum + player_extra_card;
											}
											
										
										else if (player_extra_card > 9){
											printf("\n You have been given a %d", player_extra_card);
											printf("\n Therefore you have earned 10 points");
											player_sum = player_sum + 10;
											
										}
										else if (player_extra_card <10 && player_extra_card > 1) {
											printf("\n You've been given a %d. Therefore the you have earned %d points", player_extra_card, player_extra_card);
											player_sum = player_sum + player_extra_card;
										
										}

									}
										
									else if (key == 'N' || key == 'n'){
										player_count = 1;
										
												}	


				
			}


								if ((dealer_card1 == 1 || dealer_card2 > 9) && ((dealer_card2 == 1 || dealer_card1 > 9))) {
									dealer_gets_blackjack = 1;
									dealer_sum = 21;
									printf("\n Automatic blackjack!\n Dealer results: %d (Card 1 = %d, Card 2 = %d).\n", player_sum, player_card1, player_card2);
									
								}

								else if (dealer_card1 > 1 && dealer_card1 < 10 && dealer_card2 > 1 && dealer_card2 < 10) {
									
									dealer_sum = dealer_card1 + dealer_card2;

									printf("\nDealer results: %d (Card 1 = %d, Card 2 = %d).\n", dealer_sum, dealer_card1, dealer_card2);


								} else if (dealer_card1 > 1 && dealer_card1 < 10 && dealer_card2 > 10) {
									
									dealer_sum = dealer_card1 + 10;
									
									printf("\nDealer results: %d (Card 1 = %d, Card 2 10).\n", dealer_sum, dealer_card1);
									

											}
								else if (dealer_card1 > 10 && dealer_card2 > 1 && dealer_card2 < 10) {
											dealer_sum = dealer_card2 + 10;
											printf("\nDealer results: %d (Card 1 = 10, Card 2 = %d).\n", dealer_sum, dealer_card2);
											

											

													}
								else if (dealer_card1 > 10 && dealer_card2 > 10) {
											dealer_sum = 20;

												printf("\nDealer results: %d (Card 1 = 10, Card 2 = 10).\n", dealer_sum);
																						

											}

								if ((dealer_gets_blackjack == player_gets_blackjack) && dealer_gets_blackjack == 1) {
									printf("\n Both dealer and player have blackjack. It is a push.");
									did_player_win = 0;

								}
								else if (dealer_gets_blackjack == 1 && player_gets_blackjack == 0) {
									printf("\nDealer wins on blackjack!");
									*Lose = *Lose + 1;
									did_player_win = -1;
								}
								else if (dealer_gets_blackjack == 0 && player_gets_blackjack == 1) {
											printf("\nPlayer wins on blackjack!");
											*Win = *Win + 1;
											did_player_win = 1.5;
										
										}


			while (dealer_sum < 17){
									
									(dealer_extra_card) = random()%13+1;
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
											printf("\n The Dealer has been given a %d. Therefore the dealer has earned %d points ", dealer_extra_card, dealer_extra_card);
											dealer_sum = dealer_sum + dealer_extra_card;
											
										}
										
											
						}
					if ( player_sum > 21 && dealer_sum < 21) {
						printf("\n Sorry, you've been busted. Dealer wins.");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
				
						*Busted = *Busted + 1;
						*Lose = *Lose + 1; 
						did_player_win = -1;
								}
					else if ( player_sum < 21 && dealer_sum > 21) {
								printf("\n The Dealer has been busted. You win.");
								printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
								*Win = *Win + 1;
								did_player_win = 1;
							}
					else if ( player_sum > 21 && dealer_sum > 21) {
						printf("\n Sorry, Both the dealer and you have been busted. It is a push.");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
						*Busted = *Busted + 1;
						did_player_win = 0;
		
					}
					else if (player_sum < 21 && dealer_sum < 21) {
						if ( (21 - player_sum) < (21 - dealer_sum)){
							printf("\nCongratulations you won!");
							printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
							*Win = *Win + 1;
							did_player_win = 1;
								}
						else if ( (21 - player_sum) > (21 - dealer_sum)){
							printf("\nSorry, Dealer wins.");
							printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
							*Lose = *Lose + 1;
							did_player_win = -1;
								}
							}
					else if(player_sum == 21 && dealer_sum == 21) {
						printf("Both you and the dealer have 21 points. It is a push.");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
					}
					else if(player_sum == 21 && dealer_sum  < 21) {
						printf("You win ! ");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
						*Win = *Win +1;
						did_player_win = 1;
					}
					else if(player_sum == 21 && dealer_sum > 21) {
						printf("Dealer has been busted, you win! ");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
						*Win = *Win +1;
						did_player_win = 1;
					}
					else if(player_sum < 21 && dealer_sum == 21) {
						printf("Dealer wins. ");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
						*Lose = *Lose +1;
						did_player_win = -1;
					}
					else if(player_sum > 21 && dealer_sum == 21) {
						printf("You have been busted. Dealer wins. ");
						printf("\nYour total sum was %d and the Dealer's sum was %d.", player_sum, dealer_sum);
						*Lose = *Lose +1;
						*Busted = *Busted + 1;

						did_player_win = -1;
					}

										

		


	printf("\n Player dealing results: %d (Card 1 = %d, Card 2 = %d).\n", player_sum, player_card1, player_card2);

	
	did_player_win = did_player_win * 10;
	return did_player_win;

	




}
















int playing(int MinBet, int MaxBet, int bankroll)
{

	int betamount;
	double status;
	int count = 0;


	printf("\nPlease place a bet from %d to %d. Can only bet whole dollars:", MinBet, bankroll);
	scanf(" %d", &betamount);

	while ((betamount < MinBet || betamount > bankroll) && count == 0) {
			printf("\nSorry, please enter a valid bet amount\n");
			scanf(" %d", &betamount);

					if (betamount < MinBet || betamount > bankroll) {
							count = 0;
					}
					else {
						count = 1;
					}
						
			}

	return betamount;


}







