<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.10" tiledversion="1.10.2" name="Aliens" tilewidth="24" tileheight="16" tilecount="18" columns="6" objectalignment="center">
 <image source="Aliens.png" width="144" height="48"/>
 <tile id="0">
  <properties>
   <property name="name" value="gun_walk"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="4" y="0" width="16" height="16">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="0" duration="100"/>
   <frame tileid="1" duration="100"/>
   <frame tileid="2" duration="100"/>
   <frame tileid="3" duration="100"/>
  </animation>
 </tile>
 <tile id="4">
  <properties>
   <property name="name" value="gun_stand"/>
  </properties>
  <objectgroup>
   <object id="1" name="hitbox" x="4" y="0" width="16" height="16">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="4" duration="100"/>
   <frame tileid="5" duration="100"/>
  </animation>
 </tile>
 <tile id="6">
  <properties>
   <property name="name" value="claw_walk"/>
  </properties>
  <objectgroup>
   <object id="1" name="hitbox" x="4" y="0" width="16" height="16">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="6" duration="100"/>
   <frame tileid="7" duration="100"/>
   <frame tileid="8" duration="100"/>
   <frame tileid="9" duration="100"/>
  </animation>
 </tile>
 <tile id="10">
  <properties>
   <property name="name" value="claw_scrape"/>
  </properties>
  <objectgroup>
   <object id="1" name="hitbox" x="4" y="0" width="16" height="16">
    <ellipse/>
   </object>
  </objectgroup>
  <animation>
   <frame tileid="10" duration="100"/>
   <frame tileid="11" duration="100"/>
  </animation>
 </tile>
 <tile id="12">
  <properties>
   <property name="name" value="gun_die"/>
  </properties>
  <animation>
   <frame tileid="12" duration="50"/>
   <frame tileid="13" duration="50"/>
   <frame tileid="14" duration="50"/>
  </animation>
 </tile>
 <tile id="15">
  <properties>
   <property name="name" value="claw_die"/>
  </properties>
  <animation>
   <frame tileid="15" duration="50"/>
   <frame tileid="16" duration="50"/>
   <frame tileid="17" duration="50"/>
  </animation>
 </tile>
</tileset>
