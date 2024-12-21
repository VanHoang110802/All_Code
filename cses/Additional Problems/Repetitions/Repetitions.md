## Translate
Bạn được cho một chuỗi DNA: một chuỗi gồm các ký tự A, C, G và T. Nhiệm vụ của bạn là tìm sự lặp lại dài nhất trong chuỗi. Đây là một chuỗi con có độ dài tối đa chỉ chứa một loại ký tự.

## Ý tưởng
Ban đầu chuỗi sẽ có một kí tự, kể cả có là chuỗi rỗng.

Ta sẽ có vòng lặp duyệt qua từng ký tự trong chuỗi s ban đầu, xét các kí tự chuỗi: xét kí tự đằng trước có giống kí tự đằng sau hay không? Nếu nó giống thì sẽ đếm số lần giống nhau của kí tự đó. Ngược lại nếu khác nhau thì không đếm nữa, chuyển sang kí tự khác. Trong quá trình đếm các kí tự giống nhau thì nên cập nhật liên tục các số lượng kí tự giống nhau cho đến khi duyệt xong hết chuỗi. Kết quả cuối cùng chính là lần cập nhật số kí tự giống nhau lớn nhất.
