; FUN_10064adc @ 0x10064adc size=38
  push {r3,r4,r5,lr}
  ldr r5,[0x10064b04]
  mov r4,r0
  ldr r3,[r5,#0x0]
  cbz r3,0x10064af8
  cmp r3,r0
  bne 0x10064af8
  movs r2,#0x10
  movs r1,#0x0
  adds r0,r5,#0x4
  bl 0x1011ea48
  movs r3,#0x0
  str r3,[r5,#0x0]
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x1012d1f4
