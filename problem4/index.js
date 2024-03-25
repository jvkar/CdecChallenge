function addition (a,b){
    return a+b
   }
   function subtruction (a,b){
    return a-b
   }
   function multiplication (a,b){
    return a*b
   }
   function devision (a,b){
    return a/b
   }
   function power(a,b){
    return Math.pow(a,b)
   }
   function factorial(a){
    var fact=1
    for(let i=a; i>0;i--)
        fact*=i
    return fact
   }
   const a=5
   const b=6
   function eval (a,b){
    return{
        addition: addition(a,b),
        subtruction: subtruction(a,b),
        multiplication: multiplication(a,b),
        devision: devision(a,b),
        factorial: factorial(a)
    }

   }
   console.log(eval(a,b))