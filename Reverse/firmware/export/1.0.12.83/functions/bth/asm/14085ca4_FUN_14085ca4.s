; FUN_14085ca4 @ 0x14085ca4 size=38
  push {r3,r4,r5,lr}
  mov r5,r0
  bl 0x14085c48
  mov r4,r0
  cbz r0,0x14085cb4
  mov r0,r4
  pop {r3,r4,r5,pc}
  mov r0,r5
  bl 0x14085ad0
  mov r4,r0
  cmp r0,#0x0
  bne 0x14085cb0
  ldr r2,[0x14085ccc]
  ldr r1,[0x14085cd0]
  movs r0,#0x41
  bl 0x1402a64c
