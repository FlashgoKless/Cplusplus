#include <iostream>
using namespace std;
class Rational {
public:
    using llong = long long;
    Rational(llong n, llong d) : n_(n), d_(d) {
        reduce_();
    }
    Rational add(const Rational& x) {
        auto n = n_ * x.d_ + d_ * x.n_;
        auto d = d_ * x.d_;
        return Rational(n, d);
    }
    Rational sub(const Rational& x) {
        auto n = n_ * x.d_ - d_ * x.n_;
        auto d = d_ * x.d_;
        return Rational(n, d);
    }
    Rational mul(const Rational& x) {
        auto n = n_ * x.n_;
        auto d = d_ * x.d_;
        return Rational(n, d);
    }
    Rational div(const Rational& x) {
        auto n = n_ * x.d_;
        auto d = d_ * x.n_;
        return Rational(n, d);
    }
private:
    llong n_;
    llong d_;
    void reduce_() {
        auto x = gcd_(n_, d_);
        n_ /= x;
        d_ /= x;
        if (n_ < 0 && d_ < 0) {
            n_ = abs(n_);
            d_ = abs(d_);
        }
    }
    llong gcd_(llong a, llong b) {
        a = abs(a);
        b = abs(b);
        while (a != b) {
            if (a > b) swap(a, b);
            b = b - a;
        }
        return a;
    }
    friend ostream& operator<<(ostream& out, const Rational& x) {
        if (x.n_ < 0 || x.d_ < 0) out << '-';
        out << '(' << abs(x.n_) << ", " << abs(x.d_) << ')';
        return out;
    }
};
int main() {
    Rational a(3, 8);
    Rational b(2, 5);
    auto add = a.add(b);
    auto sub = a.sub(b);
    auto mul = a.mul(b);
    auto div = a.div(b);
    cout
        << a << " + " << b << " = " << add << '\n'
        << a << " - " << b << " = " << sub << '\n'
        << a << " * " << b << " = " << mul << '\n'
        << a << " / " << b << " = " << div << '\n';
    cin.get();
}