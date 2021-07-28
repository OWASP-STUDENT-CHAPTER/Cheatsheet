const express = require('express');
const mongoose = require('mongoose');
const authRoutes = require('./routes/authRoutes');
const cookieParser = require('cookie-parser');

const app = express();

// middleware
app.use(express.static('public'));
app.use(express.json());
app.use(cookieParser());

// view engine
app.set('view engine', 'ejs');

// database connection
// const dbURI = 'mongodb+srv://shaun:test1234@cluster0.del96.mongodb.net/node-auth';
mongoose.connect('mongodb://localhost/smoothieUsers', { useNewUrlParser: true, useUnifiedTopology: true, useCreateIndex:true })
  .then((result) => app.listen(3000))
  .catch((err) => console.log(err));

// routes
app.get('/', (req, res) => res.render('home'));
app.get('/smoothies', (req, res) => res.render('smoothies'));
app.use(authRoutes);

// //cookies
// app.get('/set-cookies', (req, res) => {
  
//   // res.setHeader('set-cookie', 'newUser=true');

//   res.cookie('newUser', false);
//   res.cookie('isEmployee', true, {maxAge: 1000*60*60*24, secure: true }); //maxAge max time for which cookie is present here it is 1 day 1000(milli second)*60(seconds) and so on

//   res.send('You got the cookies');
// });

// app.get('/read-cookies', (req, res) => {
//   const cookies = req.cookies;
//   console.log(cookies.newUser);

//   res.json(cookies);
// });