
const express =require("express");
const SocietyStaff =require("../models/SocietyStaff");
 const router  =express.Router();



//add the stff member
router.post("/", async(req,res)=>{
    try {
      const staffMember = new SocietyStaff({
       id:req.body.id,
       name:req.body.name,
       position:req.body.position,
       salary:req.body.salary,
       phone:req.body.phone,
    });

    const saveStaffMember = await staffMember.save();
    res.status(201).json(saveStaffMember);
    } catch (err) {
       res.status(400).json({error:err.message});
    }
})


//get all staff members
router.get("/all", async (req,res)=>{
   try {
       const allStaffMembers = await SocietyStaff.find();
      res.status(200).json(allStaffMembers);
   } catch (err) {
      res.status(500).json({error:err.message});
   }
})

///get stffMember by id
router.get("/:id", async(req,res)=>{

     try {
      
        const staffMemberByid = await SocietyStaff.findOne({id:req.params.id});
        if(!staffMemberByid){
        return res.status(404).json({error:"Staff Member is not found !"});  
        }
       res.status(200).json(staffMemberByid);
     } catch (err) {
       res.status(500).json({error:err.message})  
     }
});

module.exports =router;