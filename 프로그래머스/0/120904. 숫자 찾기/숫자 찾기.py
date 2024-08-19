def solution(num, k):
    # Convert the number to a string to iterate through the digits
    for idx, digit in enumerate(str(num)):
        # Check if the current digit matches k
        if digit == str(k):
            return idx + 1  # Return 1-based index
    # If the digit was not found, return -1
    return -1
