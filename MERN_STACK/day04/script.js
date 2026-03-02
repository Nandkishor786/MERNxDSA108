const input =document.querySelector('#search');
const button =document.querySelector('#btn');

const cname = document.querySelector('#cname');
const capital =document.querySelector('#capital');
const population =document.querySelector('#population');
const flagimg =document.querySelector('#flag');

const loading =document.querySelector('#loading');
const error =document.querySelector('#error');

loading.style.display = "none";

button.addEventListener('click', function (){

  const country = input.value.trim();
  if(country===""){
    error.textContent="Please enter the country name ";
    return;
  }
  
  error.textContent=""
  loading.style.display = "block";
  const startTime = Date.now();

  fetch(`https://restcountries.com/v3.1/name/${country}`)
  .then(response =>response.json())
  .then(data =>{
    console.log(data);
    loading.style.display ="none";
    const countryData = data[0];
    cname.textContent = "Country Name: " + countryData.name.common;
    capital.textContent = "Capital: "+ countryData.capital[0];
    population.textContent = "Population: " + countryData.population; 
    flagimg.src = countryData.flags.png;

    const elapsed = Date.now() - startTime;
    const remainingTime =1000 - elapsed;
      setTimeout(() => {
      loading.style.display = "none";
    }, remainingTime > 0 ? remainingTime : 0);
  })
  .catch(()=>{
    loading.style.display="none";
    error.textContent = "Country Not Found !";
  })

})