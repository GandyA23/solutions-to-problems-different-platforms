// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

function main(dataStr: string) : number
{
    let n: number = parseInt(dataStr)
    let answ: number = 1

    while (n > 1)
    {
        answ *= n
        n--
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
