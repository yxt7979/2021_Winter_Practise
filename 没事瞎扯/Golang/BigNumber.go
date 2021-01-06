package main

import(
	"fmt"
	"os"
	"bufio"
	"strings"
)

func solve(a,b string)(ans string){
	if len(a) == 0 && len(b) == 0 {
		ans = "0"
		return
	}
	var lena = len(a) - 1
	var lenb = len(b) - 1
	var tag int

	for lena >= 0 && lenb >= 0 {
		n1 := a[lena] - '0'
		n2 := b[lenb] - '0'
		sum := int(n1) + int(n2) + tag
		if sum >= 10 {
			sum -= 10
			tag = 1
		}else{
			tag = 0
		}
		c := sum + '0'
		ans = fmt.Sprintf("%c%s",c,ans)
		lena --
		lenb --
	}

	for lena >= 0 {
		last := a[lena] - '0'
		sum := int(last) + tag
		if sum >= 10 {
			sum -= 10
			tag = 1
		}else{
			tag = 0
		}
		c := sum + '0'
		ans = fmt.Sprintf("%c%s",c,ans)
		lena --
	}

	for lenb >= 0 {
		last := b[lenb] - '0'
		sum := int(last) + tag
		if sum >= 10 {
			sum -= 10
			tag = 1
		}else{
			tag = 0
		}
		c := sum + '0'
		ans = fmt.Sprintf("%c%s",c,ans)
		lenb --
	}
	if tag == 1 {
		fmt.Sprintf("1%s",ans)
	}
	return
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	for{
		result, _, err := reader.ReadLine()
		if err != nil {
			break
		}
		strSlice := strings.Split(string(result), " ")
		strNum1 := strings.TrimSpace(strSlice[0])
		strNum2 := strings.TrimSpace(strSlice[1])
		resMultiply := solve(strNum1, strNum2)
		fmt.Printf("%s\n", resMultiply)
	}
}