#include <stdio.h>

int main()
{
  float amount[] = {
      0.49, 1.27, 0.75, 1.31, 0.83};
  int i, quarters, dimes, nickles, pennies, coins;

  quarters = dimes = nickles = pennies = 0;

  for (i = 0; i < 5; i++)
  {
    coins = amount[i] * 100;
    while (coins >= 25)
    {
      quarters++;
      coins -= 25;
    }
    while (coins >= 10)
    {
      dimes++;
      coins -= 10;
    }
    while (coins >= 5)
    {
      nickles++;
      coins -= 5;
    }
    pennies = coins;
    printf("%d quarters, %d dimes, %d nickles, %d pennies\n", quarters, dimes, nickles, pennies);
  }
}