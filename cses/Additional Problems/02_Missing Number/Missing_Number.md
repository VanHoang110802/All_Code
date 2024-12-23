## Translate
Bạn được cho tất cả các số từ 1, 2, ..., n trừ một số. Nhiệm vụ của bạn là tìm ra số bị thiếu.

## Ý tưởng, cách giải
Ta có công thức tính dãy số tự nhiên từ 1 -> n là: n*(n+1)/2.

Gọi s là kết quả của dãy số tự nhiên từ 1 -> n, với n = 5, ta được s = 15.

Gọi tmp_s là tổng của các số của n - 1 số cho trước, ta đc tmp = 11.

Như vậy, ta lấy 15 - 11 ra đc ans cần tìm: s - tmp_s <-> n * (n + 1) / 2 - tmp_s.
