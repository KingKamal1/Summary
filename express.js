import express from "express"; // importing the express library     | const express = require("express");
import mongo from "mongodb"; // importing the mongo library | const mongo = require("mongodb");
const app = express(); // creating an application of this library
app.use(express.json()); // to use body parameters
mongo.connect("serverLink"); // connect to server and return a promise from the database of the server

// =================================================================
// link/Path
app.get("/path", function (request, response) {
  response.send("Hello");
});
// link:port/Path (the default port is 8080)
app.listen(3000, function () {
  console.log("I am listening from port 3000");
});
// =================================================================
// request with parameters
app.get(
  "/summationLink/:variable1/:variable2?queryVariable1=15",
  function (request, response) {
    // header parameters
    let sum = request.params.variable1 + request.params.variable2;
    // query parameters
    let randomVariable = request.query.queryVariable1;
    // body parameters
    let bodyVariable = request.body.bodyVariable;
    // response
    response.send(sum, randomVariable, bodyVariable);
  }
);
// send a json response
app.get(
  "/link/:variable1/:variable2?queryVariable1=15",
  (request, response) => {
    response.json({
      variable1: request.params.variable1,
      variable2: request.params.variable2,
      queryVariable1: request.query.queryVariable1,
      bodyVariable: request.body.bodyVariable,
    });
  }
);
// send a file
app.get("/link", (request, response) => {
  response.sendFile(__dirname + "/relativePath");
});
// if you want to send a html file with variables embedded into it, use this instructions
app.get("/link", (request, response) => {
  // render function deal with the server as there is a folder called "views" and inside it there is a file called fileName.ejs
  // and to use the variables from json file in html file do the next <%=variableNameInJSONfile%>
  response.render("fileName.ejs", {
    name: "Kamal",
    age: 19,
  });
});
// =================================================================
