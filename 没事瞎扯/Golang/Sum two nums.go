package main

import(
	"fmt"
	"io"
)

func main(){
	var a, b int64
	for{
		_, err := fmt.Scanf("%d %d",&a,&b)
		if err == io.EOF{
			break
		}
		fmt.Println(a+b)
	}
}