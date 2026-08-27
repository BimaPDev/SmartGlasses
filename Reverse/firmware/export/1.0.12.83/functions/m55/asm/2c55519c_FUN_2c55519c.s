; FUN_2c55519c @ 0x2c55519c size=40
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c5551c8]
  ldr.w r3,[r3,#-0x14]
  adds r4,r0,r3
  str r2,[r0,r3]
  mov r3,r4
  ldr.w r1,[r3,#0x8]!
  adds r3,#0x8
  cmp r1,r3
  beq 0x2c5551bc
  movs r0,#0x0
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x0
  bl 0x2c472680
