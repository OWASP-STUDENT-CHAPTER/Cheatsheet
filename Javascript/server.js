const http = require('http');
const fs = require('fs');
const _ = require('lodash');
const { log } = require('node:console');

const server = http.createServer((req, res) => {
    //lodash
    const num = _.random(0, 20);
    console.log(num);
    
    // const greet = _.once(() => {
    //     console,log('Hello');
    // });

    // greet();
    // greet();

    
    //set header content type
    res.setHeader('content-Type', 'text/html');
    // res.write("Hello World!!");
    // res.end();
    let path = './views/';
    switch(req.url){
        case '/':
            path += 'index.html';
            res.statusCode = 200; //status code 200 that everything is OK
            break;
        case '/about':
            path += 'about.html';
            res.statusCode = 200; 
            break;
        case '/about-me':
            
            res.statusCode = 301; //status code 301 that is we are redirecting this url to some other
            res.setHeader('Location', '/about'); //redirecting it to /about url
            res.end();
            break;
        default:
            path += '404.html';
            res.statusCode = 404; //status code 404 means the page is missing
            break;
    }
//send an html file
    fs.readFile(path, (err, data) => {
        if(err){
            console.log(err);
            res.end();
        }else{
            // res.write(data);
            res.end(data);
        }
    })
});

server.listen(4000, 'localhost', () => {
    console.log('Listening for requests on port 4000');
});