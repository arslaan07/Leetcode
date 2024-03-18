import java.util.Arrays;

class Solution {
    public int findMinArrowShots(int[][] points) {
        if (points == null || points.length == 0) {
            return 0;
        }

        Arrays.sort(points, (a, b) -> Integer.compare(a[0], b[0]));

        int arrows = 1;
        int[] start = points[0];

        for (int i = 1; i < points.length; ++i) {
            if (start[1] >= points[i][0]) {
                start[0] = Math.max(start[0], points[i][0]);
                start[1] = Math.min(start[1], points[i][1]);
            } else {
                arrows++;
                start = points[i];
            }
        }

        return arrows;
    }
}