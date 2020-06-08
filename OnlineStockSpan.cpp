class StockSpanner {
public:
    vector <int> prices, spans;
    StockSpanner() {

    }

    int next(int price) {
        int i = prices.size() - 1;
        while(i >= 0 && prices[i] <= price) {
            int span = spans[i];
            i -= span;
        }
        prices.push_back(price);
        int span = prices.size() - 1 - i;
        spans.push_back(span);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
