#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long maxKatryoshkas = 0;

    // Maximum Katryoshkas for each combination:
    long long withTwoEyes = n / 2; // How many can we make using two eyes (ignoring mouths for now)
    long long withMouth = m;       // How many can we make using a mouth

    // Consider making as many of the more complex Katryoshkas as possible:
    // These require two eyes, one mouth, and one body.
    long long withTwoEyesAndMouth = (withTwoEyes < m) ? withTwoEyes : m;
    if (withTwoEyesAndMouth > k) withTwoEyesAndMouth = k;

    // Remaining eyes and mouths after considering the more complex Katryoshkas:
    long long remainingEyes = n - withTwoEyesAndMouth * 2;
    long long remainingBodies = k - withTwoEyesAndMouth;
    long long remainingMouths = m - withTwoEyesAndMouth;

    // Now try to make the other two types of simpler Katryoshkas:
    long long oneEyeOneMouthOneBody = (remainingEyes < remainingMouths) ? remainingEyes : remainingMouths;
    if (oneEyeOneMouthOneBody > remainingBodies) oneEyeOneMouthOneBody = remainingBodies;

    // Remaining resources after the one eye, one mouth, one body Katryoshkas:
    remainingEyes -= oneEyeOneMouthOneBody;
    remainingBodies -= oneEyeOneMouthOneBody;

    // Finally, consider the simplest Katryoshkas that need only two eyes and one body:
    long long twoEyesOneBody = remainingEyes / 2;
    if (twoEyesOneBody > remainingBodies) twoEyesOneBody = remainingBodies;

    // Total Katryoshkas made:
    maxKatryoshkas = withTwoEyesAndMouth + oneEyeOneMouthOneBody + twoEyesOneBody;

    printf("%lld\n", maxKatryoshkas);

    return 0;
}
