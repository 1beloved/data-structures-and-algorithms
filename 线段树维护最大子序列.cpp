#include <bits/stdc++.h> // 万能头文件
// 使用宏定义来写线段树，节省代码量
#define ll long long
#define lc rt<<1
#define rc rt<<1|1
#define mid ((l + r) >> 1)
#define lson lc, l, mid
#define rson rc, mid + 1, r
using namespace std;

const int maxn = 100010;
const ll inf = 2e18;

int n, m, a[maxn];
struct node { ll ms, ls, rs, s;} tr[maxn << 2];

// 向上更新的操作就是区间合并的操作，我们在这里加入动态规划的核心操作
void pushup(int rt) {
    tr[rt].s = tr[lc].s + tr[rc].s;
    tr[rt].ls = max(tr[lc].ls, tr[rc].ls + tr[lc].s);
    tr[rt].rs = max(tr[rc].rs, tr[lc].rs + tr[rc].s);
    tr[rt].ms = max(max(tr[lc].ms, tr[rc].ms), tr[lc].rs + tr[rc].ls);
}

void build(int rt, int l, int r ) {
    if(l == r) {
        scanf("%lld", &tr[rt].s);
        tr[rt].ls = tr[rt].rs = tr[rt].ms = tr[rt].s;
        return;
    }
    build(lson);
    build(rson);
    pushup(rt);
}

void modify(int rt, int l, int r, int pos, int val) {
	// 单点修改，然后往上合并
    if(l == r) {
        tr[rt].s = tr[rt].ms = tr[rt].ls = tr[rt].rs = val;
        return;
    }
    if(pos <= mid) modify(lson, pos, val);
    else modify(rson, pos, val);
    pushup(rt);
}

// 这里的查询操作和动态规划是一个思路。
node query(int rt, int l, int r, int L, int R) {
    if(L <= l && r <= R) return tr[rt];
    node x, y, w;
    if(R <= mid) w = query(lson, L, R);
    else if(L > mid) w = query(rson, L, R);
    else {
        x = query(lson, L, mid);
        y = query(rson, mid + 1, R);
        w.s = x.s + y.s;
        w.ls = max(x.ls, x.s + y.ls);
        w.rs = max(y.rs, y.s + x.rs);
        w.ms = max(max(x.ms, y.ms), x.rs + y.ls);
    }
    return w;
}

int main() {
    cin >> n;
    build(1, 1, n);
    cin >> m;
    int x, y, z;
    for(int i = 1; i <= m; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if(x) {
            node ans = query(1, 1, n, y, z);
            printf("%lld\n", ans.ms);
        } else {
            modify(1, 1, n, y, z);
        }
    }
    return 0;
}

