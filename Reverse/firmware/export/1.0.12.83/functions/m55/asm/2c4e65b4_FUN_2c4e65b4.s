; FUN_2c4e65b4 @ 0x2c4e65b4 size=50
  push {r4,lr}
  ldr r3,[r0,#0x0]
  mov r4,r0
  cmp.w r3,#0x1f40
  beq 0x2c4e65ca
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c4c3340
  ldr r0,[r0,#0x4]
  bl 0x2c4c3340
  ldr r0,[r4,#0x8]
  bl 0x2c4e6530
  ldr r0,[r4,#0xc]
  bl 0x2c4e6530
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c4c3340
