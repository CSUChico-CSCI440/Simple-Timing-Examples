//https://gobyexample.com/time
//https://pkg.go.dev/time

package main

import (
    "fmt"
    "time"
    "strconv"
)

func main() {
    start := time.Now()
    time.Sleep(10 * time.Second)
    end := time.Now()
    elapsed := end.Sub(start)
    elapsed_string := strconv.FormatFloat(elapsed.Seconds(),'f',6,64)
    fmt.Printf("Time taken %s seconds\n", elapsed_string)
}