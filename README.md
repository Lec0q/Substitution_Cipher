```markdown
#  Substitution Cipher in C

**Made by L3C0Q**

This is a simple C program that demonstrates how to perform **Substitution Cipher encoding and decoding**, also known as the Caesar Cipher. The program supports both uppercase and lowercase alphabetic characters and preserves any non-alphabetic characters (e.g., punctuation and spaces).

##  What is a Substitution Cipher?

A substitution cipher is a method of encryption by which each letter in the plaintext is replaced by a letter some fixed number of positions down (or up) the alphabet.

For example, with a key of `3`:
```
A → D, B → E, C → F, ..., X → A, Y → B, Z → C

substitution_cipher.c    # Main source code file
```

##  How It Works

- **Encoding Function:**
  - Shifts each letter in the plaintext forward by the given key.
- **Decoding Function:**
  - Reverses the shift to retrieve the original text.
- Handles both **uppercase** and **lowercase** characters.
- Non-alphabetic characters (e.g., `!`, `@`, `#`, spaces) are preserved.

##  Example

```bash
Enter the PlainText: Hello, World!
Enter the Key: 3
Ciphertext: Khoor, Zruog!
Decoded Text: Hello, World!
```

##  How to Compile and Run

### On Linux or macOS:

```bash
gcc substitution_cipher.c -o cipher
./cipher
```

### On Windows (using GCC/MinGW):

```bash
gcc substitution_cipher.c -o cipher.exe
cipher.exe
```

## Notes

- This program uses `gets()` for input, which is deprecated and unsafe. For educational or demo purposes only. Consider replacing it with `fgets()` for better safety.
- The key supports negative values for leftward shifts (e.g., `-3`).

##  License

This project is open-source and free to use for educational or personal purposes.

---

Happy coding! 🚀
```

Let me know if you'd like a `.md` file output or want this added to a GitHub repository layout.
