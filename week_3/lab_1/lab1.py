from sys import argv

# Usage: [executable] e/d cipher_file string

# Read the command line arguments
if len(argv) != 4:
    print(f"Usage: {argv[0]} e/d cipher_file string")
    exit(1)
    
_, mode, cipher_file, string = argv

# Check command line arguments
if mode not in ('e', 'd'):
    print("Mode must be 'e' or 'd'")
    exit(1)

# Upper case the string
string = string.upper()

# Read the cipher file
encryption_lookup = {}
decryption_lookup = {}

with open(cipher_file, 'r') as f:
    for line in f:
        line = line.strip().upper()
        
        split = line.split(',')
        if len(split) != 2:
            print(f"Invalid line in cipher file, must have 2 values: {line}")
            exit(1)
        
        if len(split[0]) != 1 or len(split[1]) != 1:
            print(f"Invalid line in cipher file; substitution wrong length: {line}")
            exit(1)
            
        if split[0] in encryption_lookup or split[1] in decryption_lookup:
            print(f"Invalid line in cipher file; repeated substitution: {line}")
            exit(1)
        
        encryption_lookup[split[0]] = split[1]
        decryption_lookup[split[1]] = split[0]

# Perform the encryption/decryption
output = ''

if mode == 'e':
    for c in string:
        if c in encryption_lookup:
            output += encryption_lookup[c]
        else:
            print(f"Invalid character in string; no lookup provided: {c}")
            exit(1)
else:
    for c in string:
        if c in decryption_lookup:
            output += decryption_lookup[c]
        else:
            print(f"Invalid character in string; no lookup provided: {c}")
            exit(1)

# Print the output
print(output)
        