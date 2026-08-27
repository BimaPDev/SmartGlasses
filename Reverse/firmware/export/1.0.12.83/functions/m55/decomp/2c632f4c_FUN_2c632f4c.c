/* FUN_2c632f4c @ 0x2c632f4c */

void FUN_2c632f4c(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  int local_2c;
  
  local_2c = *DAT_2c633170;
  iVar9 = FUN_2c6033b4(param_1,0,0x57,0);
  puVar2 = DAT_2c63317c;
  sVar3 = FUN_2c6033b4(param_1,0,0x59);
  uVar15 = *(undefined4 *)(param_1 + 0x44);
  iVar10 = FUN_2c63736c(*(undefined4 *)(param_1 + 0x24));
  iVar11 = (*(code *)*DAT_2c633174)(iVar10,uVar15);
  uVar12 = (*(code *)*puVar2)(iVar10 + iVar11,0);
  sVar1 = *(short *)(iVar9 + 8);
  uVar14 = uVar12;
  if ((uVar12 < 0xe) && ((0x2401U >> (uVar12 & 0xff) & 1) != 0)) {
    uVar14 = 0x20;
  }
  sVar4 = FUN_2c6298c0(iVar9,uVar14,0);
  FUN_2c637370(*(undefined4 *)(param_1 + 0x24),uVar15,&local_38);
  uVar16 = *(undefined4 *)(param_1 + 0x24);
  uVar15 = FUN_2c63736c(uVar16);
  iVar13 = FUN_2c604148(uVar16,0,uVar15);
  if ((((int)*(short *)(*(int *)(param_1 + 0x24) + 0x18) <
        (int)sVar4 + (int)local_38 + (int)*(short *)(*(int *)(param_1 + 0x24) + 0x14)) &&
      (-1 < (int)((uint)*(byte *)(param_1 + 0x60) << 0x1c))) && (iVar13 != 3)) {
    local_38 = 0;
    local_36 = sVar3 + local_36 + sVar1;
    if (uVar12 == 0) {
      uVar14 = 0x20;
    }
    else {
      iVar13 = (*(code *)*DAT_2c633178)(iVar10 + iVar11);
      iVar11 = iVar11 + iVar13;
      uVar14 = (*(code *)*puVar2)(iVar10 + iVar11,0);
      if ((uVar14 < 0xe) && ((0x2401U >> (uVar14 & 0xff) & 1) != 0)) {
        uVar14 = 0x20;
      }
    }
    sVar4 = FUN_2c6298c0(iVar9,uVar14,0);
  }
  *(int *)(param_1 + 0x50) = iVar11;
  sVar5 = FUN_2c6033b4(param_1,0x70000,0x32);
  sVar6 = FUN_2c6033b4(param_1,0x70000,0x10);
  sVar7 = FUN_2c6033b4(param_1,0x70000,0x11);
  sVar3 = FUN_2c6033b4(param_1,0x70000,0x12);
  sVar8 = FUN_2c6033b4(param_1,0x70000,0x13);
  sVar3 = local_38 - (sVar3 + sVar5);
  sVar6 = local_36 - (sVar6 + sVar5);
  local_34 = *(short *)(*(int *)(param_1 + 0x24) + 0x14);
  sVar4 = sVar5 + sVar8 + -1 + local_38 + sVar4;
  local_2e = *(short *)(*(int *)(param_1 + 0x24) + 0x16);
  sVar1 = sVar1 + sVar7 + sVar5 + -1 + local_36;
  local_30 = *(short *)(param_1 + 0x4c) + local_34;
  local_32 = *(short *)(param_1 + 0x4a) + local_2e;
  local_2e = local_2e + *(short *)(param_1 + 0x4e);
  local_34 = local_34 + *(short *)(param_1 + 0x48);
  FUN_2c6078f0(param_1,&local_34);
  *(short *)(param_1 + 0x48) = sVar3;
  *(short *)(param_1 + 0x4a) = sVar6;
  *(short *)(param_1 + 0x4c) = sVar4;
  *(short *)(param_1 + 0x4e) = sVar1;
  local_30 = *(short *)(*(int *)(param_1 + 0x24) + 0x14);
  local_2e = *(short *)(*(int *)(param_1 + 0x24) + 0x16);
  local_34 = sVar3 + local_30;
  local_30 = sVar4 + local_30;
  local_32 = sVar6 + local_2e;
  local_2e = sVar1 + local_2e;
  FUN_2c6078f0(param_1,&local_34);
  if (*DAT_2c633170 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

