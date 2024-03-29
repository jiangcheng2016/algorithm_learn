/*
146. LRU 缓存机制

运用你所掌握的数据结构，设计和实现一个  LRU (最近最少使用) 缓存机制 。
实现 LRUCache 类：

LRUCache(int capacity) 以正整数作为容量 capacity 初始化 LRU 缓存
int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 -1 。
void put(int key, int value) 如果关键字已经存在，则变更其数据值；如果关键字不存在，则插入该组「关键字-值」。当缓存容量达到上限时，它应该在写入新数据之前删除最久未使用的数据值，从而为新的数据值留出空间。
 

进阶：你是否可以在 O(1) 时间复杂度内完成这两种操作？

 

示例：

输入
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
输出
[null, null, null, 1, null, -1, null, -1, 3, 4]

解释
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // 缓存是 {1=1}
lRUCache.put(2, 2); // 缓存是 {1=1, 2=2}
lRUCache.get(1);    // 返回 1
lRUCache.put(3, 3); // 该操作会使得关键字 2 作废，缓存是 {1=1, 3=3}
lRUCache.get(2);    // 返回 -1 (未找到)
lRUCache.put(4, 4); // 该操作会使得关键字 1 作废，缓存是 {4=4, 3=3}
lRUCache.get(1);    // 返回 -1 (未找到)
lRUCache.get(3);    // 返回 3
lRUCache.get(4);    // 返回 4
 

提示：

1 <= capacity <= 3000
0 <= key <= 10000
0 <= value <= 105
最多调用 2 * 105 次 get 和 put


 */

class LRUCache {
    int cap;
    LinkedHashMap<Integer,Integer> cache = new LinkedHashMap<>();

    public LRUCache(int capacity) {
        this.cap = capacity;
    }
    
    public int get(int key) {
        //如果没有，直接 return -1
        if(!cache.containsKey(key))
            return -1;
        //如果有，更新操作
        makeRecently(key);
        return cache.get(key);
        
    }
    
    public void put(int key, int value) {
        //如果有
        if(cache.containsKey(key))
        {
            //修改key的值
            cache.put(key,value);
            //改为最近使用
            makeRecently(key);

            return ;
        }

        //如果没有，先判断缓存是否满了
        if(cache.size() >= cap){
            //删掉链表头部节点
            int oldKey = cache.keySet().iterator().next();
            cache.remove(oldKey);
        }

        //将新的key添加到链表尾部
        cache.put(key,value);
    }

    //调整为最近使用的
    private void makeRecently(int key){
        int val = cache.get(key);
        //删除key,重新插入
        cache.remove(key);
        cache.put(key,val);
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */