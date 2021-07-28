const mongoose = require('mongoose');
const { isEmail } = require('validator');
const bcrypt = require('bcrypt');

const userSchema = new mongoose.Schema({
    email: {
        type: String,
        requied: [true, 'Please enter an email'],
        unique: true,
        lowercase: true,
        validate: [isEmail, 'Please enter a valid Email']
    },
    password: {
        type: String, 
        required: [true, 'Please enter a password'],
        minlength: [6, 'Minimum length of Password should be 6 characters']
    }
});

// //fire a function after doc saved to db
// userSchema.post('save', function(doc, next) {
//     console.log('New user was created & saved', doc);
//     next();
// });

// //fire a function before a doc is saved to db
// userSchema.pre('save', function(next) {
//     console.log('user about to be created and saved', this);
//     next();
// });

//fire a function before a function is saved to db
userSchema.pre('save', async function(next){
    const salt = await bcrypt.genSalt();
    this.password = await bcrypt.hash(this.password, salt);
    next();
});

const User = mongoose.model('User', userSchema);
module.exports = User;