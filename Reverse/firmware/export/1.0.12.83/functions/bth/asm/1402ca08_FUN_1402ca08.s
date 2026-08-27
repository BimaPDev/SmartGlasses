; FUN_1402ca08 @ 0x1402ca08 size=36
  cmp r0,#0x1
  push {r4,lr}
  bhi 0x1402ca24
  ldr r3,[0x1402ca2c]
  ldr r4,[0x1402ca30]
  str.w r1,[r3,r0,lsl #0x2]
  ldr r3,[0x1402ca34]
  ldr r1,[0x1402ca38]
  str.w r2,[r4,r0,lsl #0x2]
  str.w r1,[r3,r0,lsl #0x2]
  pop {r4,pc}
  mov r1,r0
  ldr r0,[0x1402ca3c]
  bl 0x1402b0f8
