<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.8" tiledversion="1.8.5" name="AlienMind" tilewidth="32" tileheight="48" tilecount="4" columns="4" objectalignment="center">
 <image source="AlienMind.png" width="128" height="48"/>
 <tile id="0">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="4" y="8" width="24" height="24"><ellipse/></object>
   <object id="2" name="brain" x="16" y="10">
    <point/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
   <frame tileid="2" duration="100"/>
   <frame tileid="3" duration="100"/>
  </animation>
 </tile>
</tileset>
