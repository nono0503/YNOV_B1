// JavaScript Document

// Add a "checked" symbol when clicking on a list item
var list = document.querySelector('ul');
list.addEventListener('click', function (ev) {
  if (ev.target.tagName === 'LI') {
    ev.target.classList.toggle('checked');
  }
}, false);

var ul = document.getElementById("listItem");

function addItem() {
  var item = document.getElementById("textItem").value;
  var itemTxt = document.createTextNode(item);
  var li = document.createElement("li");
  var btn = document.createElement("button");
  var btnx = document.createTextNode("X");
  btn.setAttribute("onclick", "remove()");
  btn.appendChild(btnx);
  li.appendChild(itemTxt);
  li.appendChild(btn);
  ul.appendChild(li);
  localStorage["list"] = ul.innerHTML
}

function remove() {
  var task = this.event.currentTarget.parentNode;
  ul.removeChild(task);
  localStorage["list"] = ul.innerHTML // updating localstorage
}

if (localStorage["list"]) {
  ul.innerHTML = localStorage["list"];
}