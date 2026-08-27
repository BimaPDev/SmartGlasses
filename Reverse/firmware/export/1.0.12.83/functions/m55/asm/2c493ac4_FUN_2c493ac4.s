; FUN_2c493ac4 @ 0x2c493ac4 size=46
  push {r4,r5,r6,lr}
  mov r5,r2
  sub sp,#0x10
  mov r0,r1
  ldr r6,[0x2c493af8]
  bl 0x2c492f24
  mov r4,r0
  mov r0,r5
  ldr r5,[0x2c493afc]
  bl 0x2c492f3c
  ldr r3,[0x2c493b00]
  ldr r2,[0x2c493b04]
  movw r1,#0x2cf
  strd r4,r0,[sp,#0x8]
  strd r5,r6,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
