const express = require('express');
const blogController = require('../controllers/blogController'); //.. means to come out of the current folder

const router = express.Router();

router.get('/', blogController.blog_index);

router.get('/create', blogController.blog_create_get); //keep /create above the /:id otherwise it will start to treat 'create' as an id which it is not

router.get('/:id', blogController.blog_details);

router.post('/', blogController.blog_create_post);

router.delete('/:id', blogController.blog_delete);

module.exports = router;