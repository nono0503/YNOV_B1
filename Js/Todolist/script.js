// JavaScript Document
//@ts-check

/**
 * Todo list
 * ? Add / Remove / All Delete
 */

const select = element => document.querySelector(element);
const selectAll = element => document.querySelectorAll(element);

// Elements
const [input, list, addButton, selectedCounter, AllDelete, clearAll] = ['#actionInput', '#casesacocher', '#addItem', '#selectionCount', '#deleteItems', '#clearAll'].map(el => select(el));
let deletionCounter = 0;

// localStorage.removeItem( 'myTodoList' );
if (!localStorage['myTodoList'])
  localStorage.setItem('myTodoList', JSON.stringify(
    [{
      name: "Premier item de ma liste",
      checked: false,
      id: 0,
      priority: 2
    }]
  ));
let casesacocher = JSON.parse(localStorage['myTodoList']); // []

const addTodo = (name) => {
  if (name === '') return false;
  casesacocher.push({
    name,
    checked: false,
    id: casesacocher.length + 1,
    priority: select('#priority').value || 0
  });
  casesacocher = casesacocher.sort((a, b) => a.priority - b.priority);
  render();
  return true;
}


const render = () => {
  deletionCounter = 0;
  list.innerHTML = '';

  // render list
  casesacocher.forEach((todo, index) => {
    todo.id = index;
    let {
      name,
      checked,
      id,
      priority
    } = todo;
    let todoContainer = document.createElement('li');
    todoContainer.classList.add('todo-item');
    if (todo.priority == 0)
      todoContainer.classList.add('border-red');
    else if (todo.priority == 1)
      todoContainer.classList.add('border-orange');
    else if (todo.priority == 2)
      todoContainer.classList.add('border-green');

    let customCheckbox = document.createElement('span');
    customCheckbox.classList.add('custom-checkbox');

    let todoItemName = document.createElement('span');
    todoItemName.classList.add('todo-item__name');
    todoItemName.innerText = name;

    if (checked) {
      deletionCounter++;
      customCheckbox.innerHTML = '<i class="fas fa-check-square"></i>';
      todoContainer.classList.add('done');
    } else {
      customCheckbox.innerHTML = '<i class="fas fa-square"></i>';
    };

    customCheckbox.onclick = () => {
      casesacocher = [...casesacocher.slice(0, index), {
        name,
        checked: !checked,
        id,
        priority
      }, ...casesacocher.slice(index + 1)];
      render();
    };

    todoContainer.appendChild(customCheckbox);
    todoContainer.appendChild(todoItemName);
    list.appendChild(todoContainer);
  })

  //deletion counter
  if (deletionCounter == 0) selectedCounter.classList.add('hidden')
  else selectedCounter.classList.remove('hidden');
  selectedCounter.innerText = deletionCounter;

  // save state
  localStorage.setItem('myTodoList', JSON.stringify(casesacocher));
}


// add todo by pressing enter
document.addEventListener('keyup', e => {
  if (e.keyCode == 13)
    if (addTodo(input.value))
      input.value = '';
})

addButton.onclick = () => {
  if (addTodo(input.value))
    input.value = '';
};

AllDelete.onclick = () => {
  JSON.parse(JSON.stringify(casesacocher)).forEach(todo =>
    casesacocher = (todo.checked) ? casesacocher.filter(t => t.id != todo.id) : casesacocher)
  render();
}

clearAll.onclick = () => {
  if (window.confirm('Etes-vous sur de tout supprimer ?')) {
    casesacocher = [];
    render();
  }
}

selectAll('.custom-select__item')
  .forEach(span =>
    span.onclick = () => {
      select('#priority').value = span.getAttribute('data-value');
      select('#custom-select__selected').innerText = select('#priority > option:checked').innerText
    });

select('.custom-select').onclick = () =>
  select('.custom-select').classList.toggle('shown')

//Date
const months = [
  "Janvier",
  "Février",
  "Mars",
  "Avril",
  "Mai",
  "Juin",
  "Juillet",
  "Aout",
  "Septembre",
  "Octobre",
  "Novembre",
  "Décembre"
];

const date = new Date();

select('.appHeader > h1').innerText = `${ date.getHours() } h ${date.getMinutes() }, ${ date.getDate() } ${ months[ date.getMonth() ] } ${ date.getFullYear() }`;

render();


//navigator