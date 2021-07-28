const express = require('express');
const morgan = require('morgan');
const mongoose = require('mongoose');
const blogRoutes = require('./routes/blogRoutes');
const userRoutes = require('./routes/userRoutes');

//express app
const app = express();

//defining port
const port = process.env.PORT || 3000; //Ways to set process.env.PORT in windows: $env:PORT=3500 for powershell and set PORT=3500 for comand prompt

//connect to MongoDB
const dbURI = 'mongodb+srv://netninja:test1234@nodenuts.qwqdf.mongodb.net/node-tuts?retryWrites=true&w=majority';
mongoose.connect(dbURI, { useNewUrlParser: true, useUnifiedTopology: true }) //connecting to database takes time hence we are using promises here.
    .then((result) => {
        app.listen(port)
        console.log(`Listening to port ${port}`)
    }) //app.listen is tranfered here, because we donot want to start our application before it is connected to database;
    .catch((err) => console.log(err));

//register view engine
app.set('view engine', 'ejs');

//listen for requests
//app.listen(3000);

//middleware & static files

//method without the use of 3rd party middleware (here morgan)
// app.use((req, res, next) => {
//     console.log('new request made:');
//     console.log('host: ', req.hostname);
//     console.log('path: ', req.path);
//     console.log('method: ', req.method);
//     next();
// });

app.use(morgan('dev'));
app.use(express.urlencoded({extended: true}));
app.use(express.static('public')); //public is the name of the folder that we are gonna use for saving our static files like css, js, images.

// mongoose & mongo tests
// app.get('/add-blog', (req, res) => {
//     const blog = new Blog({
//       title: 'new blog',
//       snippet: 'about my new blog',
//       body: 'more about my new blog'
//     })
  
//     blog.save()
//       .then(result => {
//         res.send(result);
//       })
//       .catch(err => {
//          console.log(err);
//       });
//   });

// app.get('/all-blogs', (req,res) => {
//     Blog.find()
//     .then((result) => {
//         res.send(result);
//     })
//     .catch((err) => {
//         console.log(err);
//     });
// })

// app.get('/single-blog', (req, res) => {
//     Blog.findById('60ba2941b7074823dc62c131')
//     .then((result) => {
//         res.send(result);
//     })
//     .catch((err) => {
//         console.log(err);
//     });
// })

app.get('/', (req, res) => {
    //res.send();
    //res.sendFile('./views/index.html', {root:__dirname}); //we have written root: __dirname so that express should know that our location of html file is relative to our directory name
    res.redirect('/blogs');
    //res.render('index', {title: 'Home', blogs});
});

app.get('/about', (req, res) => {
    //res.send();
    //res.sendFile('./views/about.html', {root:__dirname}); 
    res.render('about', {title: 'About'});
});

//Reminder not to remove comments from next 3 lines; I don't know why isn't it working;
//Okay now I know the reason why it wasn't working, the reason is as follows:
//keep /create above the /:id otherwise it will start to treat 'create' as an id which it is not
// app.get('/blogs/create', (req, res) => {
//     res.render('create', { title: 'Create a new blog' });
// });

//redirects
app.get('/about-us', (req,res) => {
    res.redirect('/about');
});

//routes
app.use('/blogs',blogRoutes);
app.use('/users', userRoutes);

//404 page
app.use((req, res)=> { //It must be at last of the code because it executes if none of the above .get request is matched 
    //res.status(404).sendFile('./views/404.html', {root: __dirname});
    res.status(404).render('404', {title: '404'});
});