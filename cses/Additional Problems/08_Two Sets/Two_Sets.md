## Translate
Công việc của bạn là chia các số 1, 2, ..., n thành hai tập hợp có tổng bằng nhau.

Về output: In "NO" nếu việc đó không khả thi, ngược lại in "YES". Nếu việc chia là khả thi, in một ví dụ về cách tạo ra các tập hợp. Đầu tiên, in số lượng phần tử trong tập hợp đầu tiên, sau đó in các phần tử của nó trên một dòng riêng biệt, và sau đó in tập hợp thứ hai theo cách tương tự.

## Ý tưởng
Tính tổng các số từ 1 đến N bằng cách sử dụng: sum = (N * (N + 1)) / 2.

Kiểm tra xem tổng có phải là số lẻ không. Nếu là số lẻ, in "KHÔNG" vì không thể chia một tổng lẻ thành hai nửa bằng nhau, nếu không thì in "CÓ" vì có thể chia.

Khởi tạo 2 vectơ rỗng, và một vectơ 'tmp' để theo dõi các phần tử được chọn.

Sử dụng vòng lặp while để điền vào v1. Bên trong vòng lặp, kiểm tra xem tổng còn lại (sum / 2 - v1_sum) có lớn hơn phần tử lớn nhất chưa được chọn không. Nếu đúng, thêm phần tử lớn nhất vào v1 và cập nhật v1_sum và element_max. Nếu sai, thêm tổng còn lại trực tiếp vào v1 và đặt v1_sum thành sum / 2.

Sau khi điền xong v1, lặp qua các số từ 1 đến n. Nếu một số không được thăm, hãy thêm nó vào v2, sau đó in v1 và v2.
