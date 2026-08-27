; FUN_2c499558 @ 0x2c499558 size=28
  push {r3,lr}
  cbz r0,0x2c499564
  bl 0x2c4984f4
  movs r0,#0x1
  pop {r3,pc}
  ldr r3,[0x2c499574]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  beq 0x2c499560
  bl 0x2c6448f0
  movs r0,#0x1
  pop {r3,pc}
