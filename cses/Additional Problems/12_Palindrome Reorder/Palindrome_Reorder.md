## Translate
Cho một chuỗi, công việc của bạn là sắp xếp lại các ký tự của chuỗi sao cho nó trở thành một chuỗi đối xứng (tức là đọc giống nhau từ trái sang phải và từ phải sang trái).

## Ý tưởng
Để thực hiện kiểm tra và tạo nên một chuỗi đối xứng, ta cần 1 mảng c đếm để đếm các tần suất xuất hiện của các kí tự trong chuỗi ban đầu. Ta sử dụng chỉ số từ 0 đến 25, đại diện cho các ký tự 'A' đến 'Z'. Duyệt qua từng ký tự trong chuỗi s, tăng giá trị tương ứng trong mảng c dựa trên chỉ số của ký tự đó. Cụ thể, d - 'A' giúp tính toán vị trí của ký tự trong bảng chữ cái.

Duyệt đếm số ký tự có tần suất lẻ. Kiểm tra xem tần suất của ký tự tại vị trí i có phải là số lẻ hay không. Nếu có hơn một ký tự có tần suất lẻ, thì không thể tạo thành một chuỗi palindrome. Trong trường hợp này, in "NO SOLUTION" và kết thúc luôn.

Ngược lại, tạo ra nửa chuỗi palindrome. 

Một chuỗi palindrome có dạng: xxx...yyy...xxx (trong đó nửa đầu và nửa cuối giống nhau).

kiểm tra xem tần suất của ký tự tại vị trí i có phải là số chẵn không (nếu tần suất là số chẵn, thì lấy một nửa số lượng ký tự đó để đưa vào nửa chuỗi t). Nếu điều kiện thỏa mãn, thêm một nửa số ký tự i vào chuỗi t. Ta được một nữa chuỗi palindrome và in ra nửa chuỗi đó.

Kiểm tra và in ký tự giữa (nếu có). Nếu có ký tự nào có tần suất lẻ (tức là có thể có một ký tự xuất hiện ở giữa chuỗi palindrome), in ra toàn bộ số lượng của ký tự đó (chỉ có một ký tự này trong chuỗi palindrome).

Cuối cùng đảo ngược chuỗi t (nửa chuỗi đã tạo ra ở trước đó rồi) và in ra nửa chuỗi đảo ngược tiếp, hoàn thiện chuỗi palindrome cần tìm.
