class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit,min_val = 0,prices[0]

        for price in prices[1:]:
            if(price > min_val):
                profit = (price - min_val) if( (price - min_val) > profit) else profit
            else:
                min_val = price
        return profit
