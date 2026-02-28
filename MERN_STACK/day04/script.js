const input = document.querySelector("#search");
const button = document.querySelector(".btn");
const countryName = document.querySelector("#countryName");
const capital = document.querySelector("#capital");
const population = document.querySelector("#population");
const flag = document.querySelector("#flag");

const loading = document.querySelector("#loading");
const error = document.querySelector("#error");

button.addEventListener("click", function(){

  const country = input.value.trim();

   if(country === ""){
    alert("Please enter a country name");
    return;
  }

  error.textContent = "";
  loading.style.display = "block";

  fetch(`https://restcountries.com/v3.1/name/${country}`)
  .then(response => {
    if(!response.ok){
      throw new Error("Country not found");
    }
    return response.json();
  })
  .then(data => {
    const dataObj = data[0];
    countryName.textContent = dataObj.name.common;

     capital.textContent = "Capital: " + 
      (dataObj.capital ? dataObj.capital[0] : "N/A");

    population.textContent = "Population: " + 
      dataObj.population.toLocaleString();

    flag.src = dataObj.flags.png;

    loading.style.display = "none";
  })
  .catch(() => {
    error.textContent = "Country not found";
    loading.style.display = "none";
  });

});