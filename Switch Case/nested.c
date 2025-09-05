// hotel menu

#include <stdio.h>

void main()
{
    int choice , quantity;
    int guj,Dhokla, Khandvi, Thepla, Fafda, Khakhra; 
    int pun, ButterChicken, CholeBhature, DalMakhani, RajmaChawal, AmritsariKulcha; 
    int raj, DalBatiChurma, GatteKiSabzi, KerSangri, LaalMaas, PanchmelDal;
    int chi, Manchurian, FriedRice, Noodles, SweetSour, SpringRolls;
    int soi, Dosa, Idli, Vada, Sambar, Pongal;

    printf("\n1.. Gujarati");
    printf("\n2.. Punjabi");
    printf("\n3.. Rajasthani");
    printf("\n4.. Chinese");
    printf("\n5.. South Indian");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nYou selected Gujarati cuisine.");

        printf("\n1.. Dhokla");
        printf("\n2.. Khandvi");
        printf("\n3.. Thepla");
        printf("\n4.. Fafda");
        printf("\n5.. Khakhra");

        printf("\nEnter your choice: ");
        scanf("%d", &guj);

        switch (guj)
        {
        case 1:
            printf("\nYou selected Dhokla.");


                printf("\n1..Khaman Dhokla");
                printf("\n2..Rava Dhokla");
                printf("\n3..Moong Dal Dhokla");
                printf("\n4..Oats Dhokla");
                printf("\n5..Spinach Dhokla");
                printf("\nEnter your choice: ");
                scanf("%d", &Dhokla);

                    switch (Dhokla)
                    {
                    case 1:
                        printf("\nYou selected Khaman Dhokla.");
                        printf("\nPrice per plate: ₹50");
                        printf("\nEnter quantity: ");
                        scanf("%d", &quantity);
                        printf("\nTotal price: %d", quantity * 50);

                        break;

                    case 2:
                        printf("\nYou selected Rava Dhokla.");
                        printf("\nPrice per plate: ₹70");
                        printf("\nEnter quantity: ");
                        scanf("%d", &quantity);
                        printf("\nTotal price: %d", quantity * 70);
                        break;

                    case 3:
                        printf("\nYou selected Moong Dal Dhokla.");
                        printf("\nPrice per plate: ₹80");
                        printf("\nEnter quantity: ");
                        scanf("%d", &quantity);
                        printf("\nTotal price: %d", quantity * 80);
                        break;
                    } // end of Dhokla switch

            break;

        case 2:
            printf("\nYou selected Khandvi.");
            
            // printf("");  per main case min 3 case
            break;

        case 3:
            printf("\nYou selected Thepla.");
            break;

        case 4:
            printf("\nYou selected Fafda.");
            break;

        case 5:
            printf("\nYou selected Khakhra.");
            break;
        } // end of guj case 1
        break; // end of case 1

    case 2:
        printf("\nYou selected Punjabi cuisine.");
        break; // end of case 2

    case 3:
        printf("\nYou selected Rajasthani cuisine.");
        break; // end of case 3

    case 4:
        printf("\nYou selected Chinese cuisine.");
        break; // end of case 4

    case 5:
        printf("\nYou selected South Indian cuisine.");
        break; // end of case 5

    default:
        printf("\nInvalid choice.");
        break; // end of default
    } // end of main switch
} // end of main