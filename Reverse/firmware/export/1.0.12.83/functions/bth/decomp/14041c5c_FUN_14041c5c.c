/* FUN_14041c5c @ 0x14041c5c */

void FUN_14041c5c(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  undefined4 uVar9;
  
  uVar8 = DAT_14041cb0;
  uVar9 = DAT_14041cb4;
  FUN_1402a6e8(4,0x280,DAT_14041cbc,DAT_14041cb8,DAT_14041cb0,DAT_14041cb4);
  iVar7 = DAT_14041cc0;
  if (param_2 == 0) {
    return;
  }
  if (7 < param_2) {
    param_2 = 8;
  }
  iVar5 = DAT_14041cc0 + 0x2c7;
  *(char *)(DAT_14041cc0 + 0x2c6) = (char)param_2;
  FUN_140e5278(iVar5,param_1,param_2 * 0x28);
  *(undefined1 *)(iVar7 + 0x2c4) = 1;
  FUN_1402a6e8(4,0x7d5,DAT_14045124,DAT_14045120,DAT_14045118,DAT_1404511c,uVar8,uVar9,unaff_r4,
               unaff_r5,unaff_r6,unaff_lr);
  puVar3 = DAT_1404512c;
  pcVar2 = DAT_14045128;
  if (param_2 == 0) {
    return;
  }
  if (7 < param_2) {
    param_2 = 8;
  }
  pcVar6 = DAT_14045128 + 0xcfe;
  DAT_14045128[0xcfd] = (char)param_2;
  FUN_140e5278(pcVar6,param_1,param_2 * 0x28);
  FUN_1402a6e8(4,0x78a,DAT_14045124,DAT_14045120,DAT_14045134,DAT_14045130,*pcVar2,*puVar3,unaff_r4,
               unaff_r5,unaff_r6,unaff_lr);
  iVar7 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar4 = DAT_14045138;
  if (iVar7 == 0) {
    if (*pcVar2 != '\0') {
      uVar8 = *(undefined4 *)(pcVar2 + 0xe42);
      uVar1 = *DAT_14045138;
      pcVar2[0xcfc] = '\x01';
      *puVar4 = uVar1 | 0x100;
      FUN_140e52d8(uVar8);
      return;
    }
    uVar8 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14045138;
    *puVar3 = 8;
    *puVar4 = uVar1 & 0xfeff;
    *pcVar2 = '\x01';
    FUN_140e52d8(uVar8);
    FUN_14048958(0,0,LAB_1404513c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x710,DAT_14045140);
}

