function primefactors(n)
{
    let prime_nums_bool = [];
    for(let i=0 ; i<n ;i++)
        prime_nums_bool.push(true);
    
    prime_nums_bool[0]= prime_nums_bool[1]=false;
    for (let i=2; i<n; i++)
    {
        let j=2;
        while(i*j<=n)
        {
            prime_nums_bool[i*(j++)]=false;
        }
    }
    let prime_nums =[];
    for (let i in prime_nums_bool)
    {
        if (prime_nums_bool[i]==true)
        {
            prime_nums.push(parseInt(i));
        }
    }
    return prime_nums;
}

let n=parseInt(prompt("space separated numbers"));
console.log(primefactors(n));