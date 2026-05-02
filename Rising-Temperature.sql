1SELECT w2.id
2FROM Weather w1
3JOIN Weather w2
4ON DATEDIFF(w2.recordDate, w1.recordDate) = 1
5WHERE w2.temperature > w1.temperature;