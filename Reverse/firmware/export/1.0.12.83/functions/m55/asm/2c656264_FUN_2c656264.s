; FUN_2c656264 @ 0x2c656264 size=34
  push {r0,r1,r2,r4,r5,lr}
  ldr r5,[r0,#0x4]
  cmp r1,r5
  bls 0x2c656278
  mov r2,r1
  mov r3,r5
  ldr r1,[0x2c656288]
  ldr r0,[0x2c65628c]
  bl 0x2c65868c
  str r3,[sp,#0x0]
  mov r3,r2
  movs r2,#0x0
  bl 0x2c664b04
  add sp,#0xc
  pop {r4,r5,pc}
