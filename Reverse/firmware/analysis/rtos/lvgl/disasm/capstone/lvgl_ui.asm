; lvgl_ui  entry=0x2c63f228  file=0x62f228
; text_base=0x2c010000  insns=138  returns=1
; service_loop conditional_flag_wait_back_edge  0x2c63f2d4 bcond -> 0x2c63f2c2

0x2c63f228  30b5          push {r4, r5, lr}
0x2c63f22a  3f4c          ldr r4, [pc, #0xfc]
0x2c63f22c  83b0          sub sp, #0xc
0x2c63f22e  3f4b          ldr r3, [pc, #0xfc]
0x2c63f230  4f21          movs r1, #0x4f
0x2c63f232  3f4a          ldr r2, [pc, #0xfc]
0x2c63f234  0420          movs r0, #4
0x2c63f236  0094          str r4, [sp]
0x2c63f238  3e4c          ldr r4, [pc, #0xf8]
0x2c63f23a  44f0a5fd      bl #0x2c683d88
0x2c63f23e  3e48          ldr r0, [pc, #0xf8]
0x2c63f240  fdf7eefa      bl #0x2c63c820
0x2c63f244  85f678fb      bl #0x2c4c4938
0x2c63f248  d7f786fb      bl #0x2c616958
0x2c63f24c  00f030fb      bl #0x2c63f8b0
0x2c63f250  00f04cf9      bl #0x2c63f4ec
0x2c63f254  12f08ef9      bl #0x2c651574
0x2c63f258  56f662ff      bl #0x2c496120
0x2c63f25c  cff7f2fc      bl #0x2c60ec44
0x2c63f260  bff7defb      bl #0x2c5fea20
0x2c63f264  12f06efb      bl #0x2c651944
0x2c63f268  11f084ff      bl #0x2c651174
0x2c63f26c  13f0f6fc      bl #0x2c652c5c
0x2c63f270  2e4b          ldr r3, [pc, #0xb8]
0x2c63f272  2f4a          ldr r2, [pc, #0xbc]
0x2c63f274  6f21          movs r1, #0x6f
0x2c63f276  0020          movs r0, #0
0x2c63f278  0094          str r4, [sp]
0x2c63f27a  44f085fd      bl #0x2c683d88
0x2c63f27e  fff751ff      bl #0x2c63f124
0x2c63f282  0028          cmp r0, #0
0x2c63f284  45db          blt #0x2c63f312
0x2c63f286  13f097ff      bl #0x2c6531b8
0x2c63f28a  fff7afff      bl #0x2c63f1ec
0x2c63f28e  bcf6e5fe      bl #0x2c4fc05c
0x2c63f292  13f039fd      bl #0x2c652d08
0x2c63f296  0028          cmp r0, #0
0x2c63f298  38d1          bne #0x2c63f30c
0x2c63f29a  284b          ldr r3, [pc, #0xa0]
0x2c63f29c  284c          ldr r4, [pc, #0xa0]
0x2c63f29e  1868          ldr r0, [r3]
0x2c63f2a0  17f0ccff      bl #0x2c65723c
0x2c63f2a4  0121          movs r1, #1
0x2c63f2a6  274a          ldr r2, [pc, #0x9c]
0x2c63f2a8  2748          ldr r0, [pc, #0x9c]
0x2c63f2aa  0092          str r2, [sp]
0x2c63f2ac  1f4b          ldr r3, [pc, #0x7c]
0x2c63f2ae  0170          strb r1, [r0]
0x2c63f2b0  0020          movs r0, #0
0x2c63f2b2  2170          strb r1, [r4]
0x2c63f2b4  a121          movs r1, #0xa1
0x2c63f2b6  1e4a          ldr r2, [pc, #0x78]
0x2c63f2b8  44f066fd      bl #0x2c683d88
0x2c63f2bc  2378          ldrb r3, [r4]
0x2c63f2be  53b1          cbz r3, #0x2c63f2d6
0x2c63f2c0  224d          ldr r5, [pc, #0x88]
0x2c63f2c2  fcf791fc      bl #0x2c63bbe8
0x2c63f2c6  4ff0ff31      mov.w r1, #-1
0x2c63f2ca  2868          ldr r0, [r5]
0x2c63f2cc  17f072ff      bl #0x2c6571b4
0x2c63f2d0  2378          ldrb r3, [r4]
0x2c63f2d2  002b          cmp r3, #0
0x2c63f2d4  f5d1          bne #0x2c63f2c2
0x2c63f2d6  1e48          ldr r0, [pc, #0x78]
0x2c63f2d8  aa21          movs r1, #0xaa
0x2c63f2da  144b          ldr r3, [pc, #0x50]
0x2c63f2dc  144a          ldr r2, [pc, #0x50]
0x2c63f2de  0090          str r0, [sp]
0x2c63f2e0  0420          movs r0, #4
0x2c63f2e2  44f051fd      bl #0x2c683d88
0x2c63f2e6  cef61ffb      bl #0x2c50d928
0x2c63f2ea  cff7bbfc      bl #0x2c60ec64
0x2c63f2ee  bff7a9fb      bl #0x2c5fea44
0x2c63f2f2  12f063f9      bl #0x2c6515bc
0x2c63f2f6  11f0c9ff      bl #0x2c65128c
0x2c63f2fa  00f045f9      bl #0x2c63f588
0x2c63f2fe  00f0fdfa      bl #0x2c63f8fc
0x2c63f302  03b0          add sp, #0xc
0x2c63f304  bde83040      pop.w {r4, r5, lr}
0x2c63f308  d7f76cbb      b.w #0x2c6169e4
0x2c63f30c  cef6fef9      bl #0x2c50d70c
0x2c63f310  c3e7          b #0x2c63f29a
0x2c63f312  1048          ldr r0, [pc, #0x40]
0x2c63f314  8321          movs r1, #0x83
0x2c63f316  054b          ldr r3, [pc, #0x14]
0x2c63f318  054a          ldr r2, [pc, #0x14]
0x2c63f31a  0090          str r0, [sp]
0x2c63f31c  0020          movs r0, #0
0x2c63f31e  44f033fd      bl #0x2c683d88
0x2c63f322  03b0          add sp, #0xc
0x2c63f324  30bd          pop {r4, r5, pc}
0x2c63f4ec  30b5          push {r4, r5, lr}
0x2c63f4ee  1c4c          ldr r4, [pc, #0x70]
0x2c63f4f0  83b0          sub sp, #0xc
0x2c63f4f2  d3f719fc      bl #0x2c612d28
0x2c63f4f6  0225          movs r5, #2
0x2c63f4f8  0190          str r0, [sp, #4]
0x2c63f4fa  d3f76dfc      bl #0x2c612dd8
0x2c63f4fe  0bf06ffd      bl #0x2c64afe0
0x2c63f502  2046          mov r0, r4
0x2c63f504  fbf726f8      bl #0x2c63a554
0x2c63f508  164b          ldr r3, [pc, #0x58]
0x2c63f50a  2046          mov r0, r4
0x2c63f50c  2570          strb r5, [r4]
0x2c63f50e  6360          str r3, [r4, #4]
0x2c63f510  fbf730f8      bl #0x2c63a574
0x2c63f514  144b          ldr r3, [pc, #0x50]
0x2c63f516  0199          ldr r1, [sp, #4]
0x2c63f518  144c          ldr r4, [pc, #0x50]
0x2c63f51a  1860          str r0, [r3]
0x2c63f51c  d0f74cf8      bl #0x2c60f5b8
0x2c63f520  1348          ldr r0, [pc, #0x4c]
0x2c63f522  5af62ff8      bl #0x2c499584
0x2c63f526  2046          mov r0, r4
0x2c63f528  fbf714f8      bl #0x2c63a554
0x2c63f52c  114b          ldr r3, [pc, #0x44]
0x2c63f52e  2046          mov r0, r4
0x2c63f530  2570          strb r5, [r4]
0x2c63f532  6360          str r3, [r4, #4]
0x2c63f534  fbf71ef8      bl #0x2c63a574
0x2c63f538  0f4c          ldr r4, [pc, #0x3c]
0x2c63f53a  104b          ldr r3, [pc, #0x40]
0x2c63f53c  1860          str r0, [r3]
0x2c63f53e  2046          mov r0, r4
0x2c63f540  fbf708f8      bl #0x2c63a554
0x2c63f544  0e4b          ldr r3, [pc, #0x38]
0x2c63f546  2046          mov r0, r4
0x2c63f548  2570          strb r5, [r4]
0x2c63f54a  6360          str r3, [r4, #4]
0x2c63f54c  fbf712f8      bl #0x2c63a574
0x2c63f550  0c4b          ldr r3, [pc, #0x30]
0x2c63f552  0199          ldr r1, [sp, #4]
0x2c63f554  1860          str r0, [r3]
0x2c63f556  03b0          add sp, #0xc
0x2c63f558  bde83040      pop.w {r4, r5, lr}
0x2c63f55c  d0f72cb8      b.w #0x2c60f5b8
0x2c63f588  0148          ldr r0, [pc, #4]
0x2c63f58a  5af66fb8      b.w #0x2c49966c
