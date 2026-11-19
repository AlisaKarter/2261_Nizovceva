ranks = ["6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"]

tr = input()
n = int(input())

res = []

for _ in range(n):
    attack = input().split()
    attack_rank = attack[0]
    attack_suit = attack[1]

    defense = input().split()
    defense_rank = defense[0]
    defense_suit = defense[1]

    ok = False

    if defense_suit == attack_suit:
        if ranks.index(defense_rank) > ranks.index(attack_rank):
            ok = True

    if defense_suit == tr and attack_suit != tr:
        ok = True

    if ok:
        res.append("1")
    else:
        res.append("0")

print(" ".join(res))
