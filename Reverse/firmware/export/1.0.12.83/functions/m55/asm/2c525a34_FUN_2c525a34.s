; FUN_2c525a34 @ 0x2c525a34 size=24
  push {r3,r4,r5,lr}
  ldr r5,[r0,#0x10]
  cbz r5,0x2c525a4e
  mov r4,r0
  mov r0,r5
  bl 0x2c527998
  mov r1,r5
  movs r0,#0x0
  bl 0x2c472680
  pop {r3,r4,r5,pc}
