char *digitChar= “0123456789ABCDEF”;
char d = digitChar[13]; // 1310= D16
char f = digitChar[15]; // 1310= F16

void DoiCoSo(int n,int b) {
char*digitChar= "0123456789ABCDEF";
//Tạo một stack lưu trữ kết quả
IntStack *stack = CreateStack(MAX);
do{
//Tính chữ số bên phải nhất,đẩy vào stack
PushStack(stack, n% b);
n/= b; //Thay n = n/b để tính tiếp
} while(n!= 0); //Lặp đến khi n = 0
while( !IsEmptyStack(stack) ){
// Rút lần lượt từng phần tửcủa stack
PopStack(stack, &n);
// chuyển sang dạng ký tự và in kết quả
printf(“%c”, digitChar[n]);
}
}