#include <stdio.h>

void iterate(void) {
  // Creating variables to represent data for a store
  float price = 10;
  float sales = 0;
  char* inventory = "Out of Stock";

  // A while loop that iterates through every value of price until sales has a greater value than it
  // The value of sales and price are printed in every iteration
  while (sales < price){
    sales = sales + 1;
    price = price - 1;
    printf("Sales: %f\nPrice: %f\n\n", sales, price);
  }
  // Printing the character string
  printf("%s", inventory);
}

// Implementations of different data structures and algorithims in various software languages to practice different computer science concepts