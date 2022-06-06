# False negative in lsan



| example                                                      | 简单介绍                                                    |
| ------------------------------------------------------------ | ----------------------------------------------------------- |
| [c-leak-example2](https://github.com/dengking/sanitizers/tree/main/lsan/examples/c-leak-example2) | global pointer是live pointer                                |
| [cc-leak-example2](https://github.com/dengking/sanitizers/tree/main/lsan/examples/cc-leak-example2) | global pointer是live pointer                                |
| [cc-leak-example3](https://github.com/dengking/sanitizers/tree/main/lsan/examples/cc-leak-example3) | 实际泄漏了4次，但是只检测出3次                              |
| [cc-leak-example4](https://github.com/dengking/sanitizers/tree/main/lsan/examples/cc-leak-example4) | 实际泄漏了4次，但是只检测出3次                              |
| [cc-leak-example5](https://github.com/dengking/sanitizers/tree/main/lsan/examples/cc-leak-example5) | 实际泄漏了4次，但是只检测出3次                              |
| [cc-leak-example6](https://github.com/dengking/sanitizers/tree/main/lsan/examples/cc-leak-example6) | 实际泄漏了4次，但是只检测出3次                              |
| [oop-member-leak2](https://github.com/dengking/sanitizers/tree/main/lsan/examples/oop-member-leak2) | 实际泄漏了2次，但是只检测出1次                              |
| [std-vector-leak-example2](https://github.com/dengking/sanitizers/tree/main/lsan/examples/std-vector-leak-example2) | global pointer是live pointer，实际泄漏了多次，但是检测出0次 |
| [std-vector-leak-example3](https://github.com/dengking/sanitizers/tree/main/lsan/examples/std-vector-leak-example3) | 实际泄漏了8次，但是只检测出6次                              |
| [std-vector-leak-example4](https://github.com/dengking/sanitizers/tree/main/lsan/examples/std-vector-leak-example4) | 实际泄漏了8次，但是只检测出6次                              |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |
|                                                              |                                                             |

