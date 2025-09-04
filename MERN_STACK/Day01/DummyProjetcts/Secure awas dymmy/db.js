const mongoose =require("mongoose");
async function connectDB(){

   try {
       await mongoose.connect("mongodb+srv://nandkishorpal0404:public2026@cluster0.u95dt.mongodb.net/secure_awas_dummy?retryWrites=true&w=majority&appName=Cluster0" ,{
        useNewUrlParser: true,
        useUnifiedTopology: true
       });
        console.log("MongoDB Atlas connected");
        
   } catch (error) {
      console.error("MongoDB connection faled",error);
      
   }

}

module.exports =connectDB;