const models = require('../models/user');
//const validateUser = require('../models/user');
const mongoose = require('mongoose');
var bodyParser = require('body-parser')

// create application/json parser

const user_registerPage = async (req, res) => {
    res.render('register', {title: 'Register New User'});
}

const user_register = async (req, res) => {
    console.log(req.body);
    const {error} = models.validateUser(req.body);
    if(error) return res.status(400).send(error.details[0].message);

    let user = await models.User.findOne({ email: req.body.email });
    if(user) return res.status(400).send('User Already Registered');

    user = new models.User({
        name: req.body.name,
        email: req.body.email,
        password: req.body.password
    });

    await user.save();

    res.render('index');
}

module.exports = {
    user_registerPage,
    user_register
}