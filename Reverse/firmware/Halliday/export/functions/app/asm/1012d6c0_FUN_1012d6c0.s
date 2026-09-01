; FUN_1012d6c0 @ 0x1012d6c0 size=58
  push {r3,r4,r5,r6,r7,lr}
  mov r7,r1
  movs r1,#0x2
  mov r4,r0
  mov r5,r2
  mov r6,r3
  bl 0x100a0310
  cbz r0,0x1012d6ee
  ldr r0,[r4,#0x28]
  cbz r0,0x1012d6dc
  ldr r3,[r4,#0x2c]
  cbnz r3,0x1012d6f4
  movs r0,#0x1
  add.w r3,r4,r0, lsl #0x2
  add r4,r0
  movs r0,#0x0
  str r7,[r3,#0x1c]
  strb.w r6,[r4,#0x24]
  str r5,[r3,#0x28]
  pop {r3,r4,r5,r6,r7,pc}
  mvn r0,#0x57
  b 0x1012d6ec
  mvn r0,#0xf
  b 0x1012d6ec
