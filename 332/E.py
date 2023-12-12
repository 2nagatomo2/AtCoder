import itertools

def solve(N, D, weights):
    min_variance = float('inf')

    for combination in itertools.combinations(range(N), D):
        # combinationに含まれる要素を各福袋に割り当てる
        print(combination)
        bags = [[] for _ in range(D)]
        for i in range(N):
            if i in combination:
                bags[combination.index(i)].append(weights[i])

        # 各福袋の重さの合計の平均を計算
        averages = [sum(bag) / len(bag) if len(bag) > 0 else 0 for bag in bags]

        # 分散を計算
        variance = sum((w - avg) ** 2 for bag, avg in zip(bags, averages) for w in bag) / D

        # 最小の分散を更新
        min_variance = min(min_variance, variance)

    return min_variance

# 入力の読み込み
N, D = map(int, input().split())
weights = list(map(int, input().split()))

# 問題を解く
result = solve(N, D, weights)

# 結果の出力
print(result)
