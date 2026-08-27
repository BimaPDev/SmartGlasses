; FUN_2c648712 @ 0x2c648712 size=38
  push {r3,r4,r5,lr}
  ldr r3,[0x2c648738]
  ldrb r3,[r3,#0x0]
  cbnz r3,0x2c648730
  mov r5,r0
  mov r4,r1
  bl 0x2c648328
  mov r3,r0
  cbz r0,0x2c64872c
  mov r1,r4
  mov r0,r5
  blx r3
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  pop.w {r3,r4,r5,lr}
  b.w 0x2c673a28
