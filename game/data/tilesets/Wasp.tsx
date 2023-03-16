<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.9" tiledversion="1.9.2" name="Wasp" tilewidth="40" tileheight="30" tilecount="12" columns="6" objectalignment="center">
 <image source="Wasp.png" width="240" height="60"/>
 <tile id="0">
  <properties>
   <property name="name" value="fly"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="8" y="8" width="24" height="12"/>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
  </animation>
 </tile>
 <tile id="2">
  <properties>
   <property name="name" value="hatch"/>
  </properties>
  <objectgroup>
   <object id="1" name="hitbox" x="8" y="8" width="24" height="12"/>
  </objectgroup>
  <animation>
   <frame tileid="2" duration="100"/>
   <frame tileid="3" duration="100"/>
   <frame tileid="4" duration="100"/>
   <frame tileid="5" duration="100"/>
  </animation>
 </tile>
 <tile id="6">
  <objectgroup>
   <object id="1" name="hitbox" x="8" y="8" width="24" height="12"/>
  </objectgroup>
  <animation>
   <frame tileid="6" duration="100"/>
   <frame tileid="7" duration="100"/>
  </animation>
 </tile>
 <tile id="8">
  <objectgroup>
   <object id="1" name="hitbox" x="8" y="8" width="24" height="12"/>
  </objectgroup>
  <animation>
   <frame tileid="8" duration="100"/>
   <frame tileid="9" duration="100"/>
   <frame tileid="10" duration="100"/>
   <frame tileid="11" duration="100"/>
  </animation>
 </tile>
</tileset>
