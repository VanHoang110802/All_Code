## Translate
Một xoắn ốc số là một lưới vô hạn, trong đó ô góc trên bên trái có số 1. Dưới đây là năm lớp đầu tiên của xoắn ốc

Nhiệm vụ của bạn là tìm ra số tại hàng y và cột x.

## Ý tưởng
```
Xét ví dụ:
Với 2 3, tức là xét ô tại vị trí ở dòng 2, cột 3: ô có mang giá trị là 8 
Với 1 1, tức là xét ô tại vị trí ở dòng 1, cột 1: ô có mang giá trị là 1
Với 4 2, tức là xét ô tại vị trí ở dòng 4, cột 2: ô có mang giá trị là 15
```

Các số được điền vào theo dạng xoắn ốc từ số 1 trở đi. 

Vẽ hình ra, nhìn ngẫm một chút. Ta coi như mỗi một màu là một lớp. 

Mỗi lớp của xoắn ốc tạo thành một hình vuông, và số lượng ô trong mỗi lớp tăng dần.
- Lớp 1: chỉ có một ô (số 1).
- Lớp 2: có 4 ô (2x2), các số từ 2 đến 4.
- Lớp 3: có 9 ô (3x3), các số từ 5 đến 9.
- Lớp 4: có 16 ô (4x4), các số từ 10 đến 16.
- Lớp 5: có 16 ô (5x5), các số từ 17 đến 25.

Mỗi một lớp sẽ chứa các ô của lớp đó và chứa luôn các ô của các lớp nhỏ hơn trước đó.

Vậy xác định lớp đó kiểu gì? Gọi z là lớp, ta nhận thấy rằng:
- z1: có 1 ô (1x1), sẽ có toạ độ ô từ (1, 1) đến (1, 1).
- z2: có 4 ô (2x2), sẽ có toạ độ từ ô (1, 1) đến (2, 2).
- z3: có 9 ô (3x3), sẽ có toạ độ từ ô (1, 1) đến (3, 3).
- .....

-> Vậy nên lớp sẽ được xác định max của (x, y). Tức là: z = max(x, y)

Số ô trong các lớp trước: Số ô trong tất cả các lớp trước lớp z là (z-1)^2

Như vậy, để xử lý cho đúng, ta cần phải dựa vào việc lớp z là lẻ hay chẵn, ta sẽ tính giá trị ô (x, y) khác nhau. Lớp lẻ và lớp chẵn có cách di chuyển giá trị từ một cạnh đến các cạnh khác nhau của hình vuông.

Nhìn vào hình vẽ, ta có thể tự suy ra được:
- Nếu z (lớp) là chẵn 
