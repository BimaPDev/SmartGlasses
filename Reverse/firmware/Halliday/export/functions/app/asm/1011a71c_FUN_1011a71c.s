; FUN_1011a71c @ 0x1011a71c size=32
  push {r4,r5,r6,lr}
  movs r2,#0x0
  mov r4,r0
  mov r5,r1
  adds r6,r0,#0x4
  cmp r2,r5
  blt 0x1011a72c
  pop {r4,r5,r6,pc}
  ldr.w r1,[r6,r2,lsl #0x3]
  ldr.w r0,[r4,r2,lsl #0x3]
  bl 0x1011a6dc
  adds r2,#0x1
  b 0x1011a726
