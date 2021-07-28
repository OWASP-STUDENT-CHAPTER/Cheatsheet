const Joi = require('joi');
const mongoose = require('mongoose');

const Schema = mongoose.Schema;

const userSchema = new Schema({
    name: {
        type: String,
        required: true,
        minlength: 3,
        maxlength: 50
    },
    email: {
        type: String,
        required: true,
        minlength: 6,
        maxlength: 255,
        unique: true
    },
    password: {
        type: String,
        required: true,
        minlength: 8,
        maxlength: 1024 //maxlength id 1024 because we will be hashing our password
    }
})

const validateUser = (user) => {
    const schema = Joi.object({
        name: Joi.string().min(3).max(50),
        email: Joi.string().min(6).max(255).email(),
        password: Joi.string().min(8).max(255),
    });
    return schema.validate(user);
}

const User = mongoose.model('User', userSchema);
module.exports = {
    User,
    validateUser
};