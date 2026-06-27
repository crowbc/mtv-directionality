
{
name: "GEO",
index: "world",
valid_begin: [0, 0],
valid_end: [0, 0],
mother: "", // world volume has no mother
type: "box",
size: [20000.0, 20000.0, 20000.0], // mm, half-length
//type: "tube",
//r_max: 20000.0,
//size_z: 20000.0,
//position: [0.0, 0.0, 0.0],
material: "air", //rock?
invisible: 1,
}

////////////////////////////////// Define detector properties.  ///////////////////////////////////

{
name: "GEO",
index: "detector",
valid_begin: [0, 0],
valid_end: [0, 0],
mother: "world",
type: "box",
size: [20000.0, 20000.0, 20000.0], // mm, half-length
//type: "tube",
//r_max: 20000.0,
//size_z: 20000.0,
//position: [0.0, 0.0, 0.0],
material: "Li6Doped_001wt",//material: "doped_water",
color: [0.2,0.2,0.2,0.1],
drawstyle: "solid"
}

