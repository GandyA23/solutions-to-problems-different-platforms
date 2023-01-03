// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

function main(dataStr: string) : number
{
    let data: Array<number> = dataStr.split(" ").map((x: string) => parseInt(x))
    let answ: number = 0
    
    const k: number = data[2]
    
    data.pop()
    
    data = data.sort((a, b) => a - b)
    
    for (let i=data[0]; i<=data[1]; i++)
        answ += i % k == 0 ? 1 : 0

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
