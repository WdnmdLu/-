设计并实现一个针对电商网站的搜索引擎，能够根据用户输入的关键字或商品名称，快速返回相关的商品列表；
支持多种搜索方式：关键字搜索，商品名称搜索；
(每个商品都有对应的类别：)
根据商品的热门程度，价格，销量等因素对结果进行排序；
(每个商品都有热门程度，价格，销量等属性，根据搜索的结果在进行排序)
需考虑到用户的个性化需求，如搜索历史，浏览历史，对搜索结果进行个性化推荐
(使用MySQL保存用户的搜索、浏览历史)
需具备高效的性能，能处理大量客户的请求
(使用muduo库实现高并发访问)
要求：
需要考虑到数据结构，算法复杂度，查询速度等多个方面；
实现搜索引擎时，可以采用倒排索引，B树，全文检索等技术；
需考虑到数据的更新与维护，保证数据的实时性和准确性；
数据结构可以根据具体需求不断优化
