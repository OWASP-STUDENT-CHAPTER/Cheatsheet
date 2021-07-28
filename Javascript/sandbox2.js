//New method of using promises without using .then() method in the asynchronous function
//async & await

const getTodos = async () => { //async keyword makes the normal function asynchronous meaning whenever it would be called it would return a promise and would not block the code below it fromm running
    const response = await fetch('todos/luigi.json'); //await keyword makes the program stay till the promise (here given by fetch api) has been resolved before assigning it to the variable (here response)
    const data = await response.json(); //In async function everything runs step by step means till the time response has not been assigned its value it wont start the process of assigning the value to other variables (here data)

    return data;
};

console.log(1);
console.log(2);

getTodos()
    .then(data => console.log('resolved: ', data))
    .catch(err => console.log('rejected', err.message))
;

console.log(3);
console.log(4);

//can you see the beauty of the code everthing runs step by step in the async function but when we call the async function it does not block our code written below it


//Old method of using fetch api and promises 
//fetch api

// fetch('todos/luigi.json').then((response) => {
//     console.log('Resolved', response);
//     return response.json(); //response.json returns a promise
// }).then(data => {
//     console.log(data);
// }).catch(err => {
//     console.log('Rejected', err);
// });