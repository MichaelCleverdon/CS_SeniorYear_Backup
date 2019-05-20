var mongoose = require('mongoose');
//Creates instance of schema, which will be used later
var Schema = mongoose.Schema;

var BookSchema = new Schema({
    title: String,
    author: String,
    category: String
});

//exports BookSchema to be used later by other things
module.exports = mongoose.model('Book', BookSchema);

