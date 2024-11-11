console.log("Hello World"); //打印
  //alert('yo');  //弹窗



//量
let a = 30; //变量
a = 31;
const b = 30; //常量（数组对象中数据可以改变）
  //const声明时就要初始化数值
  //b = 31; 报错



//数据类型
const user = "YuukazeHa"; //String
const age = 30; //Number
const rate = 4.6; //Number
const isCool = false; //(true) Boolean
const x = null; //Null 被定义 定义为空
const y = undefined; //undefined 不存在定义
let z; //undefined
const l = Object;//引用类型
  //分为 Array数组 RegExp正则 Date日期 Math数学函数 Function函数
console.log(typeof user); //查看数据类型



//string
console.log("My name is " + user + " and I am " + age); //旧
console.log(`My name is ${user} and I am ${age}`); //新
const Hello = `My name is ${user} and I am ${age}`; //波浪键的``
console.log(Hello);

const s = "Hello World";
console.log(s.length); //打印s字符串的字符数
console.log(s.toUpperCase()); //将s字符串的字母全部转换为大写
console.log(s.toLowerCase()); //全部小写
console.log(s.substring(0, 5).toUpperCase()); //0表示起始，5表示终止 从0开始输出到5 结束。 叠加使用 .+
console.log(s.split("")); //将字符串分割为数组 双引号内表示分割点
const h = "Hello,World";
console.log(h.split(","));



//数组
const numbers = new Array(1, 2, 3, 4, 5); //构建数组1
console.log(numbers); //打印数组中所有元素
const fruits = ["apple", "orange", "pears", 10, null, true]; //构建数组2
fruits[3] = "greape"; //可以改变部分 不能全部改变
console.log(fruits); //可以是不同数据类型 和c语言一样 从0索引

fruits.push("mango"); //在数组末尾添加元素
fruits.unshift("strawberrie"); //在数组头部添加元素
console.log(fruits);
fruits.pop(); //删除数组末尾元素
console.log(fruits);

console.log(Array.isArray(fruits)); //检测是否是数组
console.log(fruits.indexOf("orange")); //查看该元素是数组中第几个



//对象 ??
const person = {
  firstName: "John",
  lastName: "Doe",
  age: 30,
  hobbies: ["music", "movies", "sports"],
  address: {
    street: "50 main st",
    city: "Boston",
    state: "MA",
  },  
};
console.log(person.firstName, person.lastName);



//if语句
const ifyj1 = 10;
if (ifyj1 === 10) {//双等号不考虑数据类型  三等号考虑数据类型
  console.log("x is 10");
}
const ifyj2 = "10";
if (ifyj2 === 10) {//双等号不考虑数据类型  三等号考虑数据类型
  console.log("x is 10");
} else {
  console.log("x is not 10");
}
  //同样可以使用else if
  //&& 与门  || 或门 



//条件判断 三目运算符
const sm = 10;
const color = sm > 10 ? "red" : "blue";//满足条件为前项 否则后项
console.log(color);



//switch语句
switch (color) {
  case "red":
    console.log("color is red");
    break;
  case "blue":
    console.log("color is blue");
    break;
  default:
    console.log("color is not red or blue");
}



//循环语句
  //For循环 计数器
for (let i = 0; i < 3; i++){
  console.log(`For:${i}`);
}
  //while循环
let i = 0;//在外部声明变量
while (i < 3) {
  console.log(`For:${i}`);
  i++;
}

  //循环对象




let username = document.getElementById('test');
console.log(username);

//