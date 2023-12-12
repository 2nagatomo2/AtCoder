K, G, M = map(int, input().split())
g_state = 0
m_state = 0

for i in range(K):
    if g_state == G:
        g_state = 0
    elif m_state == 0:
        m_state = M
    else:
        if G - g_state > m_state:
            g_state += m_state
            m_state = 0
        else:
            m_state -= G - g_state
            g_state = G
            

print(g_state, m_state)