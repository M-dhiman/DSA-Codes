class Solution {
    public int coinChange(int[] coins, int amount) {
        int[] minCoinsDP = new int[amount+1];
        Arrays.fill(minCoinsDP, amount+1);
        minCoinsDP[0]=0;
        for(int a = 1; a<=amount; a++){
            for(int coin : coins){
                if (coin <= a) {
                    int x = minCoinsDP[a-coin] + 1;
                    minCoinsDP[a] = Math.min(minCoinsDP[a], x);
                }
            }
        }

        return minCoinsDP[amount] > amount ? -1 : minCoinsDP[amount];
    }
}