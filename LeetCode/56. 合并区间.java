/*
56. 合并区间

以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返回一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间。

示例 1：

输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
输出：[[1,6],[8,10],[15,18]]
解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
示例 2：

输入：intervals = [[1,4],[4,5]]
输出：[[1,5]]
解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。
 

提示：

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104

 */

class Solution {
    public int[][] merge(int[][] intervals) {
        if(intervals.length == 0)
            return new int[0][2];
        
        // Arrays.sort(intervals, (o1,o2)->{
        //     return o1[0]-o2[0];
        // });
        Arrays.sort(intervals, new Comparator<int[]>(){
            public int compare(int[] o1, int[] o2)
            {
                return o1[0] - o2[0];
            } 
        });

        List<int[]> res = new ArrayList<int[]>();
        for(int i = 0; i < intervals.length; i ++)
        {
            int l = intervals[i][0];
            int r = intervals[i][1];
            if(res.size() == 0 || res.get(res.size() - 1)[1] > l)
                res.add(new int[]{l,r});
            else
                res.get(res.size()-1)[1] = Math.max(res.get(res.size()-1)[1] , r);
        }

        return res.toArray(new int[res.size()][]);
    }
}