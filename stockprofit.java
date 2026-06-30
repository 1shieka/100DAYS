class Solution {
    public int maxProfit(int[] prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.length; i++) {

            // Update the minimum buying price
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            // Calculate profit if sold today
            int profit = prices[i] - minPrice;

            // Update maximum profit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
}


/*
    1.Keep track of the minimum stock price seen so far.

    2.Traverse the array from left to right.

    3.For each day, calculate the profit by selling
    at the current price after buying at the minimum price.

    4.Update the maximum profit whenever a higher profit is found.

    5.Return the maximum profit. If no profit is possible,
    the answer remains 0.
*/
