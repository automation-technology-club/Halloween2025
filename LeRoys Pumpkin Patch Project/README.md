# The Pumpkin Patch by LeRoy Miller

Many years ago I made a Pumpkin that had a PIR sensor, and used a Troll board to scream, or make a random "Spooky" sound.  And information about that project can be found here: https://www.instructables.com/A-Halloween-Scare-Machine-Using-a-PIR-a-3D-Printed/  

That project was put up, and recently made it's way back to the front of the pile of "things". And just in time for Halloween again.  Rather then doing the same thing over, I decided I wanted to go big - So I made a complete pumpkin patch.  

This project contains, The original Pumpkin, and 4 more 3D printed hollow/large pumpkins. 
8 solid medium size pumpkins (But I call them large from time to time), and 22 small solid pumpkins
7 hollow small pumpkins, 28 small gourds (various colors), and finally 4 ghost.  

The electronics, there is the troll board from above which is based on the ATMega 328 (Arduino UNO), 4 ESP8266 D1 Minis, A M5Stack Atom Motion with 4 servos, and generic MP3 player (Any old MP3 play can can do contiunous playback will work), A 7 port USB charger (wish I knew where I got that from, I've had it longer then the original project.), various cables to connect the Microcontrolers up, finally a ESP32 (Which has the same code on it as the ESP8266, long story I was going to use all ESP32 devices, but didn't have quite enough neopixel rings for what I needed. While looking for something in my pile of stuff = I came across the long forgotten ESP8266 D1 Mini with enough 7 pixel shields - it was easy Well almost enough, I had 3 shields, so one device stayed as an ESP32. The ESP32 really is over kill for this project, maybe if I was using one controller for all the lighting). So there are also 3 7 segment neopixel shields for the D1 minis, and 7 NeoPixel Diffused 8mm through hole LEDs from Adafruit being used.  

I used a piece of scrap burlap my sister had left over from a Jawa costume she made a few years ago, and some foam packing materials I had from one of the 3D printer boxes, and a planter tray that I had from Ikea.   

BTW Speaking of my sister, she saw what I was doing and decided she wanted some pumpkins too - So I ended up printing out 6 more for the meduim solid pumpkins, and a bunch (lost count) of the small ones.  I also upsized the meduim for two larger pumpkins just for her display. Which is nothing at all like mine.  

As far as the code goes, I keep that pretty simple - I've included the code that I wrote, which is for the Troll board and the Atom Motion board. The D1 Minis/ESP32 all used various bits of the example code from the fast led library, for the large pumpkins I just used the DemoReel100 (changed slightly for pin number and size of the neopixels), for the small hollow pumpkins that was just one D1 Mini I wire wrapped the in and out and power and ground to each pixel - putting the small wire wrap wires in heat shink tubing (I did not seal the tubing so I could reuse the wire and tubing later if needed). The small hollow pumpkins where hot glued to the tops of bottle caps which had the LEDs stuck in them. (Really fast and really simple)
I used the gourds to help hid the shink tubing, and hot glued some bits of burlap to the bottle caps to help hide those.  


I say really fast none of this was fast, the large hollow pumpkins took 4ish hours each to print, the various others took any where from a couple of hours (Per 6) or 4ish hours (per 4), I am luck to have a multi-color 3D printer, and did colorize the medium/small pumpkins. Adding green leafs, and light brown steam. But this does add print time and purges.  

The small hollow pumpkins took way long then they should have, but that being said I did colorize them, and they turned out looking pretty good if I do say so myself.  So I had the printer use black for the face, and the small steam is a light brown.  

Between the pumpkins I made for myself and the ones for my sister I used just about 2 rolls of filament. Who would have thought it when I started this project, it was supposed to be something small and fast.  

The ghost I scaled them down to I believe 35%, and added black for the eyes - adding time to the print, these are solid ghosts I want to say it only took about 3 hours to print all 4 of those.  

The gourds, I printed them in batches of 8 at a time, they were scaled down from the original file to 45% but still took 2 hours I believe. Of course to get different colors I just switched out the filament when they were done and printed them again.   
The yellow set of gourds were printed individually because my yellow filament decided to start to tangle up, I only printed 4 of those, but it took longer to print them (not because of the tangles, I'm honestly not sure why but it took almost the same amount of time to print one as it did to print eight)   

If I were to do this again, I would get rid of the ESP32 and just use D1 Minis so below you'll see that is what I did.  

Parts List:  

5 D1 Minis - https://www.wemos.cc/en/latest/d1/d1_mini.html You can find these from AliExpress, eBay, Amazon just about any place that has microcontrollers. Probably the best place to get them is from the official store on Aliexpress https://lolin.aliexpress.com/store/1100907255  

You will need at least 4 neopixel shields  
4 D1 Mini 7 which I'm honestly not sure where to get any more, the official store doesn't list them, and I didn't see them on eBay (Another option might be to get the 8x8 RGB Shield and dim it down a lot these are very bright)   

The Troll board http://www.engineeringshock.com/the-troll-project-page.html Honestly I'm not sure if this is still being sold either, Patrick the creator of the board has been really accepting of feedback and he may still have some of the parts or can make one.  

For mine I needed at least 7 8mm neopixels (Which I had some left over from another project) https://www.adafruit.com/product/1734 But it does look like you can still get these.  I'm sure I bought a bunch of these off eBay and overall it was cheaper to do it that way.  

M5Stack Atom Motion - which they still sell a version of https://shop.m5stack.com/products/atomic-motion-base-v1-2-with-power-monitor  
only now you'll also need a atom lite https://shop.m5stack.com/products/atom-lite-esp32-development-kit
Seems they don't sell it as a complete unit any more (too bad really)  

You'll also need 4 hobby 9g servos.  

Some USB cables and away to power all the devices up.  
If you plan on adding sound any MP3 player should work, and of course some powered speakers.  
You'll need a couple of audio cables for those as well. I found the Troll board acutally didn't work well with my MP3 player plugged into it, and I had to put the cable in about half way to hear both the spooky sounds and the music being played -I don't know if it's the troll device, the cable or the MP3 player - everything seems to work fine if I remove one from the equation and try each cable.  

The code for the Troll board is included, since the troll board doesn't have a programming port you will need to carefully remove the ATMEGA328 and either put it in an Arduino Board, or use an external programmer to program it. Either way be very careful, I bent a couple of pins this time around, and that can't be good.  
 
And I detailed using it here: https://www.instructables.com/A-Halloween-Scare-Machine-Using-a-PIR-a-3D-Printed/   

The STL Files:  

The gourd I used gourd 01 scaled to 45% https://www.thingiverse.com/thing:495153 by pmoews there are many different gourds included, so the one I choose might not be what you like.  

Halloween Pumpkin by 3DWP (original link: https://www.thingiverse.com/thing:134066) unfortunally it seems this model has been removed, fortunally Internet Archive was my friend - And the model can be found here
https://web.archive.org/web/20151029074704/https://www.thingiverse.com/thing:134066
I believe I used just the Halloween Pumpkin.stl file  

Pumpkin base by idig3d https://www.thingiverse.com/thing:1068295  
or Pumpkin base dual wire by didjareally https://www.thingiverse.com/thing:2551391 These are the same model, only the 2nd is a remix, and depending on how you want to wire the displays up, might be a better choice. I printed this in black, and used the dual wire version, but I didn't need too in my setup.  

Pumpkin by AdamRW17 https://www.thingiverse.com/thing:1815676 This is the solid pumpkin that was resized a few times for different sizes. It was easy to add color changes to it.  

The Ghost (Cute Halloween Ghost) by DraftAxis https://www.thingiverse.com/thing:7149390 this one contains a zip file with the STL files in it. Why did they did this way? I have no idea. I did try to print a scaled version of the jack-o-lantern for mine but it was so small it failed.  The cute ghost printed without issues, and as I said above, I colorized the eyes. It turned out good I think, there is a version included in the zip that has the eyes a printable model so you don't need an AMS or ACE.  

Tea_light_pumpkin3 (Halloween pumpkin tealights) by Recticle https://www.printables.com/model/1017971-halloween-pumpkin-tealights I honestly can't remember if I resized this model or not, I know that I printed some with black eyes/mouth, and a few without being colored. The steams I colored with a light brown.   

The MP3s were all found on Pixabay, there is a credit file within the MP3 directory. I think they are about 8 minutes or less total, and I have the MP3 player set to repeat.  


I think that is about it, I took a lot of pictures they are in the pictures directory.  

You will see early versions, the group as a whole made suggestions, and I tried to make changes - hence in a lot pictures you will see small pumpkins on the servos, which it was suggested they needed faces - and I decided ghosts would be more fun.  

Thanks for looking at this project, hopefully we will have many more soon.  

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  

https://ko-fi.com/lfmiller  
https://www.paypal.me/KD8BXP  

## Other Projects

https://kd8bxp.blogspot.com/  
https://www.instructables.com/member/kd8bxp/  

## Social Media

https://mastodon.radio/@kd8bxp  
https://peertube.otakufarms.com/a/kd8bxp/video-channels  

## Credits

Copyright (c) 2025 LeRoy Miller and maybe others

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
