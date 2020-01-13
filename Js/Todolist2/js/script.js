// JavaScript Document

//close = delete
var myNodelist = document.getElementsByTagName("LI");
var i;
for (i = 0; i < myNodelist.length; i++) {
  var span = document.createElement("SPAN");
  var txt = document.createTextNode("\u00D7");
  span.className = "close";
  span.appendChild(txt);
  myNodelist[i].appendChild(span);
}

// Click on a close button to hide the current list item
var close = document.getElementsByClassName("close");
for (i = 0; i < close.length; i++) {
  close[i].onclick = function () {
    var div = this.parentElement;
    div.style.display = "none";
  }
}

// Add a "checked" symbol when clicking on a list item
var list = document.querySelector('ul');
list.addEventListener('click', function (ev) {
  if (ev.target.tagName === 'LI') {
    ev.target.classList.toggle('checked');
  }
}, false);

//add
function addItem() {
  var li = document.createElement("li");
  var inputValue = document.getElementById("textItem").value;
  var t = document.createTextNode(inputValue);
  li.appendChild(t);
  if (inputValue === '') {
    alert("You must write something!");
  } else {
    document.getElementById("listItem").appendChild(li);
  }
  document.getElementById("textItem").value = "";

  var span = document.createElement("SPAN");
  var txt = document.createTextNode("\u00D7");
  span.className = "close";
  span.appendChild(txt);
  li.appendChild(span);

  for (i = 0; i < close.length; i++) {
    close[i].onclick = function () {
      var div = this.parentElement;
      div.style.display = "none";
    }
  }
}




$(document).ready(function () {

  let users = [];

  let jsonUsers = localStorage.getItem('data');
  let oldUsers = JSON.parse(jsonUsers);
  if (oldUsers) {
      users = oldUsers;
  }

  $('#saveForm').click(function() {
  let formData = {};
  formData.firstname = $('#firstname').val();
      users.push(formData);
      console.log(users);
  localStorage.setItem('data', JSON.stringify(users));
});

let myObj = { a : 123 };
let myObjJSON = JSON.stringify(myObj);

localStorage.setItem('myObj', myObjJSON);
let myObj2JSON = localStorage.getItem('myObj');
let myObj2 = JSON.parse(myObj2JSON);
  console.log(myObj2);

  if (users) {
      let i = 0;
      for (i = 0; i < users.length; i++) {
          $('p').text(users[i].firstname);
      }
  }

});