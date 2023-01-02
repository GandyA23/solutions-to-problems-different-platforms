// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

function main(dataStr: string) : number
{    
    let answ: string = "YES"

    let start: number = 0
    let end: number = dataStr.length - 1

    for (let i=0; i<end; i++)
        if (dataStr[start++] != dataStr[end--])
        {
            answ = "NO"
            break
        }

    process.stdout.write(`${answ}\n`)
    return 0
}

let stdin_input: string = ""

process.stdin.on("data", function(input){
    stdin_input += input.toString()
})

process.stdin.on("end", function (){
    main(stdin_input)
})
