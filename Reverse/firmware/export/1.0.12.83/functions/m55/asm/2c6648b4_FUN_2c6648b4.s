; FUN_2c6648b4 @ 0x2c6648b4 size=24
  push {r3,lr}
  mov r3,r0
  mov r0,r1
  mov r1,r2
  ldr r3,[r3,#0x4]
  cmp r0,r3
  bls 0x2c6648ca
  mov r2,r0
  ldr r0,[0x2c6648cc]
  bl 0x2c65868c
  pop {r3,pc}
