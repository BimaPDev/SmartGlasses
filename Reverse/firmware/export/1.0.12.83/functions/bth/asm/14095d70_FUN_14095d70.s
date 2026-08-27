; FUN_14095d70 @ 0x14095d70 size=42
  push {r4,lr}
  sub sp,#0x10
  strd r1,r0,[sp,#0x8]
  str r2,[sp,#0x4]
  bl 0x140755e4
  ldrd r2,r1,[sp,#0x4]
  ldr r0,[sp,#0xc]
  bl 0x14087c44
  mov r4,r0
  bl 0x1407561c
  cmp r4,#0x0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x2
  add sp,#0x10
  pop {r4,pc}
