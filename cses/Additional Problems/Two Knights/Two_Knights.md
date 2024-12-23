## Translate
Công việc của bạn là đếm số cách hai quân mã có thể được đặt trên bàn cờ kích thước k × k (với k = 1, 2, ..., n) sao cho chúng không tấn công nhau.

## Ý tưởng
Để làm bài toán này, ta sẽ ứng dụng tổ hợp vào cho bài toán này. 

Nói trước về tổ hợp: Tổ hợp là phép tính số cách chọn k phần tử từ một tập hợp n phần tử mà không quan tâm đến thứ tự. Nó có nhiều ứng dụng trong xác suất, tổ chức dữ liệu, và các bài toán tính toán số cách.

Công thức tính tổ hợp: ${ \binom{n}{k} = \frac{n!}{k!(n-k)!} }$

Quay lại bài toán: Ta sẽ sử dụng khái niệm tổ hợp để tính số cách đặt hai quân mã sao cho chúng không tấn công nhau trên bàn cờ. Tổ hợp được sử dụng để tính số cách chọn hai ô trên bàn cờ mà không quan tâm đến thứ tự (vì hai quân mã không phân biệt về thứ tự). 

Trước tiên, chúng ta tính số cặp ô có thể được chọn trên bàn cờ ${ \(k \times k\) }$. 

Với mỗi bàn cờ ${ \(k \times k\) }$ , tổng số ô là ${ \(k^2\) }$. 

Chúng ta cần chọn hai ô khác nhau để đặt quân mã. Vì vậy, số cách chọn hai ô từ ${ \(k^2\) }$ ô là số tổ hợp 2 từ ${ \(k^2\) }$, được tính bằng công thức:

${ \text{Số cặp ô} = \binom{k^2}{2} = \frac{k^2 \times (k^2 - 1)}{2} }$ 

Tổ hợp này giúp tính số cặp ô có thể chọn từ tổng số ô trên bàn cờ, và sau đó có thể điều chỉnh số lượng đó để loại trừ các trường hợp mà hai quân mã tấn công nhau.


