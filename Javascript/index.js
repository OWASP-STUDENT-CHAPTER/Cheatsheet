const mongoose = require('mongoose');

mongoose.connect('mongodb://localhost/playground', {useUnifiedTopology: true, useNewUrlParser: true, useCreateIndex: true})
    .then(() => console.log('Connected to MongoDB...'))
    .catch(err => console.log('Could not connect to MongoDB...', err))
;

const courseSchema = new mongoose.Schema({
    name: String,
    author: {
        type: String, 
        required: true,
        minlength: 3,
        maxlength: 255
    },
    category: {
        type: String,
        required: true,
        enum: ['web', 'mobile', 'network'],
        lowercase: true,
        // uppercase: true,
        trim: true
    },
    tags: {
        type: [ String ], //array of string
        //custom Validator
        validate: {
            isAsync: true,
            validator: function(v, callback){
                setTimeout(() => {
                    const result = v && v.length > 0;  //v is to check the array should have some value and if its length is greater than 1 then only it would be accepted
                    callback(result);
                }, 4000);
            },
            message: 'A course should have atleast one tag.'
        }
    }, 
    date: { type: Date, default: Date.now }, //will show current date automatically without assinging it manually whie declaring objects
    isPublished: Boolean,
    price: {
        type: Number,
        required: function() { return this.isPublished; }, //here we cannot use arrow function because it doesnot have this property hence we need to define the function in the normal way
        min: 10,
        max: 200,
        get: v => Math.round(v),
        set: v => Math.round(v)
    }
});

const Course = mongoose.model('Course', courseSchema); //making Course a class having properties (or shape) of courseSchema

async function createCourse(){

    const course = new Course({ //making course as an object of class Course
        name: 'Angular Course',
        category: 'web',
        author: 'Mosh', 
        tags: ['Angular', 'frontend'],
        isPublished: true,
        price: 25.32
    });
    
    try{
        const result = await course.save();
        console.log(result);
    }
    catch(ex) {
        for(field in ex.errors)
            console.log(ex.errors[field].message);
    }
}

//async function getCourses(){
    // Comparison operators

    // eq (equal)
    // ne (not equal)
    // gt (greater than)
    // gte (greater than or equal to)
    // lt (less than)
    // lte (less than or equal to)
    // in
    // nin (not in)

    //logical operators

    // or
    // and

    //const courses = await Course

        //using comparison operators

        //.find({price: 10}) //to find courses with price equals to 10
        //.find({price: { $gte: 10, $lte: 20 }}) //to find courses with price range 10 to 20
        //.find({ price: { $in: [10, 15, 20] } }) //to find courses that have price equals to 10, 15, 20
        
        //using logical operators

        //.find() need to write find() //for using 'and' or 'or' operator
        //.or([{author: 'Mosh'}, {isPublished: true}]) //to use or operator
        //.and([{author: 'Mosh'}, {isPublished: true}]) //to use and operator

        //using regular expressioin

        //.find({author: 'Mosh', isPublished: true}) //this will find author that would be having the name exactly equals to 'Mosh' string

        // To get Name starting with Mosh
        //.find({ author: /^Mosh/ }) //^ represent staring of the string and this notation is case sensitive 
        
        // To get name Ending with Mosh
        //.find({ author: /Mosh$/i }) //$ represents ending of the string and this notation is not case sensitive due to 'i'
        
        // To get name that contains Mosh inside it
        //.find({ author: /.*Mosh.*/i }) //.* means there can be any number of string (even 0) this means it can be used to find any name that contains Mosh in it whether it is in beginning or in the end or in the middle of the name; this is also not case sensitive due to 'i'

//}

async function getcourses(){
    const pageNumber = 2;
    const pageSize = 10;
    // /api/courses?pageNumber=2&pageSize=10

    const courses = await Course
        .find({ author: 'Mosh', isPublished: true})
        .skip((pageNumber - 1)*pageSize)
        .limit(pageSize)
        .select({name: 1, tags: 1});
        //.count();
    console.log(courses);
}

async function updateCourse(id){
    
    // Approach1: Query first
     
    // findById()
    // Modify its properties
    // Save()

    // const course = await Course.findById(id);
    // if(!course) return ;

    // One way to update
    // course.isPublished = true;
    // course.author = 'Another Author';

    //Another way to update
    // course.set({
    //     isPublished: true,
    //     author: 'Another Author'
    // });

    //To save
    // const result = await course.save();
    // console.log(result);


    // Approach2: Update first
    
    // update directly
    // Optionally: get the updated document

    const course = await Course.findByIdAndUpdate(id, {
        $set: {
            author: 'Jason',
            isPublished: false
        }
    }, {new: true});
    console.log(course);
}

async function removeCourse(id){
    const result = await Course.deleteOne({_id: id});
    console.log(result);
}

createCourse();
//getcourses();
//updateCourse('60e9510093e2cf565c94b0fc');
//removeCourse('60e9510093e2cf565c94b0fc');