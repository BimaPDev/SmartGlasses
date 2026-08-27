; FUN_2c51bfcc @ 0x2c51bfcc size=22
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r2,[0x2c51bfe4]
  mov r0,r4
  str r2,[r4,#0x0]
  strd r3,r3,[r4,#0xc]
  pop {r4,pc}
