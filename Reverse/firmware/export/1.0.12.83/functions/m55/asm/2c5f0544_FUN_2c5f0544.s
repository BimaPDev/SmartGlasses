; FUN_2c5f0544 @ 0x2c5f0544 size=34
  push {r4,r5,r6,lr}
  mov r6,r0
  cbz r0,0x2c5f0562
  mov r4,r0
  ldr r5,[0x2c5f0568]
  b 0x2c5f0554
  ldr r4,[r4,#0x4]
  cbz r4,0x2c5f0562
  mov r0,r4
  mov r1,r5
  bl 0x2c606c04
  cmp r0,#0x0
  beq 0x2c5f0550
  ldr r6,[r4,#0x38]
  mov r0,r6
  pop {r4,r5,r6,pc}
