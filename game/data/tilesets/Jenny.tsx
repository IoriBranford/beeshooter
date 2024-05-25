<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.8" tiledversion="1.8.5" name="Jenny" tilewidth="32" tileheight="32" tilecount="9" columns="9" objectalignment="center">
 <image source="Jenny.png" width="288" height="32"/>
 <tile id="0">
  <properties>
   <property name="name" value="flyfastA"/>
  </properties>
  <objectgroup draworder="index" id="3">
   <object id="2" name="hitbox" x="12" y="12" width="8" height="8">
    <ellipse/>
   </object>
   <object id="3" name="sting" x="16" y="28">
    <point/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="50"/>
   <frame tileid="1" duration="50"/>
  </animation>
 </tile>
 <tile id="1">
  <properties>
   <property name="name" value="flyslowA"/>
  </properties>
  <objectgroup>
   <object id="1" name="sting" x="16" y="28">
    <point/>
   </object>
   <object id="2" name="hitbox" x="12" y="12" width="8" height="8">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
  </animation>
 </tile>
 <tile id="2">
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="10" y="10" width="12" height="12">
    <ellipse/>
   </object>
  </objectgroup>
 </tile>
 <tile id="3">
  <properties>
   <property name="name" value="die"/>
  </properties>
  <animation>
   <frame tileid="3" duration="50"/>
   <frame tileid="4" duration="50"/>
   <frame tileid="5" duration="50"/>
   <frame tileid="6" duration="50"/>
  </animation>
 </tile>
 <tile id="7">
  <properties>
   <property name="name" value="flyfastB"/>
  </properties>
  <animation>
   <frame tileid="7" duration="50"/>
   <frame tileid="8" duration="50"/>
  </animation>
 </tile>
 <tile id="8">
  <properties>
   <property name="name" value="flyslowB"/>
  </properties>
  <animation>
   <frame tileid="7" duration="100"/>
   <frame tileid="8" duration="100"/>
  </animation>
 </tile>
</tileset>
