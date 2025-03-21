let arr=prompt("space separated numbers").trim().split(" ");
arr.forEach((a, i, arr)=> arr[i] = parseInt(a));

function bubblesort(arr)
{
for (let i=arr.length; i>0; i--)
{
    for(let j=0; j<i;j++)
    {
        if (arr[j]>arr[j+1])
        {
            let temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
return arr;
}
sorted_array = bubblesort(arr);
console.log(sorted_array);