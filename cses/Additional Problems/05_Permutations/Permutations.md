## Translate
Một hoán vị của các số nguyên 1, 2, ..., n được gọi là đẹp nếu không có hai phần tử liền kề nào có hiệu số bằng 1.

Cho n, hãy xây dựng một hoán vị đẹp nếu hoán vị như vậy tồn tại.

Nếu có nhiều lời giải, có thể in bất kỳ lời giải nào. Nếu không có lời giải, in 'NO SOLUTION'.

## Ý tưởng
Nếu n = 1 thì đương nhiên rằng sẽ chỉ có 1 hoán vị.

Nếu n = 2, n = 3, không thể sắp xếp các số sao cho không có hai phần tử liền kề có hiệu số bằng 1 (ví dụ: với n=3, 1 và 2 sẽ liền kề và có hiệu số 1).

Trường hợp n chẵn: Sắp xếp các số chẵn trước, rồi đến các số lẻ.

Trường hợp n lẻ: Sắp xếp các số lẻ trước, rồi đến các số chẵn.

Việc phân chia và sắp xếp số chẵn và số lẻ theo cách này giúp đảm bảo rằng không có hai phần tử liền kề có hiệu số bằng 1, từ đó tạo ra một hoán vị đẹp.
