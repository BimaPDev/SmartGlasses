; FUN_14095d9c @ 0x14095d9c size=26
  push {r4,lr}
  bl 0x140755e4
  bl 0x14087c80
  mov r4,r0
  bl 0x1407561c
  cmp r4,#0x0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x2
  pop {r4,pc}
