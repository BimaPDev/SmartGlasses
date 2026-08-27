; FUN_2c4e8744 @ 0x2c4e8744 size=40
  push {r4,lr}
  ldr r0,[r1,#0x0]
  bl 0x2c4efeec
  uxtb r4,r0
  cmp r4,#0x4
  bhi 0x2c4e875e
  mov r0,r4
  bl 0x2c48925c
  cbz r0,0x2c4e8768
  ldr r0,[0x2c4e876c]
  pop {r4,pc}
  mov r0,r4
  bl 0x2c4e861c
  cmp r0,#0x0
  bne 0x2c4e8752
  ldr r0,[0x2c4e8770]
  pop {r4,pc}
