package main

import (
	"fmt"
	"strings"
)

// Main function which acts as master for all functions
func main(){
	linearSearch()
}

// Linear search function which takes in an array of brands and searches each element for a user input
// The loop will print out messages using the Printf function to show the user the results of the search
func linearSearch() {
	var brands = [8]string{"Amazon", "Apple", "Google", "Microsoft", "Facebook", "IBM", "Oracle", "Adobe"}
	fmt.Print("Welcome to Best Buy! Here is what we carry. Please enter the brand you are looking for:\n" )
						
	for i := 0; i < len(brands); i++{
		fmt.Println(brands[i])
	}

	var userInput string
	fmt.Scanln(&userInput)

	for i := 0; i < len(brands); i++{
		if strings.ToLower(userInput) == strings.ToLower(brands[i]){
			fmt.Printf("We carry %s! Here you go! Have a nice day!", userInput)
			break
		} else if i == 7{
			fmt.Printf("Sorry, we don't carry %s in our store.", userInput)
		} else {
			continue
		}
	}
}
