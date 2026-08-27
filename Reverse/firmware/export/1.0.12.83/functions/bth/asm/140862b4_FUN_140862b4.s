; FUN_140862b4 @ 0x140862b4 size=18
  push {r3,lr}
  bl 0x14085cd4
  cbz r0,0x140862c2
  ldrb.w r0,[r0,#0x52]
  pop {r3,pc}
  movs r0,#0xff
  pop {r3,pc}
