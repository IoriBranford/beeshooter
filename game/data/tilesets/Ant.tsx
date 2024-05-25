<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.10" tiledversion="1.10.2" name="Ant" tilewidth="16" tileheight="16" tilecount="4" columns="4" objectalignment="center">
 <image source="Ant.png" width="64" height="16"/>
 <tile id="0">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="2" y="2" width="12" height="12">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
  </animation>
 </tile>
 <tile id="2">
  <objectgroup>
   <object id="1" name="hitbox" x="2" y="2" width="12" height="12">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="2" duration="100"/>
   <frame tileid="3" duration="100"/>
  </animation>
 </tile>
</tileset>
