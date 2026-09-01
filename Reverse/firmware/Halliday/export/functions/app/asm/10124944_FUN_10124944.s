; FUN_10124944 @ 0x10124944 size=50
  push {r3,r4,r5,r6,r7,lr}
  ldr r4,[r0,#0x0]
  mov r6,r1
  cbz r4,0x10124954
  movs r5,#0x0
  ldr r7,[r4,#0x4]
  cmp r7,r5
  bne 0x10124958
  movs r0,#0x0
  pop {r3,r4,r5,r6,r7,pc}
  ldr r3,[r4,#0x0]
  ldr.w r0,[r3,r5,lsl #0x2]
  cmp r0,r6
  beq 0x10124972
  mov r1,r6
  adds r0,#0x8
  bl 0x10124944
  cmp r0,#0x0
  bne 0x10124956
  adds r5,#0x1
  b 0x10124950
  movs r0,#0x1
  b 0x10124956
