; FUN_2c5dfda8 @ 0x2c5dfda8 size=42
  cmp r1,#0xb
  it cs
  mov.cs r1,#0xb
  push {r4,r5,lr}
  mov r4,r1
  sub sp,#0xc
  ldr r5,[0x2c5dfdd8]
  strb.w r1,[r0,#0x54]
  strh.w r2,[r0,#0x56]
  movw r2,#0x2c7
  str r3,[r0,#0x58]
  movs r0,#0x4
  ldr r3,[0x2c5dfddc]
  ldr r1,[0x2c5dfde0]
  strd r5,r4,[sp,#0x0]
  bl 0x2c62c82c
