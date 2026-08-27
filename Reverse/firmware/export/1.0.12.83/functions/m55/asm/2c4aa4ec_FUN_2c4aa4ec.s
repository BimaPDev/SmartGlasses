; FUN_2c4aa4ec @ 0x2c4aa4ec size=24
  push {r3,lr}
  ldr r3,[0x2c4aa504]
  mov r1,r0
  ldr r0,[r3,#0x0]
  bl 0x2c4c2cd8
  cbz r0,0x2c4aa4fc
  pop {r3,pc}
  ldr r1,[0x2c4aa508]
  ldr r0,[0x2c4aa50c]
  bl 0x2c673ca8
