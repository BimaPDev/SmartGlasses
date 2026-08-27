; FUN_2c658218 @ 0x2c658218 size=132
  push {r4,r5,r6,r7,r8,r9,lr}
  sub sp,#0x34
  mov r4,r3
  mov r8,r0
  add r3,sp,#0x8
  mov r0,sp
  str r3,[sp,#0x0]
  bl 0x2c6581d0
  add r3,sp,#0x20
  ldr r2,[sp,#0x50]
  mov r1,r4
  add r0,sp,#0x18
  str r3,[sp,#0x18]
  bl 0x2c6581d0
  ldrd r9,r7,[sp,#0x0]
  ldrd r5,r6,[sp,#0x18]
  add.w r7,r9,r7, lsl #0x2
  add.w r6,r5,r6, lsl #0x2
  mov r2,r5
  mov r1,r9
  mov r0,r8
  bl 0x2c665a52
  mov r4,r0
  cbnz r0,0x2c658278
  mov r0,r9
  bl 0x2c66ea0c
  add.w r9,r9,r0, lsl #0x2
  mov r0,r5
  bl 0x2c66ea0c
  cmp r7,r9
  add.w r4,r5,r0, lsl #0x2
  bne 0x2c65828c
  subs r4,r6,r4
  it ne
  mov.ne.w r4,#0xffffffff
  add r0,sp,#0x18
  bl 0x2c6648a4
  mov r0,sp
  bl 0x2c6648a4
  mov r0,r4
  add sp,#0x34
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  cmp r6,r4
  beq 0x2c658298
  add.w r9,r9,#0x4
  adds r5,r4,#0x4
  b 0x2c65824a
  movs r4,#0x1
  b 0x2c658278
