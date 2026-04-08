
// let accountId= 111
// let accountName="cr"
// // console.log(accountId);
// // console.log(accountName);
// //console.table([accountId,accountName])

// // ***********************************type conversion in js*******************************************************
// let accountIdstring= String (accountId)
// //console.log(accountIdstring);
// //console.log(typeof accountIdstring);

// let accountNameNumber = Number(accountName)
// console.log(accountNameNumber);
// console.log(typeof accountNameNumber);

//************************************operation********************************************************************
// console.log("2"+3+4);
// console.log(1+1+"3");
// console.log("1"+1)
// console.log(2+"1")
// console.log("2"+"3"+4+3);
// console.log(4+3+"2"+"1");
// ***********************************conversion***********************************************************
// console.log(null == 0);
// console.log(null <= 0);


//**********************************************object ***************************************

// let object1={
//     name :"chaitanya",
//     number : 1111
// }
// console.table([object1.name,object1.number]);

// let object2=object1
// object2.number=2222
// console.log(object1.number);


// **********************************strings*******************************
// let name=new String("chaitanya")//-----type 1 to declare a string
// console.log(name);



//  let name="chaitanay"//----type 2 to declare a string
//  console.log(name.length);
//  let a=name.slice(2,8)
//  console.log(a);
 
// let roll_no=58
// // using back tiks
// console.log(`hello my name is ${name} and roll_no is ${roll_no}`);



// let name ="chaitanya"
// console.log(name[2]);


//***********************************************************numbers**************************************** */

// let number=11// type1 to declare number
// let num2=new Number(2)// type2 to declare a number
// console.log(number);
// console.log(num2);

// let n1=23.444
// let n2=1000000
// console.log(n1.toFixed(2));
// console.log(n1.toPrecision(2));
// console.log(n2.toLocaleString('en-IN'));

//************************************************math********************************************* */
//console.log(Math);

// console.log(Math.round(4.2));
// console.log(Math.ceil(4.7));
// console.log(Math.floor(4.7));


// console.log(Math.random());// it gives value between 0 to 1
// console.log(Math.floor(Math.random()*10)+1); // it gives value betn 1 to 10
//  let min=10
//  let max=20
//   console.log(Math.floor(Math.random()*(max - min+1))+min);// betn 10 to 20



//   Math.random()*(max - min+1)+min
// (0.3*(20-10+1))+10
// (0.3*11)+10
// 3.3+10
// 13.3

// ****************************************date****************************************
// let date =new Date()
// console.log(date);
//console.log(date.toISOString());
//console.log(date.toJSON());
//console.log(date.toLocaleDateString());//it display like dd/mm/yy
//console.log(date.toDateString());
 
// let date2=new Date(2023,0,10)//yy/mm/dd but month start from 0              ---1st method
// console.log(date2.toLocaleDateString());

// let date3=new Date("2025-05-10") ---------2nd method
// console.log(date3.toLocaleString());

//*******************************************************arrays******************************* */

// let array=[1,2,3,4,5] // type 1 to declare a array
// let arr1=new Array(1,2,3,4,5) // type 2 to declare a array

// // console.log(array);
// // console.log(arr1);

// console.log("Original array " ,array);

// const a=array.slice(1,3)// after slice original array remains same
// console.log("slice o/p = ",a);
// console.log("after slice o array = ",array);

// const b=array.splice(1,3)// after operation values are deleted form original array
// console.log("splice o/p = ",b);
// console.log("after splice o array = ",array);


// array concatination of 2 arrays

// let arr1=["apple","mango","banana"]
// let arr2=["red","orange","yellow"]

// console.log(arr1.concat(arr2))

// to combine multiple array using spread(...)operator
// let arr1=["apple","mango","banana"]
// let arr2=["red","orange","yellow"]
// let arr3=["notebook","pen","marker"]

// let a=[...arr1,...arr2,...arr3]
// console.log(a);


// const arr3=[1,2,3,[4,5,6],7,[8,[9]]]//if this conditon occure then use flat
// const new_arr=arr3.flat(2)
// console.log(new_arr);

// let a=[1,2,3,4]
// let b=[6,7,8]
// console.log(Array.from(a));


//************************************objects****************************************
//  const sym=Symbol("key")
// const myobj={
//     name:"chaitanya",
//     roll:58,
//     [sym]:"hello"

// }
// console.log(myobj["name"]);
// console.log(myobj.name);
// console.log(myobj[sym]);
// Object.freeze(myobj)// after freewzing value of object cannot change
//  myobj.name="cr"
//  console.log(myobj["name"]);
 
// const obj=new Object() //Singletone object
// const obj1={

// }
// \\ not a singletone object

// combining two objects

// const obj1={1:"one",2:"two"}
// const obj2={3:"three",4:"four"}
//  //const obj3=Object.assign({},obj1,obj2)
//  //using spread operator(...)
// const  obj3={...obj1,...obj2}
//  console.log(obj3);

// array of objects
// let a=[
//     {
//         id:1
//     },
//     {
//         name:"cr"
//     }
// ]
// console.log(a[1].name);

// const obj1={1:"one",2:"two"}
//  console.log(Object.keys(obj1));
//  console.log(Object.values(obj1)); output in array
// console.log(obj1.hasOwnProperty(1)); //for checking key is present or not in a object

// *************************object de structuring*************************************

// const a={
//     name:'cr'
// }
// const {name:n}=a

// console.log(n)


// **********************functions ******************************

// function a(){
//     console.log("hello");
    
// }
// a()

// function b(n1,n2){
//     return n1+n2
// }
// let c=b(1,2)
// console.log(c);
 
// const a=function(b){    //hoisting
//     console.log(b);
    
// }
// a(2)

// this in js

// const fun={
//     username:"cr",
//     password:123,

//     welcomeMessage:function(){
//         console.log(`${this.username}, welcome to website`);
//     }
// }
// fun.welcomeMessage()
// fun.username="chaitanya"
// fun.welcomeMessage()

//**************************************** */ arrow function ****************************
// const a=(c,d)=>{    // explicite declaration of  arrow function
//     return c+d
// }
// console.log(a(2,3));

// const a=(c,d)=> c+d    // 2nd method to declare arrow function
// console.log(a(2,3));

// const a=(c,d)=>(c+d) // implecite decleration of arrow function
// console.log(a(2,3));

// IIFE (immediately invoke function expression)

// (function a(){
//     console.log('hello');
// })()// calling paranthesis ew can pass value


// (function a(name){
//          console.log(`name is `+name);
// })("raj")

// ************************shift+alt+down_arrow******************************************
// select 1 + ctrl+d

//falsy values
// 0,-0,"",null,undefined,NaN,false,BigInt
//other than all true values

//*************************nullish coaliscing operator ??
//let a=null ?? "cr"
// let a=10 ?? 20
// let a=undefined ?? 10
// console.log(a);



// ternay operator
// condition ? true :false

// let a=10
// a >=20 ? console.log("a is > 20") :console.log("a is <20")

// ********************************for of loop****************************

// let a=[1,2,3,4,5]
// for(let num of a){
//     console.log(num);
    
// }
//    this loop is not for objects
//*************************************for in loop **********************/
// let a=[10,20,30,40,50]
// let b={
//     1:"one",
//     2:"two"
// }

// for(let key in a){
//     //console.log(key);//it prints key/ [index in array]
//    // console.log(`${key} : ${a[key]}`);   
// }

// for(let key in b){
//     console.log(`${key} : ${b[key]}`);
// }

//**********************************for each loop ********************/
//syntax = variable.forEach(function(){})
//let a=[1,2,3,4,5]
// a.forEach(function(i){
//     console.log(i)
// })

// a.forEach( (i)=>{ //arrow
//     console.log(i);
    
// })

// function print(i){
//     console.log(i);
    
// }
// a.forEach(print)

// let a=[    
//     {
//         name:"cr"
//     },
//     {
//         name:"chaitanya"
//     }
// ]
// a.forEach((i)=>{           // access array of object using forEach
//     console.log(i.name);
    
// })
// for each loop cant return any value insted of these we use filter

// let a=[1,2,3,4,5,6,7,8,9,10]
// let b=a.filter((i)=> i>5) // when we use {} return statemwt is used 
// let b=a.filter((i)=>{return i>n })
// console.log(b);

//*********************************8 */ reduce ******************************
// let a=[1,2,3]
// let b=a.reduce((acc,i)=>{return acc+i},0)
// console.log(b);

// ************* events***********************************************

// stopPropogation-> avoid bubbling
 
