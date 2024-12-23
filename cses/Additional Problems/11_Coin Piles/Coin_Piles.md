## Translate
Bạn có hai chồng tiền chứa a và b đồng tiền. Trong mỗi lần di chuyển, bạn có thể thực hiện một trong hai hành động: Lấy một đồng tiền từ chồng bên trái và hai đồng tiền từ chồng bên phải, hoặc lấy hai đồng tiền từ chồng bên trái và một đồng tiền từ chồng bên phải. Công việc của bạn là xác định một cách hiệu quả liệu bạn có thể làm rỗng cả hai chồng tiền hay không?

## Ý tưởng
Ta cần xét:
- Tổng số đồng tiền có chia hết cho 3 hay không.
- Kiếm tra xem 1 đồng bên trái có bằng 2 đồng bên phải hay không?
- Kiếm tra xem 1 đồng bên phải có bằng 2 đồng bên trái hay không?

Đại khái nếu muốn cả hai chồng tiền rỗng, thì ta hình dung ra chồng tiền xu: 1 bên 2 cái, 1 bên 1 cái. Luôn luôn hoặc là hai bên chồng tiền phải bằng nhau về số lượng, hoặc một bên phải thấp gấp đôi so với bên còn lại.

Kết quả "YES" sẽ được in ra nếu cả ba điều kiện đều thỏa mãn, còn "NO" nếu không thỏa mãn bất kỳ điều kiện nào.

![Coin Piles](https://github.com/user-attachments/assets/13b5615c-9b05-440d-bc44-5df0462f0dc6)
