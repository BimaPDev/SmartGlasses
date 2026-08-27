; FUN_140874f4 @ 0x140874f4 size=62
  push {r3,r4,r5,lr}
  movs r2,#0x0
  mov r4,r0
  movs r1,#0x1
  movw r0,#0xc1a
  bl 0x1407772c
  cbz r0,0x140874ec
  movs r1,#0x1
  mov r5,r0
  bl 0x14075458
  mov r3,r0
  and r2,r4,#0x3
  ldr r1,[0x140874f0]
  strb r2,[r3,#0x0]
  movs r0,#0x41
  bl 0x1402a64c
  movs r0,#0x1
  pop {r3,r4,r5,pc}
  ldr r3,[0x14087504]
  strb r0,[r3,#0x0]
  add.w r0,r0,r1, lsl #0x1
  sxtb r0,r0
  strb r1,[r3,#0x1]
  b.w 0x140874b8
