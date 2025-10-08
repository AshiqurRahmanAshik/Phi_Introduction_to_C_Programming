/*
*Explain why we need long long int data type?

1. int (normal integer)
Usually takes 4 bytes (32 bits) on most modern systems.

Range:
Signed: −2,147,483,648 to 2,147,483,647
Unsigned: 0 to 4,294,967,295

2. long long int
Takes 8 bytes (64 bits).

Range:
Signed: −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
Unsigned: 0 to 18,446,744,073,709,551,615

3. Why do we need it?
We need long long int when:
-Working with very large numbers (e.g., factorials).
-Storing values that exceed int range (like population of the world, astronomical data, financial data, etc.).

 */