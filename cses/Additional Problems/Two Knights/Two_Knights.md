## Translate
Công việc của bạn là đếm số cách hai quân mã có thể được đặt trên bàn cờ kích thước k × k (với k = 1, 2, ..., n) sao cho chúng không tấn công nhau.

## Ý tưởng
Để làm bài toán này, ta sẽ ứng dụng tổ hợp vào cho bài toán này. 

Nói trước về tổ hợp: Tổ hợp là phép tính số cách chọn k phần tử từ một tập hợp n phần tử mà không quan tâm đến thứ tự. Nó có nhiều ứng dụng trong xác suất, tổ chức dữ liệu, và các bài toán tính toán số cách.

Công thức tính tổ hợp: ${ \binom{n}{k} = \frac{n!}{k!(n-k)!} }$

Quay lại bài toán: Tổ hợp được sử dụng để tính số cách chọn hai ô trên bàn cờ mà không quan tâm đến thứ tự (vì hai quân mã không phân biệt về thứ tự). 

Trước tiên, ta tính số cặp ô có thể được chọn trên bàn cờ ${ \(k \times k\) }$. 

Với mỗi bàn cờ ${ \(k \times k\) }$ , tổng số ô là ${ \(k^2\) }$. 

Chúng ta cần chọn hai ô khác nhau để đặt quân mã. Vì vậy, số cách chọn hai ô từ ${ \(k^2\) }$ ô là số tổ hợp 2 từ ${ \(k^2\) }$.

Với công thức tổ hợp chuẩn cho việc chọn ${ \( k \) }$ phần tử từ ${ \( n \) }$ phần tử ở trên, trong bài toán này, ta đang tính số cách chọn 2 ô từ ${ \( k^2 \) }$ ô trên bàn cờ. Đây chính là tình huống dùng tổ hợp 2 từ ${ \( k^2 \) }$, tức là: ${ \binom{k^2}{2} = \frac{k^2!}{2!(k^2 - 2)!} }$ 

Tuy nhiên, công thức này có thể đơn giản hóa vì chỉ cần tính số cách chọn 2 ô từ ${ \( k^2 \) }$ ô mà thôi (không cần sử dụng giai thừa).

Phân tích sự biến đổi thành ${ \( k^2 \times (k^2 - 1) / 2 \) }$:

Khi ta chọn 2 ô từ ${ \( k^2 \) }$ ô, số cách này là tổ hợp 2 từ ${ \( k^2 \) }$, và công thức tổ hợp ${ \binom{n}{2} }$ 

${ cho \( k^2 \) }$ phần tử và chọn 2 phần tử có thể được tính trực tiếp là:

${ \binom{k^2}{2} = \frac{k^2 \times (k^2 - 1)}{2} }$

Đây là công thức tổ hợp đã được đơn giản hóa cho trường hợp chọn 2 ô từ ${k^2}$.

Vì sao lại có công thức này?

Hãy nhìn lại công thức tổ hợp ${ \binom{n}{2} }$ đối với việc chọn 2 phần tử từ một tập gồm n phần tử.

${ \binom{n}{2} = \frac{n \times (n - 1)}{2} }$

Ta có n phần tử trong tập hợp, và muốn chọn 2 phần tử. Đầu tiên, ta có n lựa chọn cho phần tử đầu tiên, sau đó ta chỉ còn lại n - 1 lựa chọn cho phần tử thứ hai.

Vì thứ tự không quan trọng (chỉ là chọn 2 phần tử mà không quan tâm đến việc chúng được chọn theo thứ tự nào), ta phải chia cho 2 (để loại bỏ sự trùng lặp, vì hai phần tử A và B là giống nhau so với việc chọn B và A).

Do đó, số cách chọn 2 phần tử từ n phần tử là: ${ \frac{n \times (n - 1)}{2} }$

Trong trường hợp bài toán, số ô trên bàn cờ là ${ k^2 }$, và ta đang chọn 2 ô từ ${ k^2 }$ ô. Do đó: ${ \binom{k^2}{2} = \frac{k^2 \times (k^2 - 1)}{2} }$

Như vậy: ${ \text{Số cặp ô} = \binom{k^2}{2} = \frac{k^2 \times (k^2 - 1)}{2} }$ 

Tuy nhiên, theo đề bài là 'hai quân mã có thể được đặt trên bàn cờ sao cho chúng không tấn công nhau', ta cần loại trừ những cặp ô mà quân mã có thể tấn công nhau (do đặc tính của quân mã trong cờ vua). Cụ thể, quân mã trong cờ vua có thể tấn công theo một mô hình chữ "L" (có thể di chuyển theo các ô hình chữ nhật 2x1 hoặc 1x2), và những cặp ô này cần được loại bỏ khỏi tổng số cặp ô mà ta tính được từ công thức tổ hợp. Tính toán các cặp ô mà quân mã có thể tấn công và trừ chúng ra khỏi số cặp ô ban đầu.

Điều này có nghĩa là, sau khi tính số cách chọn hai ô, ta cần trừ đi một số cặp ô nhất định mà trong đó hai quân mã có thể tấn công nhau khi bàn cờ có kích thước i x i. Và số cặp ô này được tính bằng 4 x (i − 1) x (i − 2).
