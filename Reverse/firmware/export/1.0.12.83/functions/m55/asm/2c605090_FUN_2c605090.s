; FUN_2c605090 @ 0x2c605090 size=38
  push {r4,lr}
  movs r2,#0x16
  movs r1,#0x0
  mov r4,r0
  bl 0x2c6033b4
  uxtb r0,r0
  cmp r0,#0x1
  bne 0x2c6050ac
  ldr r0,[r4,#0x8]
  cbz r0,0x2c6050aa
  ldrsh.w r0,[r0,#0x10]
  pop {r4,pc}
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c6046d8
