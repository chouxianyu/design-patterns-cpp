## 面向对象设计模式（C++）

在线文档：https://design-patterns-cplusplus.readthedocs.io/

## 设计模式的分类

从封装变化角度对设计模式的分类

* **“组件协作”模式** ：现代软件专业分工之后的第一个结果是“框架与应用程序的划分”，“组件协作”模式通过晚期绑定，来实现框架与应用程序之间的松耦合，是二者之间协作时常用的模式。
  * [Template Method](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/TemplateMethod.md)
  * [Observer / Event](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Observer.md)
  * [Strategy](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Strategy.md)
* **“单一职责”模式：** 在软件组件的设计中，如果责任划分的不清晰，使用继承得到的 结果往往是随着需求的变化，子类急剧膨胀，同时充斥着重复代码， 这时候的关键是划清责任
  * [Decorator](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Decorator.md)
  * [Bridge](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Bridge.md)
* **“对象创建”模式** ：绕开“new”来避免对象创建（new）过程 中所导致的紧耦合（编译时依赖具体实现类），从而支持对象创建的稳定。它是接口抽象之后的第一步工作
  * [Factory](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Factory.md)
  * [Abstract Factory](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/AbstractFactory.md)
  * [Prototype](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Prototype.md)
  * [Builder](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Bulider.md)
* **“对象性能”模式** ：面向对象很好地解决了“抽象”的问题，但是不可避免地要付出一定的代价。对于通常情况来讲，面向对象的成本大都可以忽略不计。但是某些情况，面向对象所带来的成本必须谨慎处理。
  * [Singleton](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Singleton.md)
  * [Flyweight](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Flyweight.md)
* **“接口隔离”模式** ：在组件构建过程中，某些接口之间直接的依赖常常会带来很多问题、甚至根本无法实现。采用添加一层稳定/间接（微观上比如指针，宏观上比如操作系统、虚拟机、依赖倒置原则）接口，来隔离本来互相紧密关联的接口是一种常见的解决方案
  * [Facade](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Facade.md)
  * [Proxy](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Proxy.md)
  * [Adapter](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Adapter.md)
  * [Mediator](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Mediator.md)
* **“状态变化”模式** ：在组件构建过程中，某些对象的状态经常会变化，如何对这些变化进行有效地管理？同时又维持高层模块的稳定？
  * [State](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/State.md)
  * [Memento](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Memento.md)
* **“数据结构”模式** ：一些组件在内部具有特定的数据结构，如果让客户程序依赖这些特定的数据结构，将极大地破坏组件的复用。将这些特定数据结构封装在内部，在外部提供统一的接口，来实现与特定结构无关的访问，是一种行之有效的解决方案
  * [Composite](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Composite.md)
  * [Iterator](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Iterator.md)
  * [Chain of Responsibility](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/ChainOfResponsibility.md)
* **“行为变化”模式** ：在组件的构建过程中，组件行为的变化经常导致组件本身剧烈的变化。“行为变化”模式将组件的行为和组件本身进行解耦，从而支持组件行为的变化，实现两者之间的松耦合
  * [Command](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Command.md)
  * [Visitor](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Visitor.md)
* **“领域规则”模式** ：在特定领域中，某些变化虽然频繁，但可以抽象为某种规则。这时候，结合特定领域，将问题抽象为语法规则，从而给出在该领域下的一般性解决方案。
  * [Interpreter](https://github.com/chouxianyu/design-patterns-cpp/blob/master/docs/Interpreter.md)


## References

- [Boolan首席软件专家李建忠《C++设计模式》(bilibili.com)](https://space.bilibili.com/34814155/channel/collectiondetail?sid=476629)
- [liu-jianhao/Cpp-Design-Patterns: C++设计模式 (github.com)](https://github.com/liu-jianhao/Cpp-Design-Patterns)
- [JakubVojvoda/design-patterns-cpp: C++ Design Patterns (github.com)](https://github.com/JakubVojvoda/design-patterns-cpp)
