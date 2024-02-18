def isAnagram(str1, str2) :
	
    # Convert the strings to lowercase and remove any whitespace
    str1 = str1.lower().replace(" ", "")
    str2 = str2.lower().replace(" ", "")

    # Check if the lengths of the strings are equal
    if len(str1) != len(str2):
        return False

    # Sort the characters in both strings
    sorted_str1 = sorted(str1)
    sorted_str2 = sorted(str2)

    # Compare the sorted strings
    if sorted_str1 == sorted_str2:
        return True
    else:
        return False