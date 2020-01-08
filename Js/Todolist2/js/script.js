// JavaScript Document

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

const select = element => document.querySelector(element);

select('.todolistheader > h1').innerText = `${ date.getHours() } h ${date.getMinutes() }, ${ date.getDate() } ${ months[ date.getMonth() ] } ${ date.getFullYear() }`;





function dateFr()
{
     // les noms de jours / mois
     let jours = new Array("dimanche", "lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi");
     let mois = new Array("janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre");
     // on recupere la date
     let date = new Date();
     // on construit le message
     let message = jours[date.getDay()] + " ";   // nom du jour
     message += date.getDate() + " ";   // numero du jour
     message += mois[date.getMonth()] + " ";   // mois
     message += date.getFullYear();
     return message;
}

function heure()
{
     let date = new Date();
     let heure = date.getHours();
     let minutes = date.getMinutes();
     if(minutes < 10)
          minutes = "0" + minutes;
     return heure + "h" + minutes;
}






render();