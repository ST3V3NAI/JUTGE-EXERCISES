bool is_balanced(int n){
    int pos{1}, sum_even_pos{0}, sum_odd_pos{0};

    while(n > 0) {
        int digit = n % 10;

        if (pos % 2 == 0){
          sum_even_pos += digit;
        } else {
          sum_odd_pos += 1 + digit;
        }

        n /= 10;
        pos++;
    }

    if(sum_even_pos == sum_odd_pos){
       return true;
    } else {
       return false;
    }
}