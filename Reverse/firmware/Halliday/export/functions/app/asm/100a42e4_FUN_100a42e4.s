; FUN_100a42e4 @ 0x100a42e4 size=58
  push {r4,r5,r6,lr}
  mov r5,r0
  movs r4,#0x0
  ldr r6,[0x100a4320]
  mov r0,r5
  ldr.w r1,[r6],#0x4
  bl 0x1011ea18
  cbz r0,0x100a4304
  adds r4,#0x1
  cmp r4,#0x5
  bne 0x100a42ec
  mvn r4,#0x15
  b 0x100a431a
  ldr r3,[0x100a4324]
  add.w r3,r3,r4, lsl #0x3
  ldrb r3,[r3,#0x4]
  lsls r2,r3,#0x1f
  bpl 0x100a42fe
  tst r3,#0x2
  it eq
  mvn.eq r4,#0x15
  mov r0,r4
  pop {r4,r5,r6,pc}
