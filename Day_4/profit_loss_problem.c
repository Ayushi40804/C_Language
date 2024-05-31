//
#include <stdio.h>

int main()
{
    float buying_price, market_price, discount, selling_price, profit_or_loss_percentage;
    
    // Input buying price, market price, and discount
    printf("Enter the buying price: ");
    scanf("%f", &buying_price);
    
    printf("Enter the market price: ");
    scanf("%f", &market_price);
    
    printf("Enter the discount (in percentage): ");
    scanf("%f", &discount);
    
    // Calculate the selling price after discount
    selling_price = market_price * (1 - discount / 100);
    
    // Calculate profit or loss percentage
    profit_or_loss_percentage = ((selling_price - buying_price) / buying_price) * 100;
    
    // Determine if it is profit or loss using the conditional operator
    profit_or_loss_percentage >= 0 ? 
        printf("Seller has made a profit.\nProfit = %.2f%%.\n", profit_or_loss_percentage) :
        printf("Seller has made a loss.\nLoss = %.2f%%.\n", -profit_or_loss_percentage);
    
    return 0;
}