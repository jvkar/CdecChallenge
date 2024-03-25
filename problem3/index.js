const Array1 =[1,2,3,5,6,7]
const Array2=[3,4,6,7]
var A3=[]
for(let i=0 ; i<Array1.length;i++)
    for(let j=0 ; j<Array2.length; j++)
        if(Array1[i]==Array2[j])
            A3.push(Array1[i])
console.log(A3)