public class Fixed {
    public static void main(String[] args) {
        int[][] t = {{1, 1, 1}, {2, 2, 2}, {1, 2, 0}, {2, 2, 1}, {0, 1, 0}};
        for (int[] r : t) {
            int x = r[0], y = r[1], z = r[2];
            System.out.println("x=" + x + " y=" + y + " z=" + z
                    + "   x==y && y==z -> " + (x == y && y == z));
        }
    }
}
