/* FUN_1409ebdc @ 0x1409ebdc */

void FUN_1409ebdc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  int iVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined2 local_18;
  uint local_14;
  
  piVar1 = DAT_1409eca4;
  iVar2 = DAT_1409ec9c;
  uVar6 = (uint)*(ushort *)(DAT_1409ec9c + 0x800);
  local_1c = *DAT_1409eca0;
  local_18 = (undefined2)DAT_1409eca0[1];
  local_14 = *DAT_1409eca8;
  *DAT_1409eca4 = DAT_1409ec9c + 0x800;
  if (uVar6 == 0xba80) {
    uVar6 = (uint)*(ushort *)(iVar2 + 0x802);
    if (uVar6 - 1 < 2) {
      iVar5 = *(int *)(iVar2 + 0x804);
      iVar2 = FUN_140a2edc(0,iVar2 + 0x808,0x2c0);
      if (iVar5 == iVar2) {
        local_1c = *(undefined4 *)(*piVar1 + 8);
        local_18 = *(undefined2 *)(*piVar1 + 0xc);
        FUN_1402a9fc(DAT_1409ecac,1,6,&local_1c);
        uVar3 = 0;
        uVar4 = extraout_r1;
      }
      else {
        FUN_1402a6e8(4,0x6e,DAT_1409ecb8,DAT_1409ecb4,DAT_1409ecb0);
        uVar3 = 0xffffffff;
        *piVar1 = 0;
        uVar4 = extraout_r1_00;
      }
      goto LAB_1409ec42;
    }
    uVar4 = 0x65;
    uVar3 = DAT_1409ecbc;
  }
  else {
    uVar4 = 0x5e;
    uVar3 = DAT_1409ecc0;
  }
  FUN_1402a6e8(4,uVar4,DAT_1409ecb8,DAT_1409ecb4,uVar3,uVar6);
  uVar3 = 0xffffffff;
  *piVar1 = 0;
  uVar4 = extraout_r1_01;
LAB_1409ec42:
  if ((*DAT_1409eca8 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar3,uVar4,*DAT_1409eca8 ^ local_14,0);
}

