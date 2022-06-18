<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.8" tiledversion="1.8.5" name="Aliens" tilewidth="24" tileheight="16" tilecount="12" columns="6" objectalignment="center">
 <image source="Aliens.png" width="144" height="32"/>
 <tile id="0">
  <properties>
   <property name="name" value="gun_walk"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="hitbox" x="2" y="2" width="20" height="12"/>
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
   <object id="1" name="hitbox" x="2" y="2" width="20" height="12"/>
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
   <object id="1" name="hitbox" x="2" y="2" width="20" height="12"/>
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
   <object id="1" name="hitbox" x="2" y="2" width="20" height="12"/>
  </objectgroup>
  <animation>
   <frame tileid="10" duration="100"/>
   <frame tileid="11" duration="100"/>
  </animation>
 </tile>
</tileset>
