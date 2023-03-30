def playfair_cipher_encrypt(plaintext, key):
 
    plaintext = plaintext.upper().replace(" ", "")
    key = key.upper().replace(" ", "")

    alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"
    matrix = list(key)
    for letter in alphabet:
        if letter not in matrix:
            matrix.append(letter)

    
    pairs = []
    for i in range(0, len(plaintext), 2):
        pair = plaintext[i:i+2]
        if len(pair) == 1:
            pair += "X"
        pairs.append(pair)

  
    ciphertext = ""
    for pair in pairs:
       
        pos1 = matrix.index(pair[0])
        pos2 = matrix.index(pair[1])

      
        row1, col1 = divmod(pos1, 5)
        row2, col2 = divmod(pos2, 5)

        
        if row1 == row2:
            ciphertext += matrix[row1*5 + (col1+1)%5]
            ciphertext += matrix[row2*5 + (col2+1)%5]
        elif col1 == col2:
           
            ciphertext += matrix[((row1+1)%5)*5 + col1]
            ciphertext += matrix[((row2+1)%5)*5 + col2]
        else:
            
            ciphertext += matrix[row1*5 + col2]
            ciphertext += matrix[row2*5 + col1]

    return ciphertext

plaintext = "INSTRUMENTS"
key = "MONARCHY"
ciphertext = playfair_cipher_encrypt(plaintext, key)
print(ciphertext)
