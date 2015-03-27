**[Manual Main Page](AutumnManual.md)** | **[Previous Chapter](Manual_2_WhatAutumnHas.md)**
# 3. How To Use Autumn #
Using Autumn framework to program include six steps.
## 3.1. Write POCO ##
POCO means Plain Old C++ Object. Because Autumn is not invasive to your old code, so you can write your classes as before. Don't inherit from any class, nor include any friendly member.
## 3.2. Create bean wrapper ##
In Autumn, we call class bean(like Spring). If a bean has properties to be injected or is injected to other bean as a property, we must create a wrapper for it using the macros that are defined in head file _BeanWrapperMacro.h_. _AUTUMNBEAN(beanname)_ and _AUTUMNBEAN\_END(beanname)_ must be used.
  * **Constructor**
  * **Property**
  * **Initializing and destroying method**
  * **Local Bean**
  * **Customized type**
## 3.3. Write main program ##
## 3.4. Compile program ##
## 3.5. Write configuration file ##
## 3.6. Run program ##

**[Manual Main Page](AutumnManual.md)**