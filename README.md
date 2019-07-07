# NorwegianTaskForce
Addon pack for the arma3 unit Norwegian Task Force (NTF).  
 
### Introduction

This github has been made for contribution purposes mainly within NTF. It consists of retextures and minor tweaks to current addons for Arma3. 

[Link to our website](https://ntfmilsim.no/)

For classnames you can go [here](https://drive.google.com/open?id=14DxzWqjp9WlpRB9yDjJroXFIcGJJzaiV6ghzJZemIDM)

### Hierarchy and coding rules

The addonpack has been divided up according to dependencies to other addons, RHS for instance. This means that anything that requires
RHS will be located within ntf_rhs. The same goes for Vanilla and VSM etc. The purpose of segregating the addon pack this way is 
modularity and quick changes to our own repository. See [Classname documentation](https://drive.google.com/open?id=14DxzWqjp9WlpRB9yDjJroXFIcGJJzaiV6ghzJZemIDM) for more information. 

**Naming**

* ntf_*type*_*variant*_*color*_*name*

*Example:*

prefix | type | variant | color | name
-------|------|---------|-------|------
ntf | cv90 | | wdl | vik
ntf | log | fuel | des | |
ntf | ber | cav | blk | |

Not every item requires all categories filled as seen above. The main focus is to be able to look at classnames and textures for 
instance and know what it is. 

**Braces**

* Opening brace on the same line as keyword
* Closing brace in own line, same level of indentation as keyword

*Example:*

```C++
class I_pilot_F ;
      class ntf_uni_pilot : I_pilot_F {
        scope = 1;
        displayName= "[NTF] Pilot Uniform";
        hiddenSelections[] = {"Camo", "Insignia"};
      };
```

**Comments**

* Strive to comment anything that might create confusion.
* Comment old values when testing, makes it easy to revert back. 

*Example:*

```C++
class I_pilot_F ;
      class ntf_uni_pilot : I_pilot_F {
        scope = 1; //Not listed for players. 
        /*displayName= "[NTF] Pilot Uniform";
        hiddenSelections[] = {"Camo", "Insignia"};*/
      };
```
