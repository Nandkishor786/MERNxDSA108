const mongoose =require("mongoose");

const VisitorSchema =new mongoose.Schema({
 
  id:{
       type:String,
       require:true,
  },

  name:{
    type:String,
    require:true,
  },
  phone:{
    type:String,
    require:true,
  },
  purpose:{
   type:String,
   require:true,
  },
  date:{
    type:Date,
    require:true,
    default: Date.now,
  }
});

const Visitor =mongoose.model("Visitor",VisitorSchema);

module.exports =Visitor;