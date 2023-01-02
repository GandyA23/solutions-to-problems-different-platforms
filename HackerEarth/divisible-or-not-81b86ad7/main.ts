// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/

function main(dataStr: string) : number
{
    let existsLeftZeros: boolean = true;
    let leftZeros: number = 0;

    const data: Array<string> = dataStr.split("\n");

    const n: number = parseInt(data[0]);
    const arrayA: Array<string> = data[1].split(' ');

    arrayA.forEach((str: string) => {
        if (parseInt(str[str.length - 1]) == 0 && existsLeftZeros)
        {
            leftZeros++;
        }
        else
        {
            existsLeftZeros = false;
        }
    });

    const lastNumber: string = arrayA[arrayA.length - 1];
    const asnw: string = lastNumber[lastNumber.length - 1] == "0" && n - leftZeros > 1 ? "Yes" : "No";
    
    process.stdout.write(`${asnw}\n`);

    return 0;
}

let stdin_input: string = "";

process.stdin.on("data", function(input){
    stdin_input += input.toString();
});

process.stdin.on("end", function (){
    main(stdin_input);
});
