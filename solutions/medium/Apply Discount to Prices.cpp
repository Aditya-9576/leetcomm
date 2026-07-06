// Title: Apply Discount to Prices
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/apply-discount-to-prices/

                }

                if (is_valid_price) {
                    // Extract the number part. stoll handles large 10-digit strings into a 'long long'
                    long long original_price = std::stoll(word.substr(1));
                    double discounted_price = original_price * factor;

                    // Format to exactly 2 decimal places
                    std::ostringstream formatted_price;
                    formatted_price << std::fixed << std::setprecision(2) << discounted_price;

                    result += "$" + formatted_price.str();
                } else {
                    // Contained non-digits after '$' (e.g. "$2a")
                    result += word;
                }
            } else {
                // Doesn't start with '$' or is just a single '$'
                result += word;
            }
        }

        return result;
    }
};
