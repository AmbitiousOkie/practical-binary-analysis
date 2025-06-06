package main

import (
	"fmt"
)

var added int
var a = 5
var greeting string = "Hello, World!"

func main() {
	hello_world()
	added = add(1, 2)
	fmt.Println("The sum of 1 and 2 is:", added)
	set_to_zero(&a)
}

func hello_world() {
	fmt.Println(greeting)
}

func add(a int, b int) int {
	return a + b
}

func set_to_zero(a *int) {
	fmt.Println("The value of a before setting to zero:", *a)
	*a = 0
	fmt.Println("Address of a: ", &a)
	fmt.Println("Value of a is now set to: ", *a)
}
