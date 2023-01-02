// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/

function main(dataStr: string) : number
{
    const code: string = dataStr.trim()
    
    // Only get numbers 
    const numbers: Array<Array<number>> = []

    code.split(/[A-Z\-]/g).forEach((x: string) =>
        numbers.push(
            x.split("").map((y: string) => parseInt(y))
        )
    )
    
    let existsVowel: boolean = /[AEIOUY]/g.test(code)
    let allEven: boolean = true

    numbers.forEach((elements: Array<number>) => {
        for (let i=0; i < elements.length-1; i++)
            if ((elements[i] + elements[i+1]) % 2 != 0)
            {
                allEven = false
                break;
            }
    })

    process.stdout.write(`${!allEven || existsVowel ? 'invalid' : 'valid'}\n`)
    return 0
}

let stdin_input: string = ""

process.stdin.on("data", function(input){
    stdin_input += input.toString()
})

process.stdin.on("end", function (){
    main(stdin_input)
})
