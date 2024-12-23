## Translate
Công việc của bạn là đếm số cách hai quân mã có thể được đặt trên bàn cờ kích thước k × k (với k = 1, 2, ..., n) sao cho chúng không tấn công nhau.

## Ý tưởng
Trong bài toán này, 'đặt hai quân mã trên bàn cờ k × k sao cho chúng không tấn công nhau', ta sẽ ứng dụng tổ hợp cho bài toán này. 

Nói trước về tổ hợp: Tổ hợp là phép tính số cách chọn k phần tử từ một tập hợp n phần tử mà không quan tâm đến thứ tự. Nó có nhiều ứng dụng trong xác suất, tổ chức dữ liệu, và các bài toán tính toán số cách.

Quay lại bài toán: Tổ hợp được sử dụng để tính số cách chọn hai ô trên bàn cờ mà không quan tâm đến thứ tự (vì hai quân mã không phân biệt về thứ tự). 

Tổ hợp này giúp tính số cặp ô có thể chọn từ tổng số ô trên bàn cờ, và sau đó có thể điều chỉnh số lượng đó để loại trừ các trường hợp mà hai quân mã tấn công nhau.

Công thức tính tổ hợp: ${ \binom{n}{k} = \frac{n!}{k!(n-k)!} }$
