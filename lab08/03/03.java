public class Main {
    public static void main(String[] args) {
        int[][] arr = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 9}
        };

        outer:
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (arr[i][j] == 0) {
                    System.out.println("Ноль найден в позиции [" + i + "][" + j + "]");
                    break outer;
                }
            }
        }
    }
}
