https://www.interviewbit.com/dassault-systemes-interview-questions/#use-of-cookies-and-cache
1. Cookies: Cookies are small text files that are stored on a user's computer by a website. They are used to remember information about the user, such as their preferences and browsing history. This information can be used to personalize the user's experience on the website, such as by remembering their login information or their preferred language. Cookies can also be used for tracking and analytics purposes, such as to understand how users navigate through a website or to deliver targeted advertising.

In the above image, the user/client logs in to the page and sends a request to the server. The server sends the response along with cookies that has tokenID which will be stored on the client side. This tokenID can be used for further validation of the credential. 

2. Cache: Caching is a technique used to speed up the loading time of a website. When a user requests a web page, the browser stores a copy of the page in its cache, or temporary storage. The next time the user requests the same page, the browser will check the cache to see if a copy of the page is available, and if so, it will load the cached copy instead of requesting the page from the server. This reduces the amount of data that needs to be transferred over the network and can improve the performance of the website. This has been described in the image below -

In summary, Cookies are used to remember information about a user and personalize their experience on a website, while caching is used to speed up the loading time of a website by storing a copy of the page in the browser's temporary storage


###3
15. Explain SOLID principles in Object Oriented Design?

SOLID is an acronym for the five principles of object-oriented design, which were introduced by Robert C. Martin and popularized by the book "Agile Software Development, Principles, Patterns, and Practices". The SOLID principles are:

    Single Responsibility Principle (SRP): A class should have only one reason to change, meaning that a class should have only one responsibility. This principle promotes the separation of concerns and makes the code more maintainable and less prone to errors.
    Open-Closed Principle (OCP): A class should be open for extension but closed for modification, meaning that a class should be designed in such a way that new functionality can be added without modifying the existing code. This principle promotes code reusability and maintainability.
    Liskov Substitution Principle (LSP): A derived class should be able to replace the base class without affecting the correctness of the program. This principle ensures that subclasses can be used interchangeably with their base classes and that the class hierarchy is well-formed.
    Interface Segregation Principle (ISP): A class should not be forced to implement interfaces it does not use, meaning that a class should not have to implement methods it does not need. This principle promotes code organization and maintainability.
    Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules, but both should depend on abstractions. This principle promotes the separation of concerns and decoupling of the code, making it more flexible and maintainable.
