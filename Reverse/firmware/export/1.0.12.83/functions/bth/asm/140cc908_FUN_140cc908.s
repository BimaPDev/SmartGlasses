; FUN_140cc908 @ 0x140cc908 size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x140cc938]
  bl 0x140c03c0
  ldr r3,[r4,#0x0]
  ldrd r2,r3,[r3,#0x4]
  cmp r3,r0
  bls 0x140cc922
  ldr.w r0,[r2,r0,lsl #0x2]
  cbnz r0,0x140cc926
  bl 0x140cb7fa
  movs r3,#0x0
  ldr r2,[0x140cc93c]
  ldr r1,[0x140cc940]
  bl 0x140d7e50
  cbnz r0,0x140cc936
  bl 0x140d7f02
  pop {r4,pc}
