const express  =require("express");
const connectDB =require("./db");
const visitorRoutes =require("./routes/visitorRoutes");
const  staffRoutes =require("./routes/staffRoutes");

const app = express();
connectDB();

const PORT =5000;

// app.get("/",(req,res)=>{
//     // consol  e.log("Hello Secure Awas"); 
//        res.send("Hello Secure Awas"); 

// });

// app.get("/about",(req,res)=>{
//   // console.log("Hello About Secure Awas");
//     res.send("Hello About Secure Awas");
// });


app.use(express.json());
app.use("/visitors",visitorRoutes);
app.use("/staff",staffRoutes);


app.listen(PORT,()=>{
  console.log("server is rinining on http://localhost:5000");
  
});
