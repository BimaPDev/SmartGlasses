/* FUN_140b2094 @ 0x140b2094 */

void FUN_140b2094(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined4 unaff_r4;
  
  FUN_1402a6e8(4,0xa8,DAT_140b20cc,DAT_140b20d0,DAT_140b20c8,DAT_140b20c4);
  puVar4 = (undefined1 *)FUN_14053dc8(2);
  uVar2 = *(undefined2 *)(puVar4 + 0x20);
  if ((puVar4 != (undefined1 *)0x0) && (puVar4[1] != -1)) {
    puVar3 = (undefined2 *)FUN_14074378(0xb00,2,0,0xc);
    *puVar3 = 0x305;
    puVar3[1] = 0x940a;
    *(undefined1 *)(puVar3 + 2) = *puVar4;
    uVar1 = puVar4[1];
    puVar3[3] = uVar2;
    *(undefined1 *)((int)puVar3 + 5) = uVar1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    FUN_140743d0();
    return;
  }
  FUN_1402a6e8(4,0x17,DAT_140b1d38,DAT_140b1d34,DAT_140b1d30,DAT_140b1d2c,unaff_r4);
  return;
}

