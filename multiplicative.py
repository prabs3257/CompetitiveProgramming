

def multiplicative_cipher_encrypt(plaintext, key):
    ciphertext = ""
    for char in plaintext:
        if char.isalpha():
            char_num = ord(char.upper()) - 65
            cipher_num = (char_num * key) % 26
            cipherchar = chr(cipher_num + 65)
            ciphertext += cipherchar
        else:
            ciphertext += char
    return ciphertext

def multiplicative_cipher_decrypt(ciphertext, key):
    plaintext = ""
   
    for i in range(26):
        if (i * key) % 26 == 1:
            inverse_key = i
            break
    else:
        return "Error: the key is not valid for decryption (it has no modular multiplicative inverse)"
    
    for char in ciphertext:
        if char.isalpha():
            char_num = ord(char.upper()) - 65
            plain_num = (char_num * inverse_key) % 26
            plainchar = chr(plain_num + 65)
            plaintext += plainchar
        else:
            plaintext += char
    return plaintext


plaintext = "HELLO WORLD"
key = 7
ciphertext = multiplicative_cipher_encrypt(plaintext, key)
print(ciphertext) 
decrypted_plaintext = multiplicative_cipher_decrypt(ciphertext, key)
print(decrypted_plaintext) 
