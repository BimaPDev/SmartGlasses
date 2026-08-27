/* FUN_140a11ac @ 0x140a11ac */

void FUN_140a11ac(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_140 [6];
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 auStack_138 [16];
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 auStack_126 [250];
  int local_2c;
  
  uVar5 = DAT_140a1124;
  uVar4 = DAT_140a1120;
  piVar3 = DAT_140a111c;
  uVar2 = DAT_140a10f8;
  uVar1 = DAT_140a10f4;
  if (*DAT_140a11f0 == 0) {
    FUN_1402a6e8(4,0x127,DAT_140a11fc,DAT_140a11f8);
  }
  else {
    if (*(int *)(*DAT_140a11f0 + 0x16c) != 0) {
      iVar6 = *DAT_140a111c;
      local_2c = *DAT_140a10f0;
      if (*(int *)(iVar6 + 0x16c) != 0) {
        uVar7 = 0;
        do {
          FUN_140e5278(auStack_140,uVar7 * 0x118 + iVar6 + 0x170,0x112);
          FUN_1402a6e8(4,0x10c,uVar2,uVar1,DAT_140a10fc);
          FUN_1402a9fc(uVar4,1,6,auStack_140);
          FUN_1402a6e8(4,0x10f,uVar2,uVar1,DAT_140a1100);
          FUN_1402a9fc(uVar5,1,1,&uStack_13a);
          FUN_1402a6e8(4,0x111,uVar2,uVar1,DAT_140a1104);
          FUN_1402a9fc(uVar5,1,1,&uStack_139);
          FUN_1402a6e8(4,0x114,uVar2,uVar1,DAT_140a1108);
          FUN_1402a9fc(uVar4,1,0x10,auStack_138);
          FUN_1402a6e8(4,0x118,uVar2,uVar1,DAT_140a110c,auStack_126);
          FUN_1402a6e8(4,0x11c,uVar2,uVar1,DAT_140a1110);
          FUN_1402a9fc(DAT_140a1114,1,1,&uStack_128);
          FUN_1402a6e8(4,0x11e,uVar2,uVar1,DAT_140a1118);
          FUN_1402a9fc(DAT_140a1114,1,1,&uStack_127);
          iVar6 = *piVar3;
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < *(uint *)(iVar6 + 0x16c));
      }
      if (*DAT_140a10f0 == local_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
    FUN_1402a6e8(4,0x13a,DAT_140a11fc,DAT_140a11f8);
  }
  return;
}

