## Translate
Bạn được cho một mảng gồm n số nguyên. 

Bạn muốn chỉnh sửa mảng sao cho nó trở thành mảng tăng dần, tức là mỗi phần tử ít nhất phải bằng phần tử trước đó. 

Trong mỗi bước, bạn có thể tăng giá trị của bất kỳ phần tử nào lên một. 

Vậy số bước tối thiểu cần thiết là bao nhiêu?

## Ý tưởng

```
Xét ví dụ: 3 2 5 1 7

3     -> không cần tăng gì cả -> 3
2 < 3 -> tăng 1 lần           -> 3
2 < 5 -> không cần tăng gì cả -> 5
1 < 5 -> tăng 4 lần           -> 5
1 < 7 -> không cần tăng gì cả -> 7

-> 5
```

Do xi luôn dương nên ta không cần xét đến số âm.

 Gọi mx là giá trị lớn nhất mà các phần tử cần đạt được để mảng trở thành mảng tăng dần. Vòng lặp duyệt qua từng phần tử của mảng, mỗi lần xét đến phần tử nào đó trong mảng, cập nhật mx thành giá trị lớn nhất giữa phần tử đó với mx. Nếu phần tử đó nhỏ hơn mx, tức là phần tử này cần được tăng lên để bằng mx (hoặc ít nhất là không nhỏ hơn mx). Do đó, số bước cần thiết để làm điều này là mx - phần tử đó. Đem đi cộng dồn lại sẽ được kết quả cần tìm.
