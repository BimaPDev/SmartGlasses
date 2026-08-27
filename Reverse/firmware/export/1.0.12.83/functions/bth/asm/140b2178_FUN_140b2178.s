; FUN_140b2178 @ 0x140b2178 size=16
  push {r4,lr}
  mov r4,r0
  movs r0,#0x2
  bl 0x14053dc8
  cbz r0,0x140b2186
  strb r4,[r0,#0x1]
  pop {r4,pc}
