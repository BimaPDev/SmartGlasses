; FUN_2c65e95c @ 0x2c65e95c size=24
  push {r3,lr}
  mov r3,r0
  mov r0,r1
  mov r1,r2
  ldr r3,[r3,#0x4]
  cmp r0,r3
  bls 0x2c65e972
  mov r2,r0
  ldr r0,[0x2c65e974]
  bl 0x2c65868c
  pop {r3,pc}
