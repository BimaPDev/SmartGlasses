/* FUN_2c4f49c0 @ 0x2c4f49c0 */

int FUN_2c4f49c0(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  
  FUN_2c674268(param_3,0,0x108);
  puVar3 = DAT_2c4f4b04;
  if (*(int *)(param_2 + 0x28) == 0) {
    uVar2 = *DAT_2c4f4b00;
    *param_3 = 2;
    *(undefined2 *)(param_3 + 8) = uVar2;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    return 1;
  }
  if (*(int *)(param_2 + 0x28) == 1) {
    *param_3 = 2;
    uVar1 = *(undefined1 *)(puVar3 + 1);
    *(undefined2 *)(param_3 + 8) = *puVar3;
    param_3[10] = uVar1;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    iVar4 = 1;
  }
  else {
    sVar8 = *(short *)(param_2 + 4);
    while (*(short *)(param_2 + 0x1c) != sVar8) {
LAB_2c4f4a3a:
      iVar4 = FUN_2c4f2930(param_1,param_2 + 8,sVar8,param_3);
      if ((iVar4 != 0) && (iVar4 != -2)) goto LAB_2c4f4a50;
      sVar8 = *(short *)(param_2 + 4) + 1;
      *(short *)(param_2 + 4) = sVar8;
      if (iVar4 != -2) {
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
        return 1;
      }
    }
    if (*(char *)(param_2 + 0x1f) == '\0') {
      return 0;
    }
    iVar4 = FUN_2c4f1b28(param_1,param_2 + 8,param_2 + 0x20,0xffffffff,0xffffffff,0,0,0);
    if (iVar4 == 0) {
      *(undefined2 *)(param_2 + 4) = 0;
      sVar8 = 0;
      goto LAB_2c4f4a3a;
    }
LAB_2c4f4a50:
    if (iVar4 < 0) {
      iVar7 = 0;
      iVar6 = 0;
      while (iVar6 != iVar4) {
        iVar7 = iVar7 + 1;
        uVar5 = DAT_2c4f4aec;
        if (iVar7 == 0xf) goto LAB_2c4f4a6c;
        iVar6 = (int)*(char *)(DAT_2c4f4ae8 + iVar7 * 8);
      }
      uVar5 = *(undefined4 *)(DAT_2c4f4ae8 + iVar7 * 8 + 4);
LAB_2c4f4a6c:
      FUN_2c66ac44(DAT_2c4f4afc,DAT_2c4f4af8,0x14ec,DAT_2c4f4af4,uVar5,DAT_2c4f4af0);
    }
  }
  return iVar4;
}

