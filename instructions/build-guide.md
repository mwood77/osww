> [👈 Back to main page](../README.md)

# Building your Winder

> *Make sure you've ordered all required materials first!*
> - [You can find the ***Bill of Materials*** here](./bom-requirements.md)

 ## Assembly legend and definitions
 - Text formatted `like_this` referes to a 3D printed model, by filename
 - Text formatted ***like this*** (bold & italicized) referes to a purchased part from the Bill of Materials
 - Bore - the long cylindrical hollow part of something. [^1]
 - Flush - smoothly aligned, not sticking out. [^2]


## Watch Jig Assembly

> :warning: This assembly may require epoxy glue and sandpaper/filing. The driveshaft assembly is a tight, friction fit, and must be centered inside the jig’s bore.

### Required parts:
- ***4mm rod***
- `watch_jig` model
- `watch_jig_collar` model
- `watch_jig_driveshaft` model

### Steps:
1. Cut the ***4mm rod*** to 110mm in length, then de-burr the ends with a file or sandpaper.
1. Test fit the `watch_jig` and `watch_jig_collar`. They should begin to push together by hand. If your printer is dialed in, these two parts will be a tight friction fit. Flip the assembly upside down and rest the collar against a flat surface. Place your thumbs overtop of the center of the `watch_jig` and push down. The `watch_jig_collar` should drive itself into the `watch_jig`’s body. 
    - If the `watch_jig` and `watch_jig_collar` don’t fit together, lightly sand/file the lip of the `watch_jig_collar` until it fits inside the `watch_jig`’s bore.
    <div align="center">
        <img src="images/watch_jig_assembly/jig+collar.jpg" alt="jig with collar loosely fit" height="300">  
        <img src="images/watch_jig_assembly/jig_on_flat_surface.jpg" alt="jig resting on flat surface" height="300"> 
        <img src="images/watch_jig_assembly/driving_collar_into_jig.jpg" alt="driving the collar into jig's bore" height="300"> 
    <div>
1. Test fit the ***4mm rod*** and `watch_jig_driveshaft` model. Again this will be a tight fit, but the rod should be able to move through the `watch_jig_driveshaft`’s bore with a twisting motion; hold the `watch_jig_driveshaft` and twist/push the metal rod through the bore. If this isn’t possible, file the `watch_jig_driveshaft`’s inner bore to fit.
    <div align="center">
        <img src="images/watch_jig_assembly/driveshaft+rod.jpg" alt="4mm rod + driveshaft" height="300">  
        <img src="images/watch_jig_assembly/assembled_driveshaft+rod.jpg" alt="assembled rod + driveshaft" height="300"> 
    <div>
1. **Read the next step in full before you begin!** 
1. Do a partial test fit  of the driveshaft/rod assembly and the jig/collar assembly. The driveshaft assembly should start to drive into the collar's bore with the same twist/push motion you used to drive the metal rod through the driveshaft. **DO NOT FULLY SEAT THE ASSEMBLIES YET**. Now do the following:
    - Remove the driveshaft assembly from the jig assembly again
    - Move the `watch_jig_driveshaft` to halfway down the ***4mm Rod***, like so
        <div align="center"><img src="images/watch_jig_assembly/assembled_driveshaft+rod.jpg" alt="assembled rod + driveshaft" height="300"></div>
    - Apply a drop of ***epoxy glue*** inside the `watch_jig_collar`'s bore with something small (ex. toothpick). Make sure the epoxy is at the bottom.
        <div align="center"><img src="images/watch_jig_assembly/collar_glue.jpg" alt="where to glue in collar" height="300"></div>
    - Take the driveshaft and jig assemblies in your hands; align the metal rod in the center of the `watch_jig_collar`'s bore. This should self-center. Place the jig assembly upside down on a flat surface and *gently* push the `watch_jig_driveshaft` down the bore until it fully seats. Pick up the complete assembly and verify that the driveshaft is vertically aligned and the assembly rotates true. Leave the assembly upside down (driveshaft points to the sky) and allow the epoxy to dry.
        <div align="center"><img src="images/watch_jig_assembly/subassemblies_final.gif" alt="final assembly gif"></div>


## Tensioner Assembly / High Position Tensioner Assembly

### Required parts:
- 1x ***608ZZ bearing***
- `tensioner_pulley` model
- `tensioner_pulley_mount` model

> :warning: This assembly may require epoxy glue and sandpaper/filing. The outter pulley and inner pulley mount should be a tight friction fit. However, not all 608ZZ bearings are made equal and may require a touch of glue to secure the models to the bearing.

### Steps:
1. Test fit the `tensioner_pulley` and ***608ZZ bearing***; these should should press-fit together. If they do not, lightly sand/file the inner bore of the `tensioner_pulley` until it begins to fit over the bearing. Drive the pulley down the bearing until the bearing and pulley faces are flush.
    <div align="center">
        <img src="images/tensioner_assembly/pulley+bearing.jpg" alt="tensioner pulley partial fit over 608ZZ bearing" height="300">  
        <img src="images/tensioner_assembly/pulley+bearing_assembled.jpg" alt="tensioner pulley and bearing flushed" height="300">  
    <div>
1. Test fit the bearing's center race overtop of the `tensioner_pulley_mount`; these should should press-fit together. If they do not, lightly sand/file the mounting peg of the `tensioner_pulley_mount` until the bearing begins to fit. Drive the bearing down the tensioner's mounting peg until the bearing and peg's faces are flush.
    <div align="center"><img src="images/tensioner_assembly/tensioner_assembled.jpg" alt="tensioner assembled" height="300"><div>
1. The bearing's **center** should not be loose or rotate around the mounting peg. If it does, apply a small drip of epoxy to the peg's base. If you find it difficult to tell, hold the tensioner mount in one hand and rotate the pulley. If you can feel any kind of vibration, you need to apply glue. If the bearing is a tight fit, you should feel no vibration.

## Mounting Dowel Assembly

> :warning: You must create 4 of these assemblies

> :warning: This assembly may require sandpaper/filing. The fitment between the `mounting_dowel` and `mounting_dowel_sleeve` is a tight friction fit.

### Required parts per assembly:
- 2x ***M3 Heat Set Nuts***
- `mounting_dowel` model
- `mounting_dowel_sleeve` model

1. Setup your soldering iron. We'll need it to insert our heat set nuts into each dowel end.
1. While your soldering iron is heating up, test fit the `mounting_dowel` and `mounting_dowel_sleeve`. They should begin to push together by hand. If your printer is dialed in, these two parts will be a tight friction fit. Flip the assembly upside down so that the open end of the `mounting_dowel_sleeve` is resting on a flat surface. Gently push down on the `mounting_dowel` until it slides into place and the face of the dowel and sleeve are flush.

    <div align="center">
        <img src="images/mounting_dowel/dowel+sleeve.jpg" alt="" height="300">  
        <img src="images/mounting_dowel/dowel_assembled.jpg" alt="" height="300">  
    <div>
1. **Read the next step in full before you begin!** 
1. Take your dowel assembly and one ***heat set nut***. Place the nut on the end of the dowel and make sure it's sitting straight. Take your _hot_ soldering iron and hold it against the nut. After a few seconds the nut should beging to melt into the dowel. Try to get it as straight as can be, and make sure the nut's face is flush with the end of the dowel. If it's gone 'too deep,' or crooked, hold your soldering iron against the nut until it is free to move inside the bore and re-adjust as necessary. It does not need to be perfect. Repeat the same step for the other end of the dowel.
     - [Here's a how-to video which shows this process](https://youtu.be/KqSmCHr4fdA?t=165). 
         - Note that this creator uses a special tool, which isn't needed. Any regular soldering tip can do this.
    <div align="center">
        <img src="images/mounting_dowel/dowel+heat_nut.jpg" alt="" height="300">
    </div>
1. Repeat all these steps for each dowel assembly. By the end, you should have 4 completed assemblies.

## Central Support Bearings

### Required parts:
- 2x ***608ZZ Bearings***
- `STRUCT_mid_plate` model
- `STRUCT_back_plate` model

1. Lay the `STRUCT_back_plate` on a flat surface, then lay a ***608ZZ bearing*** overtop of the center housing of each plate.
    <div align="center">
        <img src="images/bearing_press_fitting/bearing_finger_tight.jpg" alt="" height="300">
        <img src="images/bearing_press_fitting/bearing_proud.jpg" alt="" height="300">
    <div>
1. Gently tap the bearing down until it sits level and flush inside the center housing.
    <div align="center">
        <img src="images/bearing_press_fitting/bearing_flush.jpg" alt="" height="300">
    <div>
1. Repeat the steps above for `STRUCT_mid_plate`


[^1]: https://www.merriam-webster.com/dictionary/bore
[^2]: https://en.wiktionary.org/wiki/flushness#:~:text=(engineering)%20The%20state%20of%20being,smoothly%20aligned%2C%20not%20sticking%20out.


# Final Assembly

### Required parts:
- 4x completed mounting dowel assemblies
- Tensioner assembly
- Watch Jig Assembly
- `clutchless_drive_pulley_v2` model
- Assembled `STRUCT_front_plate`
- Assembled `STRUCT_mid_plate`
- Assembled `STRUCT_back_plate`

1. Get all required parts together and make sure they're complete assemblies; bearings press-fitted, heat nuts secure, sleeves, etc.
    <div align="center">
        <img src="images/final_assembly/final_assembly_1.jpg" alt="assembly 1" height="300">
    <div>
1. Begin by inserting the mounting dowel assemblies into the assembled `STRUCT_mid_plate`. Take note of the following numbers
    - **1.** Note the side that the motor housing is on
    - **2.** Note that the thicker end of the mounting dowel assembly faces towards the un-exposed bearing side of the `STRUCT_mid_plate`
        <div align="center">
            <img src="images/final_assembly/final_assembly_2.jpg" alt="assembly 2" height="300">
        <div>
1. Insert the remaining mounting dowel assemblies.
        <div align="center">
            <img src="images/final_assembly/final_assembly_3.jpg" alt="collection of required parts" height="300">
        <div>
1. Attach the `STRUCT_back_plate`. Make sure to align the motor housing holes.
    - Attach the **Tensioner Assembly** on the lower left hand corner
        <div align="center">
            <img src="images/final_assembly/final_assembly_4.jpg" alt="assembly 3" height="300">
            <img src="images/final_assembly/final_assembly_5.jpg" alt="assembly 4" height="300">
        <div>
1. Attach the `STRUCT_front_plate`.
    <div align="center">
        <img src="images/final_assembly/final_assembly_6.jpg" alt="assembly 6" height="300">
    <div>
1. Apply a small drop of epoxy glue on the watch jig assembly, here:
    <div align="center">
        <img src="images/final_assembly/final_assembly_7.jpg" alt="assembly 7" height="300">
    <div>
1. Begin inserting the watch jig assembly, but before fully seated, add a small drop of epoxy glue, here:
    <div align="center">
        <img src="images/final_assembly/final_assembly_8.jpg" alt="assembly 8" height="300">
    <div>
1. Fully seat the watch jig assembly and let dry.

1. Decide whether you want to use a clutchless drive pulley, or a clutch drive pulley. You may only build the clutch assembly if you've purchased the optional spring & felt, and printed these optional models:
    - `spring_holder_v3`
    - `top_hat_v2`

    #### Clutchless Drive
    1. After the assembly is dry, slide on the `clutchless_drive_pulley_v2` on the exposed 4mm rod. The model should be a tight fit, but if it isn't, you may attach a hot-melt nut and grub-screw or a fill the hot-melt nut hole with glue. Let dry.
        <div align="center">
            <img src="images/final_assembly/final_assembly_9.jpg" alt="assembly 8" height="300">
        <div>

    #### Clutch Drive
    1. > Optional: After the assembly is dry, slide an M4 nylon washer down the metal rod. This is optional because you may or may not need it.
    1. Slide the `spring_holder_v3` on to the exposed 4mm rod. The model should be a tight fit but must rotate freely around it's center axis.
    1. Place the spring inside the the `spring_holder_v3`, ensuring the metal rod sits centered within the diameter of the spring; the spring should self center within the `spring_holder_v3`, inside an inner channel. 
    1. Cut a piece of felt the same diameter as the `top_hat_v2` and cut a hole dead center; slide the felt onto the rod and let it sit ontop of the spring. 
    1. Take one hot-melt nut and melt it into the `top_hat_v2`'s horizontal bore. Thread a screw into the hot-melt nut.
        <div align="center">
            <img src="images/final_assembly/top_hat_hot_melt_location.png" alt="top hat hot melt location" height="300">
        <div>
    1. Slide the `top_hat_v2` down the rod and compress the spring. Tighten the screw in the top hat; it should not rotate on the rod. This will take some trial and error to get the slip-point correct.
    1. Beneath is a reference image to to show the order of each component during assembly. The red disk represents felt.
        <div align="center">
            <img src="images/final_assembly/clutch_exploded_assembly.png" alt="clutch exploded assembly" height="600">
        <div>

> If you're building a non-powered winder, you're done! If you're building a powered winder, continue beneath.

### Powered Winder Final Steps

1. Take you motor and solder 2 wires (approx 15cm in length, each) to the contacts on the back of your DC motor.
    <div align="center">
        <img src="images/motor/motor_solder_wires.jpg" alt="dc motor with wires attached" height="300">
    <div>
1. Open the drive belt bag, and attach 2 rubber belts along the length of the body. These will act as shockmounts and make the motor a tight fit. Make sure that the bands "cross" at the front of the motor. If you've done it right, the bands will run parallel down the length of the motor.
    <div align="center">
        <img src="images/motor/band_back.jpg" alt="motor band back" height="300">
        <img src="images/motor/band_front.jpg" alt="motor band front" height="300">
        <img src="images/motor/band_wrapping.jpg" alt="motor second band" height="300">
        <img src="images/motor/parallel_bands.jpg" alt="motor with parallel bands" height="300">
    <div>
1. Insert the motor into the large diameter bore, through the back and mid plate.
1. Slide the `motor_drive_pulley_v3` onto the end of the motor
1. [Complete the wiring diagram](./wiring-diagram.md); If you're building a **[Winderoo](https://github.com/mwood77/winderoo)** enabled winder, [see the Winderoo wiring diagram instead](https://github.com/mwood77/winderoo/blob/main/docs/wiring-diagram.md).
1. Insert the completed circuit between mid plate and back plate. You can affix the PCBs and switch using hot glue.
1. Mount a drive belt; loop it around the motor's drive pulley, the central pulley, and the tensioner pulley.
    - If the belt is too loose, try a smaller diameter belt, or swivel the tensioner to tighten the belt.
1. All done!

# Coupling Winders

### Required parts:
- 4x `multi_clip` model
- > Optional: High Position Tensioner Assembly

1. The `multi_clip` model can couple OSWW units together.
1. Attach 4 `multi_clip`s over the thicker diameter portions of the dowel assemblies of each OSWW unit - you should have 2 clips on top, and 2 on the bottom.
1. Couple the pulleys of the secondary OSWW to the first OSWW using a spare drive belt. If you need to adjust the tension, swap the tensioner assembly to a High Position Tensioner Assembly