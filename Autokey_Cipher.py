def auto_key_cipher_encrypt(plaintext, key):
    plaintext = plaintext.upper()
    key = key.upper()

    keystream = key + plaintext

    ciphertext = ""
    for i in range(len(plaintext)):
        plaintext_num = ord(plaintext[i]) - 65
        keystream_num = ord(keystream[i]) - 65

        ciphertext_num = (plaintext_num + keystream_num) % 26

        ciphertext += chr(ciphertext_num + 65)

    return ciphertext


plaintext = "HELLO"
key = "N"
ciphertext = auto_key_cipher_encrypt(plaintext, key)
print(ciphertext) 