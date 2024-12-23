## Translate
Công việc của bạn là tính số lượng chữ số 0 ở cuối trong giai thừa n!.

Ví dụ, 20! = 2432902008176640000 và nó có 4 chữ số 0 ở cuối.

## Ý tưởng
Để tính số lượng chữ số 0 ở cuối trong giai thừa của một số n!, ta cần tìm hiểu nguồn gốc của các chữ số 0 này. Các chữ số 0 này xuất hiện khi giai thừa n! chia hết cho 10, mà 10 = 2 × 5. Do đó, mỗi cặp 2 và 5 trong phép nhân của  n! sẽ tạo ra một chữ số 0.

Trong mọi phép nhân, số lượng 2 thường nhiều hơn 5. Vì vậy, số lượng chữ số 0 cuối cùng phụ thuộc vào số lượng 5 trong các ước của n!. Mỗi lần ta chia n cho 5, ta sẽ tìm được một số có thể tạo ra một chữ số 0. Ví dụ, số 5, 10, 15, 20 đều đóng góp ít nhất một chữ số 0 vào n!.

Đếm số lần chia hết cho 5 trong dãy các số từ 1 đến n. Sau đó, đếm thêm các số chia hết cho 5^2 = 25, 5^3 = 125, v.v., vì mỗi số như vậy đóng góp thêm một chữ số 0 nữa (chẳng hạn, số 25 có thể tạo ra hai chữ số 0 vì 25 = 5 x 5).

-> chia  n cho 5^2 = 25, 5^3 = 125, ..., cho đến khi 5^k > n.
