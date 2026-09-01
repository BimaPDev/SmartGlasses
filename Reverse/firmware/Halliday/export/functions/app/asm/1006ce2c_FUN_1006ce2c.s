; FUN_1006ce2c @ 0x1006ce2c size=92
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[r0,#0x4]
  mov r6,r0
  ldr r7,[r3,#0x0]
  mov r5,r2
  ldr r4,[r7,#0x0]
  cbz r1,0x1006ce6a
  cmp r2,#0x1
  bhi 0x1006ce82
  ldr r3,[r6,#0x8]
  ldr r3,[r3,#0x30]
  cbz r3,0x1006ce4c
  mov r0,r6
  blx r3
  cmp r0,#0x0
  beq 0x1006ce3e
  ldr r1,[0x1006ce88]
  cmp r5,#0x1
  and.w r1,r1,r4
  orr.w r1,r1,r5, lsl #0x1a
  itee ne
  mov.ne r2,r1
  orr.eq r2,r1,#0x20000
  orr.eq r2,r2,#0x200
  movs r0,#0x0
  str r2,[r7,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  cmp r2,#0x1
  bhi 0x1006ce82
  bic r3,r4,#0x3040000
  bic r3,r3,#0x10c00
  orr.w r2,r3,r2, lsl #0x18
  it eq
  orr.eq r2,r2,#0x10000
  b 0x1006ce64
  mvn r0,#0x15
  b 0x1006ce68
