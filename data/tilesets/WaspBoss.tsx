<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.9" tiledversion="1.9.2" name="WaspBoss" tilewidth="100" tileheight="100" tilecount="3" columns="3">
 <image source="WaspBoss.png" width="300" height="100"/>
 <tile id="0">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="25" y="40" width="50" height="25"/>
   <object id="2" name="sting" x="50" y="100">
    <point/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="50"/>
   <frame tileid="1" duration="50"/>
   <frame tileid="2" duration="50"/>
  </animation>
 </tile>
</tileset>
