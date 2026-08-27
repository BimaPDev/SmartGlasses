; FUN_140746c8 @ 0x140746c8 size=86
  push {r4,r5,r6,lr}
  mov r4,r0
  sub sp,#0x8
  mrs r5,basepri
  cmp r5,#0x40
  beq 0x140746de
  mov r2,pc
  ldr r3,[0x14074724]
  strd r2,lr,[r3,#0x0]
  movs r3,#0x40
  msr basepri,r3
  cmp r4,#0xa
  bhi 0x1407470a
  ldr r3,[0x14074728]
  ldr.w r0,[r3,r4,lsl #0x2]
  cbz r0,0x14074704
  movs r0,#0x4
  cbnz r5,0x140746fc
  mov.w r2,#0xffffffff
  ldr r3,[0x14074724]
  str r2,[r3,#0x0]
  msr basepri,r5
  add sp,#0x8
  pop {r4,r5,r6,pc}
  str.w r1,[r3,r4,lsl #0x2]
  b 0x140746f2
  movs r6,#0xb
  mov.w r2,#0x178
  movs r0,#0x44
  ldr r3,[0x1407472c]
  ldr r1,[0x14074730]
  str r4,[sp,#0x0]
  str r6,[sp,#0x4]
  bl 0x1402a64c
