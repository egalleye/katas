
def bouncingBall(h, bounce, window):
    num_bounces = 0
    if (h <= 0) or (bounce <= 0) or (bounce >= 1) or (window >= h):
        return -1
    while (h > window):
        num_bounces += 1
        h *= bounce
        if ( h > window):
            num_bounces += 1
    return num_bounces



if __name__ == "__main__":
    print(bouncingBall(30, 0.66, 1.5))
