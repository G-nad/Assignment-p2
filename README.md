***Assignment p2***
>
>
---
**Làm tròn**
![image](https://github.com/user-attachments/assets/3c909518-acda-4992-a7f3-7afcaf8cb3e7)
Làm theo đề bảo, sử dùng hàm round để làm tròn.

>
---
**In hình chữ nhật**
![image](https://github.com/user-attachments/assets/6ee5243b-87a8-452c-8a9e-018abf57829e)
Nhập xuất cơ bản.

>
---
**Tách chữ số**
![image](https://github.com/user-attachments/assets/a89d2e0f-8036-401f-9af2-6ceafdc4d58a)
Dùng phép lấy dư để tách ra từng chữ số.

**Tiền trà sữa**
![image](https://github.com/user-attachments/assets/79c03ef5-a94d-44f8-88ac-950a42580101)
Đọc KĨ đề, làm theo đề bảo.

>
---
**Làm tròn hỗn số**
![image](https://github.com/user-attachments/assets/a322f309-c271-4560-82e3-8558f974af8a)
Xử lý phần số nguyên: Giống với bài làm tròn, nhưng vì chỉ được sử dụng thư viện <iosstream> nên ta phải lập trình làm tròn mà không sử dụng hàm round.
>
Xử lý phần phân số:
>
  Gọi X là phần nguyên, Y là phần thập phân sau khi tính toán.
  Ta cần tìm phân số có dạng ```i * (1/n)``` với i: 1 -> n + 1, ở đây ta đặt ```1/n``` là sum
  Nhân Y và sum với 1e18 (Giảm thiểu sai số)
  (Ở đây, ta có thể tìm sum bằng cách mô phỏng phép chia bằng "tay" như cách ta thực hiện phép chia khi học tiểu học)
  Tiếp theo, ta tìm 2 tử số A, B của 2 phân số cũng có dạng ```i * (1/n)``` sao cho A <= Y < B, A lớn nhất, B nhỏ nhất
  So sánh khoảng cách từ Y đến A, từ B đến Y, khoảng cách nào nhỏ hơn thì tử số đó chính là tử số của phân số ```i * (1/n)``` mà ta cần tìm.




