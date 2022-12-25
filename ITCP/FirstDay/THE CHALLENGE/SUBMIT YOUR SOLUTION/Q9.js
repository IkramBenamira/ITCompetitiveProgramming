var mysql = require('probleme8');
var con= mysql.createConnection({host: "localhost", user: "root", password:"database2022" });
con.connect(function(err){
    if(err)throw err;
    console.log("connected");
});