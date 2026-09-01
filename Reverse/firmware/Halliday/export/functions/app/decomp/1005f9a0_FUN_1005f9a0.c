/* FUN_1005f9a0 @ 0x1005f9a0 */

uint FUN_1005f9a0(int param_1,undefined1 param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar12 = *(int *)(param_1 + 0x10);
  iVar5 = FUN_1011bea2(iVar12);
  if ((((iVar5 != 0) && ((*(uint *)(extraout_r2 + 4) & DAT_1005faac) != 0)) &&
      (*(uint *)(extraout_r2 + 4) == *(uint *)(param_4 + 4))) &&
     ((*(int *)(extraout_r2 + 0xc) == *(int *)(param_4 + 0xc) &&
      (*(short *)(param_3 + 0x10) == *(short *)(param_4 + 0x10))))) {
    uVar6 = FUN_1005fb14();
    uVar6 = ((uVar6 & 0x7ff) >> 3) * *(int *)(param_3 + 0xc);
    uVar13 = uVar6 * *(ushort *)(param_3 + 0x10);
    if (0xfffff < uVar13) {
      return 0xffffffea;
    }
    uVar10 = *(uint *)(param_3 + 8);
    uVar11 = *(uint *)(param_4 + 8);
    if ((uVar10 == 0) || (uVar10 == uVar6)) {
      bVar2 = false;
      if (uVar11 == 0) goto LAB_1005fa18;
      if (uVar11 == uVar6) {
        bVar2 = false;
        goto LAB_1005fa18;
      }
    }
    if ((uVar11 < 0x4000) && (uVar10 < 0x4000)) {
      bVar2 = true;
LAB_1005fa18:
      uVar7 = FUN_1011a9aa(*(undefined4 *)(param_3 + 0x18));
      uVar10 = *(int *)(param_4 + 0x18) + 0xf0000000;
      if (uVar10 < 0x4000000) {
        uVar8 = FUN_1011aa06(*(int *)(param_4 + 0x18),2);
      }
      else {
        uVar8 = FUN_1011a9aa();
      }
      uVar9 = FUN_1011bf7e(iVar12);
      if (uVar10 < 0x4000000) {
        (*DAT_1005fab0)(iVar12,1,uVar9);
      }
      uVar1 = *(ushort *)(iVar12 + 2);
      *(undefined1 *)(iVar12 + 1) = param_2;
      *(ushort *)(iVar12 + 2) = uVar1 + 1;
      puVar4 = DAT_1005fab8;
      puVar3 = DAT_1005fab4;
      if (bVar2) {
        DAT_1005fab8[1] = (uint)*(ushort *)(param_4 + 0x10);
        *puVar4 = uVar6;
        uVar10 = *(uint *)(param_4 + 8);
        if (*(uint *)(param_4 + 8) == 0) {
          uVar10 = uVar6;
        }
        puVar4[2] = uVar10;
        if (*(uint *)(param_3 + 8) != 0) {
          uVar6 = *(uint *)(param_3 + 8);
        }
        puVar4[3] = uVar6;
        *puVar3 = 0x1000000;
      }
      else {
        *DAT_1005fab4 = 0;
      }
      puVar3[6] = uVar13;
      puVar3[2] = uVar8;
      puVar3[4] = uVar7;
      puVar3[1] = 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
      InstructionSynchronizationBarrier(0xf);
      return (uint)uVar1;
    }
  }
  return 0xffffffea;
}

