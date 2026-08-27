; FUN_2c64cdfc @ 0x2c64cdfc size=36
  movs r2,#0x0
  ldr r1,[0x2c64ce08]
  ldr r0,[0x2c64ce0c]
  b.w 0x2c66578c
  push {r3,lr}
  movs r2,#0x0
  mov r3,r0
  mov r0,r1
  ldr r1,[0x2c6657a8]
  str r2,[r3,#0x0]
  bl 0x2c66b624
  cbz r0,0x2c6657a4
  ldr r0,[0x2c6657ac]
  bl 0x2c6586c4
  pop {r3,pc}
