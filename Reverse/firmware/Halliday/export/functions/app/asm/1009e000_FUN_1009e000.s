; FUN_1009e000 @ 0x1009e000 size=34
  push {r4,r5,r6,lr}
  mov r5,r0
  ldr r4,[0x1009e024]
  ldr r6,[0x1009e028]
  cmp r4,r6
  bcc 0x1009e012
  movs r4,#0x0
  mov r0,r4
  pop {r4,r5,r6,pc}
  mov r1,r5
  ldr r0,[r4,#0x0]
  bl 0x1011ea18
  cmp r0,#0x0
  beq 0x1009e00e
  adds r4,#0x20
  b 0x1009e008
