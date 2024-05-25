<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.10" tiledversion="1.10.2" name="WaspBoss" tilewidth="100" tileheight="100" tilecount="3" columns="3" objectalignment="center">
 <image source="WaspBoss.png" width="300" height="100"/>
 <tile id="0">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="25" y="25" width="50" height="50">
    <ellipse/>
   </object>
   <object id="2" name="sting" x="50" y="100">
    <point/>
   </object>
   <object id="3" name="mouth" x="80" y="65">
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
