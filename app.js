var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var mongoose = require('mongoose');
var Book = require('./Book.model');

var db = 'mongodb://localhost/example';
var port = 8080;

mongoose.connect(db);

app.get('/', function(req, res){
    res.send('happy to be here');
});

app.get('/books', function(req, res){
    console.log('Getting all books');
    Book.find({},{_id:0}).exec(function(err,books){
        if(err){
            res.send('An error has occured');

        }else{
            console.log(books);
            res.json(books);
        }
    });
});
app.listen(port, function(){
    console.log('app listening on port ' + port);
});
