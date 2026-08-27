; FUN_2c5e735c @ 0x2c5e735c size=38
  ldr r3,[0x2c5e7390]
  push {r4,lr}
  ldr r4,[r3,#0x10]
  sub sp,#0x8
  ldr r3,[r4,#0x4]
  cbz r3,0x2c5e736c
  cmp r0,#0x5
  beq 0x2c5e7370
  add sp,#0x8
  pop {r4,pc}
  ldr r2,[0x2c5e7394]
  movs r0,#0x4
  ldr r1,[0x2c5e7398]
  str r2,[sp,#0x0]
  movw r2,#0x28f
  ldr r3,[0x2c5e739c]
  bl 0x2c62c82c
