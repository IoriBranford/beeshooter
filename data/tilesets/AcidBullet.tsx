<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.9" tiledversion="1.9.1" name="AcidBullet" tilewidth="16" tileheight="8" tilecount="4" columns="4" objectalignment="right">
 <tileoffset x="3" y="0"/>
 <image source="AcidBullet.png" width="64" height="8"/>
 <tile id="0">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="11" y="2" width="4" height="4"/>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
  </animation>
 </tile>
 <tile id="2">
  <animation>
   <frame tileid="2" duration="100"/>
   <frame tileid="3" duration="100"/>
  </animation>
 </tile>
</tileset>
