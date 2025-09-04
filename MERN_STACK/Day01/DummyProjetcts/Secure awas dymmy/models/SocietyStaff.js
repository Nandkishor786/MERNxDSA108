const mongoose =require("mongoose");

const staffSchema =new mongoose.Schema({

  id:{
    type:String,
    required:true,
    unique:true,
  },
  name:{
    type:String,
    required:true,
  },
  position:{
    type:String,
    required:true,
  },
  salary:{
     type:Number,
     required:true,
  },
  phone:{
    type:String,
    required:true,
  },
  
});

const SocietyStaff = mongoose.model("SocietyStaff",staffSchema);

module.exports = SocietyStaff;