class Solution {
    List<List<Integer>> result = new ArrayList<>();

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        backtrack(candidates, target, 0, new ArrayList<>(), 0);
        return result;
    }
    void backtrack(int[] candidates, int target, int start, List<Integer> comb, int sum) {
        if (sum == target) {
            result.add(new ArrayList<>(comb));
            return;
        }
        if (sum > target) {
            return;
        }
        for (int i = start; i < candidates.length; i++) {
            comb.add(candidates[i]);
            backtrack(candidates, target, i, comb, sum + candidates[i]);
            comb.remove(comb.size() - 1);
        }
    }
}