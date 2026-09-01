; FUN_1011c770 @ 0x1011c770 size=56
  ldr r3,[r0,#0x0]
  push {r4,r5,r6,lr}
  ands r6,r3,#0x1
  mov r5,r0
  mov r4,r2
  beq 0x1011c78a
  mov r3,r2
  mov r2,r1
  mov r1,r0
  bl 0x1011c726
  mov r6,r0
  mov r1,r4
  mov r0,r5
  bl 0x1011c756
  cbz r6,0x1011c7a6
  add.w r2,r4,#0x40000000
  subs r2,#0x1
  ldr.w r3,[r5,r2,lsl #0x2]
  orr r3,r3,#0x80000000
  str.w r3,[r5,r2,lsl #0x2]
  pop {r4,r5,r6,pc}
