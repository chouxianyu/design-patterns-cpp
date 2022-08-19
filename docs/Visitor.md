# Visitor

## 动机

* 在软件构建过程中，由于需求的改变，某些类层次结构中常常需要增加新的行为（方法），如果直接在基类中做这样的更改，将会给子类带来很繁重的变更负担，甚至破坏原有设计。
* 如何**在不更改类层次结构的前提下，在运行时根据需要透明地为类层次结构上的各个类动态添加新的操作**，从而避免上述问题？

## 模式定义

**表示一个作用于某对象结构中的各元素的操作**。使得可以在不改变（稳定）各元素的类的前提下定义（扩展）作用于这些元素的新操作（变化）。

## 结构

![](./images/Visitor.png)

## 要点总结

* double dispatch，两次多态
* Visitor模式中，定义基类Visitor时其实要求知道Element有几个子类并且固定，因为每个Visitor子类必须对Element的所有子类进行处理
* Visitor模式的最大缺点在于扩展类层次结构（增添新的Element子类)，会导致Visitor类的改变。因此Vistor模式适用于“Element类层次结构稳定，而其中的操作却经常面临频繁改动”的情况。
* 因为前提条件太严格，所以这个模式用得不多
* 注
  * Visitor模式体现了开放封闭原则
  * 其实就是在设计基类时就考虑到未来可能要新增方法
  * 设计模式的核心并非是让你能少写代码，而是定义并且隔离变化的部分和稳定的部分

## 代码

[https://github.com/chouxianyu/design-patterns-cpp/tree/master/Visitor](https://github.com/chouxianyu/design-patterns-cpp/tree/master/Visitor)
