#include<stdio.h>
#include <math.h>
#include<string.h>
int binary_to_decimal(int bin);
int binary_to_octal(int bin);
int binary_to_Hexadecimal(int bin);
int decimal_to_binary(int dec);
int decimal_to_octal(int dec);
int decimal_to_Hexadecimal(int dec);
int octal_to_binary(int oc);
int octal_to_decimal(int oc);
int octal_to_Hexadecimal(int oc);
int Hexadecimal_to_binary(char hex[]);
int Hexadecimal_to_decimal(char hex[]);
int Hexadecimal_to_octal(char hex[]);


int main()
{
    int ch,bin,checking,num,number,i,leng;
    int dec,oc;
    char hex[50];

    printf("\t\t\t Welcome to my project\n\n");

    while(num!=0)
    {

        printf("\t\t\tChoose your option\n\n");
        printf("BINARY>\n");
        printf("1:Binary to Decimal.\n2:Binary to Octal.\n3:Binary to Hexa-Decimal.\n");

        printf("\nDECIMAL>\n");
        printf("4:Decimal to Binary.\n5:Decimal to Octal.\n6:Decimal to Hexa-Decimal.\n");

        printf("\nOCTAL>\n");
        printf("7:Octal to Binary.\n8:Octal to Decimal.\n9:Octal to Hexa-Decimal.\n");

        printf("\nHEXA-DECIMAL>\n");
        printf("10:Hexa-Decimal to Binary.\n11:Hexa-Decimal to Decimal.\n12:Hexa-Decimal to Octal.\n");

        printf("\nEnter your choice option:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\nBinary to Decimal\n ");
            A:
            printf("\nEnter the number in binary form:");
            scanf("%d",&bin);

             checking=bin;
             while(checking!=0)
                {
                    number=checking%10;
                    if(number>1)
                    {
                        printf("\n input IS NOT BINARY NUMBER.\n");
                        printf("\n Try again!!\n");
                        goto A;
                    }
                    else
                    checking=checking/10;
                }
                binary_to_decimal(bin);
                break;


            case 2:
            printf("\nBinary to Octal\n ");
            B:
            printf("\nEnter the number in binary form:");
            scanf("%d",&bin);

            checking=bin;
            while(checking!=0)
            {
                number=checking%10;
                if(number>1)
                {
                    printf("\n input IS NOT BINARY NUMBER.\n");
                    printf("\n Try again!!\n");
                    goto B;
                }
                else
                    checking=checking/10;
            }
            binary_to_octal(bin);
            break;

            case 3:
            printf("\nBinary to Hexa-Decimal\n ");
            C:
            printf("\nEnter the number in binary form:");
            scanf("%d",&bin);

            checking=bin;
            while(checking!=0)
            {
                number=checking%10;
                if(number>1)
                {
                    printf("\n input IS NOT BINARY NUMBER.\n");
                    printf("\n Try again!!\n");
                    goto C;
                }
                else
                    checking=checking/10;
            }
            binary_to_Hexadecimal(bin);
            break;

             case 4:
            printf("\nDecimal to binary\n");
            printf("Enter the decimal number :");
            scanf("%d",&dec);

            decimal_to_binary(dec);
            break;

             case 5:
            printf("\nDecimal to Octal\n");
            printf("Enter the decimal number :");
            scanf("%d",&dec);

            decimal_to_octal(dec);
            break;

            case 6:
            printf("\nDecimal to Hexa-deciaml\n");
            printf("Enter the decimal number :");
            scanf("%d",&dec);

            decimal_to_Hexadecimal(dec);
            break;

             case 7:
            printf("\nOctal to binary\n ");
            D:
            printf("\nEnter the number in Octal form:");
            scanf("%d",&oc);

            checking=oc;
            while(checking!=0)
            {
                number=checking%10;
                if(number>7)
                {
                    printf("\n input is not Octal number.\n");
                    printf("\n Try again!!\n");
                    goto D;
                }
                else
                    checking=checking/10;
            }
            octal_to_binary(oc);
            break;

            case 8:
            printf("\nOctal to decimal\n ");
            E:
            printf("\nEnter the number in Octal form:");
            scanf("%d",&oc);

            checking=oc;
            while(checking!=0)
            {
                number=checking%10;
                if(number>7)
                {
                    printf("\n input is not Octal number.\n");
                    printf("\n Try again!!\n");
                    goto E;
                }
                else
                    checking=checking/10;
            }
            octal_to_decimal(oc);
            break;

            case 9:
            printf("\nOctal to Hexadecimal\n ");
            F:
            printf("\nEnter the number in Octal form:");
            scanf("%d",&oc);

            checking=oc;
            while(checking!=0)
            {
                number=checking%10;
                if(number>7)
                {
                    printf("\n input is not Octal number.\n");
                    printf("\n Try again!!\n");
                    goto F;
                }
                else
                    checking=checking/10;
            }
            octal_to_Hexadecimal(oc);
            break;


             case 10:
                printf("\nHexa decimal to binary\n");
                H:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                leng=strlen(hex);
                for(i=leng-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\n input is not hexadecimal number.\n");
                        printf("\n Try again!!\n");
                        goto H;
                    }
                }
                Hexadecimal_to_binary(hex);
                break;

                 case 11:
                printf("\nHexa decimal to Decimal\n");
                I:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                leng=strlen(hex);
                for(i=leng-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\n input is not hexadecimal number.\n");
                        printf("\n Try again!!\n");
                        goto I;
                    }
                }
                Hexadecimal_to_decimal(hex);
                break;

                 case 12:
                printf("\nHexa decimal to octal\n");
                J:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                leng=strlen(hex);
                for(i=leng-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\n input is not hexadecimal number.\n");
                        printf("\n Try again!!\n");
                        goto J;
                    }
                }
                Hexadecimal_to_octal(hex);
                break;





        default:
                printf("\nInvalid Input\n");
                break;
        }




        printf("\n\nDo you want to continue?\n");
        printf("'0' for exit and any number for continue\n\n");
        scanf("%d",&num);
}



}
 int binary_to_decimal( int bin)
{
  int rem,sum=0,i=0;
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }

    printf("Decimal Number : %d",sum);
}

int binary_to_octal(int bin)
       {
    int i=0,rem,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    printf("\n Octal Number : ");
    for(i=len-1; i>=0; i--)
    {
        printf("%d",remain[i]);
    }

     }

int binary_to_Hexadecimal(int bin)
{
    int rem,i=0,sum=0,remain[100],len=0;

    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nHexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A");
                 break;

            case 11:
                printf("B");
                 break;

            case 12:
                printf("C");
                 break;

            case 13:
                printf("D");
                 break;

            case 14:
                printf("E");
                 break;

            case 15:
                printf("F");
                 break;

            default:
                printf("%d",remain[i]);
        }

    }
}
int decimal_to_binary(int dec)

{
    int rem[50],i=0,len=0;
    while(dec>0)
    {
        rem[i]=dec%2;
        dec=dec/2;
        i++;
        len++;
    }
    printf("\nBinary number : ");
    for(i=len-1; i>=0; i--)
    {

        printf("%d",rem[i]);
    }
}

int decimal_to_octal(int dec)
{
     int rem[50],i=0,len=0;
    while(dec>0)
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
    }
    printf("\nOctal number : ");
    for(i=len-1; i>=0; i--)
    {

        printf("%d",rem[i]);
    }
}

int decimal_to_Hexadecimal(int dec)
{
     int rem[50],i=0,len=0;
    while(dec>0)
    {
        rem[i]=dec%16;
        dec=dec/16;
        i++;
        len++;
    }
    printf("\nHexadecimal number : ");
    for(i=len-1; i>=0; i--)

    {

        switch(rem[i])
        {
            case 10:
                printf("A");
                 break;

            case 11:
                printf("B");
                 break;

            case 12:
                printf("C");
                 break;

            case 13:
                printf("D");
                 break;

            case 14:
                printf("E");
                 break;

            case 15:
                printf("F");
                 break;

            default:
                printf("%d",rem[i]);
        }
    }
}
int octal_to_binary(int oc)
{
    int rem,sum=0,i=0,l=0;
    while(oc!=0)
    {
        rem=oc%10;
        oc=oc/10;
        sum=sum+rem*pow(8,i);
        i++;
    }
    {


    int rem[50],i=0,len=0;
    while(sum>0)
    {
        rem[i]=sum%2;
        sum=sum/2;
        i++;
        len++;
    }
    printf("\nBinary number : ");
    for(i=len-1; i>=0; i--)
    {

        printf("%d",rem[i]);
    }
    }



}

 int octal_to_decimal(int oc)

 {
     int rem,sum=0,i=0,l=0;
    while(oc!=0)
    {
        rem=oc%10;
        oc=oc/10;
        sum=sum+rem*pow(8,i);
        i++;
    }
    printf("Decimal Number : %d",sum);

 }
 int octal_to_Hexadecimal(int oc)
 {
     {
     int rem,sum=0,i=0,l=0;
    while(oc!=0)
    {
        rem=oc%10;
        oc=oc/10;
        sum=sum+rem*pow(8,i);
        i++;
    }

   {

     int remain[50],len=0,i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nHexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A");
                 break;

            case 11:
                printf("B");
                 break;

            case 12:
                printf("C");
                 break;

            case 13:
                printf("D");
                 break;

            case 14:
                printf("E");
                 break;

            case 15:
                printf("F");
                 break;

            default:
                printf("%d",remain[i]);
        }

    }

 }
     }
 }

 int Hexadecimal_to_binary(char hex[])
 {
    int i=0;
   int  leng=strlen(hex);
    printf("\nBinary Number : ");
    for(i=0;i<leng;i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
             break;
        case '2':
            printf("0010");
             break;
        case '3':
            printf("0011");
             break;
        case '4':
            printf("0100");
             break;
        case '5':
            printf("0101");
             break;
        case '6':
            printf("0110");
             break;
        case '7':
            printf("0111");
             break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
             break;
        case 'A':
        case 'a':
            printf("1010");
             break;
        case 'B':
        case 'b':
            printf("1011");
             break;
        case 'C':
        case 'c':
            printf("1100");
             break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hex[i]);
        }
    }

 }
 int Hexadecimal_to_decimal(char hex[])
 {
     int i,num=0,j=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,j);
        j++;
    }
    printf("\nDecimal Number : %d",decimal);

}

int Hexadecimal_to_octal(char hex[])
{
    int i,num=0,j=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,j);
        j++;
    }


    {
     int rem[50],i=0,len=0;
    while(decimal>0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nOctal number : ");
    for(i=len-1; i>=0; i--)
    {

        printf("%d",rem[i]);
    }
}


}








