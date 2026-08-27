; FUN_2c651010 @ 0x2c651010 size=34
  push {r3,r4,r5,r6,r7,lr}
  ldr r7,[sp,#0x18]
  mov r6,r3
  mov r4,r0
  mov r5,r1
  mov r3,r7
  bl 0x2c650ea0
  cbz r7,0x2c65102e
  ldr r0,[r4,#0x0]
  mov r2,r7
  mov r1,r6
  add r0,r5
  bl 0x2c650c6e
  mov r0,r4
  pop {r3,r4,r5,r6,r7,pc}
