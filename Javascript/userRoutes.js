const express = require('express');
const userController = require('../controllers/userController');
//const blogController = require('../controllers/blogController');

const router = express.Router();

router.get('/register', userController.user_registerPage);

router.post('/', userController.user_register);

module.exports = router;