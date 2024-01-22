#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for cardNumber.
    long cardNumber = get_long("Please enter your credit card number: ");
    // begin assigning variables for Luhns calc. and Cardprovider determination.
    long ccLuhns = cardNumber, firstTwoDigits = cardNumber;
    // sums for Luhns checksum.
    int lSumA = 0, lSumB = 0, lSumAB = 0;

    // Calculate length of card number
    int length = 0;
    long tempCardNumber = cardNumber;

    // record the number of times /10 takes place to receive digit count; x < 10; x / 10, x will resolve to 0.
    while (tempCardNumber > 0)
    {
        length++;
        tempCardNumber /= 10;
    }

    // Iterate through length
    for (int i = 0; i < length; i++)
    {
        // Calculate the digit, then store it in lDigitA
        int lDigitA = ((ccLuhns / 10) % 10) * 2;
        // provided the product of lDigitA is 2-digits (> 9):
        while (lDigitA > 9)
        {
            int lDigitAa = (lDigitA % 10) + ((lDigitA / 10) % 10);
            lDigitA = lDigitAa;
        }
        // add the lDigitA to itself to receive first Sum:
        lSumA += lDigitA;
        // skip 2 digits:
        ccLuhns /= 100;
    }

    // Reset ccLuhns for next batch of digits
    ccLuhns = cardNumber;

    // iterate through length for sumB
    for (int j = 0; j < length; j++)
    {
        // find the last digit, 2-digit scenarios are impossible, so not necessary to implement.
        int lDigitB = (ccLuhns % 10);
        lSumB += lDigitB;
        ccLuhns /= 100;
    }

    // find the final sum (AB)
    lSumAB = lSumA + lSumB;

    // find the first 2 digits by dividing by 10 until firstTwoDigits <= 99)
    while (firstTwoDigits >= 100)
    {
        firstTwoDigits /= 10;
    }

    // begin to determine as to which card provider using criteria provided:
    if (lSumAB % 10 == 0 && length >= 13)
    {
        if ((firstTwoDigits == 34 || firstTwoDigits == 37) && length == 15)
        {
            printf("AMEX\n");
        }
        else if (firstTwoDigits > 50 && firstTwoDigits < 56 && length == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (firstTwoDigits > 39 && firstTwoDigits < 50 && (length == 13 || length == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
