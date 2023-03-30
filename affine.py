def affine_cipher_encrypt(plaintext, a, b):
    
    plaintext = plaintext.upper()

    valid_characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    ciphertext = ""

    for character in plaintext:

        if character not in valid_characters:
            continue

        char_int = ord(character) - ord('A')

        encrypted_int = (a * char_int + b) % 26

        encrypted_char = chr(encrypted_int + ord('A'))

        ciphertext += encrypted_char

    return ciphertext


def affine_cipher_decrypt(ciphertext, a, b):
  
    ciphertext = ciphertext.upper()

    valid_characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    plaintext = ""

    for character in ciphertext:

        if character not in valid_characters:
            continue

        char_int = ord(character) - ord('A')

        decrypted_int = pow(a, -1, 26) * (char_int - b) % 26

        decrypted_char = chr(decrypted_int + ord('A'))

        plaintext += decrypted_char

    return plaintext



ciphertext = affine_cipher_encrypt("HELLO", 3, 7)
print("Encrypted ciphertext:", ciphertext)


plaintext = affine_cipher_decrypt("CTOOX", 3, 7)
print("Decrypted plaintext:", plaintext)
