/*
redis 和 mysql 的存储对比
mysql存储在磁盘当中
 磁盘io与预读
 寻道时间 旋转延迟 传输时间 9ms
 内存数据库 100ns
 预读一次磁盘io 以页为单位 
 mysql提升搜索效率：index 索引 怎么组织索引数据 B+树 高度可控平衡多路搜索树


布隆过滤器

redis存储原理
KV Kstring  V有多种数据结构
如何组织这些数据？
红黑树         O（1）dict 字典
hash函数+数组实现的 （64位整数）
hash冲突 抽屉原理 k+1个苹果 放入k 个抽屉中 


*/