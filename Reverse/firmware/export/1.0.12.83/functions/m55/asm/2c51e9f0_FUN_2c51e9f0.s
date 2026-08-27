; FUN_2c51e9f0 @ 0x2c51e9f0 size=26
  push {r4,lr}
  ldr r4,[r0,#0xc]
  bl 0x2c602410
  ldr r3,[0x2c51ea0c]
  cmp r0,r3
  beq 0x2c51ea00
  pop {r4,pc}
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c51e898
