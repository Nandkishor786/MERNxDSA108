const express = require("express");
const Visitor = require("../models/visitor");
const router = express.Router();

router.post("/", async (req, res) => {
  try {
    const visitor = new Visitor({
      id: req.body.id,
      name: req.body.name,
      phone: req.body.phone,
      purpose: req.body.purpose,
      date: req.body.date || new Date(),
    });
    const saveVisitor = await visitor.save();
    res.status(201).json(saveVisitor);
  } catch (err) {
    res.status(400).json({ error: err.messsage });
  }
});

router.get("/all", async (req, res) => {
  try {
    const visitors = await Visitor.find();
    res.status(200).json(visitors);
  } catch (err) {
    res.status(500).json({ error: err.messsage });
  }
});

router.get("/:id", async (req, res) => {
  try {
    const visitor = await Visitor.findOne({ id: req.params.id });
    if (!visitor) {
      return res.status(404).json({ error: "Visitor Not Found !" });
    }
    res.status(200).json(visitor);
  } catch (err) {
    res.status(500).json({ error: err.message });
  }
});

//replace by id  
router.put("/:id", async (req, res) => {
  try {
    const replaced = await Visitor.findOneAndReplace({
      id:req.params.id},
      { 
        id:req.params.id,//Re-add id since replace replaces entire doc
        name: req.body.name,
        phone: req.body.phone,
        purpose: req.body.purpose,
        date: req.body.date || new Date(),
      },
      { runValidators: true }  
    );
      
    if(!replaced) return res.status(404).json({error:"Visitor not found !"});

    const updatedvisitor =await Visitor.findOne({id:req.params.id});
    res.status(201).json(updatedvisitor);
  } catch (err) { 
    res.status(500).json({error: err.message });
  }
});

//update partially
router.patch("/:id",async(req,res)=>{
  try {
      const upatedVisitor = await Visitor.findOneAndUpdate({id:req.body.id},
        {$set:req.body},
        {new:true,runValidators:true},
      );
      if(!upatedVisitor)return res.status(404).json({error:"visitor not found !"});
      res.status(201).json(upatedVisitor);
  } catch (err) {
     res.status(500).json({error:err.message});
  }
})



//delete the visitor
 router.delete("/:id", async (req,res)=>{
    try {
        
        const deleteVisitor = await Visitor.findOneAndDelete({id:req.params.id});
        if(!deleteVisitor) return res.status(404).json({error:"visitor not found !"});
        res.status(201).json(deleteVisitor);
    } catch (err) {
      res.status(500).json({error:err.message});
    }
 })

module.exports = router;
