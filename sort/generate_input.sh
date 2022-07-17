#!/bin/sh

generate_random_numbers() {
    low="$1"
    high="$2"
    size="$3"
    file="$4"
    shuf -i "$low"-"$high" -n "$size" > "$file"
}

generate_sorted_numbers() {
    low="$1"
    high="$2"
    size="$3"
    file="$4"
    shuf -i "$low"-"$high" -n "$size" | sort -n > "$file"
}

generate_reverse_numbers() {
    low="$1"
    high="$2"
    size="$3"
    file="$4"
    shuf -i "$low"-"$high" -n "$size" | sort -nr > "$file"
}

generate_random_numbers 0 1000000000 1000000 "random_1000000.txt"
generate_sorted_numbers 0 1000000000 1000000 "sorted_1000000.txt"
generate_reverse_numbers 0 1000000000 1000000 "reverse_1000000.txt"
