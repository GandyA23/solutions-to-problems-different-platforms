// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

const MOD: number = 1000000007

function main(dataStr: string) : number
{
    const data: Array<string> = dataStr.split("\n")
    const numbers = data[1].split(" ")

    let answ: number = 1

    numbers.forEach((x:string) => {
        answ *= parseInt(x)
        answ %= MOD
    })
    
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
