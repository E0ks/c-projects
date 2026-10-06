#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int intMonth = 0;
    int intDay = 0;
    int intYear = 0;

    printf("\n\tAstrology Prediction Program\n");
    printf("\nPlease only use digits\n");
    printf("\nWhat Month were you born?: ");
    scanf("%d", &intMonth);

    printf("\nWhat Day were you born?: ");
    scanf("%d", &intDay);

    printf("\nWhat Year were you born?: ");
    scanf("%d", &intYear);

    switch (intMonth)
    {
        case 1:
	{
	    printf("\nIf you were born in January, your lucky dates often align with new beginnings. January-born individuals tend to find luck when they embark on fresh ventures.\n");

	    switch (intDay)
	    {
	        case 1:
		{
		    printf("\nLook to the first day of the year, January 1st, as a powerful date for setting intentions and launching projects.\n");
		    break;
		}

		case 11: case 22:
		{
		    printf("\nAdditionally, January 11th and January 22nd often hold extra doses of good luck for you.\n");
		    break;
		}

	    }

	    break;
	}

        case 2:
	{
	    printf("\nFebruary-born individuals are known for their creativity and open-mindedness. Lucky dates for you often revolve around artistic and innovative pursuits.\n");

	    switch (intDay)
	    {
	        case 14:
		{
		    printf("\nFebruary 14th, Valentine’s Day, can bring romantic luck.\n");
		    break;
		}

		case 3: case 26:
		{
		    printf("\nAdditionally, February 3rd and February 26th are favorable dates for unleashing your creative energies and pursuing your passions.\n");
		    break;
		}

	    }

	    break;
	}

        case 3:
	{
	    printf("\nMarch-born individuals possess deep empathy and an intuitive connection to others. Your lucky dates often center on acts of kindness and nurturing.\n");

	    switch (intDay)
	    {
	        case 8:
		{
		    printf("\nConsider March 8th, International Women’s Day, as a day when your compassionate nature can attract good fortune.\n");
		    break;
		}

		case 15: case 28:
		{
		    printf("\nMarch 15th and March 28th are also dates when your empathetic qualities shine.\n");
		    break;
		}

	    }

	    break;
	}

        case 4:
	{
	    printf("\nApril-born individuals are characterized by their dynamic and energetic nature. Lucky dates for you are often associated with action and determination.\n");

	    switch (intDay)
	    {
	        case 4: case 14:
		{
		    printf("\nApril 4th and April 14th align with your vibrant energy, making them excellent days for pursuing goals.\n");
		    break;
		}

		case 22:
		{
		    printf("\nApril 22nd is a date when your determination is likely to pay off.\n");
		    break;
		}

	    }

	    break;
	}

        case 5:
	{
	    printf("\nMay-born individuals value stability and growth in their lives. Lucky dates often involve opportunities for financial and personal development.\n");

	    switch (intDay)
	    {
	        case 5:
		{
		    printf("\nLook to May 5th, celebrated as Cinco de Mayo, as a day when luck may favor you.\n");
		    break;
		}

		case 11: case 25:
		{
		    printf("\nMay 11th and May 25th are also dates associated with stability and growth.\n");
		    break;
		}

	    }

	    break;
	}

        case 6:
	{
	    printf("\nJune-born individuals excel in communication and building connections. Your lucky dates often revolve around social interactions and networking.\n");

	    switch (intDay)
	    {
	        case 6:
		{
		    printf("\nConsider June 6th, National Best Friends Day, as a day when your relationships may bring good fortune.\n");
		    break;
		}

		case 12: case 30:
		{
		    printf("\nJune 12th and June 30th are also dates when your communication skills shine.\n");
		    break;
		}

	    }

	    break;
	}

        case 7:
	{
	    printf("\nJuly-born individuals possess emotional intuition and sensitivity. Lucky dates for you often involve deep personal insights and introspection.\n");

	    switch (intDay)
	    {
	        case 7:
		{
		    printf("\nJuly 7th, often known as the “spiritual” or “lucky” 7, is a date when your intuition may guide you.\n");
		    break;
		}

		case 14: case 28:
		{
		    printf("\nJuly 14th and July 28th are also dates aligned with emotional growth.\n");
		    break;
		}

	    }

	    break;
	}

        case 8:
	{
	    printf("\nAugust-born individuals exude confidence and natural leadership qualities. Your lucky dates often center on taking charge and making bold decisions.\n");

	    switch (intDay)
	    {
	        case 8:
		{
		    printf("\nLook to August 8th, celebrated as the “Lion’s Gate” in astrology, as a powerful date for leadership.\n");
		    break;
		}

		case 18: case 28:
		{
		    printf("\nAugust 18th and August 28th are also dates when your confidence shines.\n");
		    break;
		}

	    }

	    break;
	}

        case 9:
	{
	    printf("\nSeptember-born individuals are analytical and detail-oriented. Lucky dates often involve problem-solving and analytical thinking.\n");

	    switch (intDay)
	    {
	        case 9:
		{
		    printf("\nSeptember 9th, with its repetitive numerical pattern, is a date when your analytical skills may lead to fortunate outcomes.\n");
		    break;
		}

		case 19: case 29:
		{
		    printf("\nSeptember 19th and September 29th are also dates aligned with opportunities for analysis.\n");
		    break;
		}

	    }

	    break;
	}

        case 10:
	{
	    printf("\nOctober-born individuals are known for their diplomatic and harmonious nature.\n");

	    switch (intDay)
	    {
	        case 10:
		{
		    printf("\nLook to October 10th, celebrated as World Mental Health Day, as a day when your harmonious qualities may attract good fortune.\n");
		    break;
		}

		case 14: case 28:
		{
		    printf("\nOctober 14th and October 28th are also dates when your diplomacy shines.\n");
		    break;
		}

	    }

	    break;
	}

        case 11:
	{
	    printf("\nNovember-born individuals are intense and focused seekers of truth. Your lucky dates often involve moments of deep exploration and determination.\n");

	    switch (intDay)
	    {
	        case 11:
		{
		    printf("\nConsider November 11th, celebrated as Singles’ Day, as a day when your intense focus may bring luck.\n");
		    break;
		}

		case 15: case 29:
		{
		    printf("\nNovember 15th and November 29th are also dates aligned with deep insights.\n");
		    break;
		}

	    }

	    break;
	}

        case 12:
	{
	    printf("\nDecember-born individuals possess an adventurous spirit and boundless optimism. Lucky dates often center on exploration and taking risks.\n");

	    switch (intDay)
	    {
	        case 12:
		{
		    printf("\nLook to December 12th, celebrated as 12/12, as a day when your adventurous side may lead to fortunate experiences.\n");
		    break;
		}

		case 21: case 31:
		{
		    printf("\nDecember 21st and December 31st are also dates when your optimism shines.\n");
		    break;
		}

	    }

	    break;
	}
    }


    return 0;

}

