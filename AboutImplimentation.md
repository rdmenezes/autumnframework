# 功能 #
## 注入类型 ##
  * **map** 由于将map<string, void`*`>强制转换成map<string, classA`*`>应用，可能会出错（http://sharplogautumn.spaces.live.com/blog/cns!13AC373D7F3EAA87!126.entry ），所以应在应用中生成和释放map。可以采用某种方式（比如模板或宏），让应用很容易的自定义一个map基本类型。
  * **远程引用，WebService？**
## 注入方式 ##
修改一个Wrapper的setBeanPropertyValue()方法及Wrapper关于属性设置的宏定义，可以很容易的支持属性设置方法的重载。
## 其它 ##
  * **Bean的别名** 象Spring中那样可以定义别名，便于使用。
  * **循环依赖的检查** 及其它合法性检查
  * **支持名字空间** 在定义wrapper的文件中使用using namespace，只要在一个动态库中，不同的名字空间内不出现同名的类，就应该没有问题。
  * 动态连接库在内存的时间，可不可以当某个动态的所有对象都释放掉后，自动释放该动态库？以免占用资源。
  * 如何处理模板类？
# 自身实现框架 #
  * **微内核？**
  * **关于Wrapper** 当前的Wrapper是为依赖注入服务的，是否也应该支持其它的Wrapper，以提供其它服务？如远程调用。

# 未处理好的问题 #
  * bean由应用销毁的问题
  * 多线并发问题，在取singleton类型的Bean时会有问题。
  * 因为在Wrapper中调用bean的方法，对参数个数进行了判断，所以调用的方法不支持默认参数。