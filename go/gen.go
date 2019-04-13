package main

import (
	"fmt"
	"io/ioutil"
	"strings"
	"time"
)

func main() {

	buf, error := ioutil.ReadFile("../set.txt")
	data := string(buf)
	array := strings.Split(data, "\n")

	_ = error
	start := time.Now().UnixNano()

	j := 0
	for i := 0; i < len(array); i++ {
		string := array[i]

		if strings.Contains(string, "abcde") {
			j++
		}
	}

	elapsed := (time.Now().UnixNano() - start) / 1000000
	fmt.Printf("GO in %dms - %d\n", elapsed, j)
}
