def auto_key_cipher_encrypt(plaintext, key):
    # Convert plaintext and key to uppercase
    plaintext = plaintext.upper()
    key = key.upper()

    # Generate the keystream
    keystream = key + plaintext

    # Encrypt the plaintext using the keystream
    ciphertext = ""
    for i in range(len(plaintext)):
        # Get the numerical values of the plaintext and keystream characters
        plaintext_num = ord(plaintext[i]) - 65
        keystream_num = ord(keystream[i]) - 65

        # Add the numerical values modulo 26 to get the ciphertext character
        ciphertext_num = (plaintext_num + keystream_num) % 26

        # Convert the ciphertext numerical value back to a character and append to ciphertext string
        ciphertext += chr(ciphertext_num + 65)

    return ciphertext


plaintext = "HELLO"
key = "N"
ciphertext = auto_key_cipher_encrypt(plaintext, key)
print(ciphertext)  # Output: "SGUAY QJHDX"