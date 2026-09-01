; FUN_100862ac @ 0x100862ac size=42
  cmp r0,#0x4
  push {r4,lr}
  bhi 0x100862ce
  ldr r3,[0x100862d8]
  ldr.w r4,[r3,r0,lsl #0x2]
  mov r0,r4
  bl 0x100869d4
  mov r0,r4
  bl 0x1011b4a2
  cmp r0,#0x16
  bhi 0x100862d2
  ldr r3,[0x100862dc]
  ldrb r0,[r3,r0]
  pop {r4,pc}
  movs r0,#0x2
  b 0x100862cc
  movs r0,#0x1
  b 0x100862cc
