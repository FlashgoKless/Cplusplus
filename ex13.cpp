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
    bool init(int a, int b) {
        a = a;
        b = b;
    }
    void Read() {
        int a, b;
        cout << "Введите числа a, b (a - числитель, b - знаменатель): " << endl;
        cin >> a >> b;
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
    int a_int, b_int, c_int, d_int;
    cout << "Введите числа a, b, c, d (a - числитель 1 дроби, b - знаменатель 1 дроби, c - числитель 2 дроби, d - знаменатель 2 дроби): " << endl;
    cin >> a_int >> b_int >> c_int >> d_int;
    Rational a(a_int, b_int);
    Rational b(c_int, d_int);
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