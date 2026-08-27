/* FUN_2c5c7cbc @ 0x2c5c7cbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7cbc(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  FUN_2c602454(param_2,_LAB_2c5c7cf0,0xd,param_1);
  uVar2 = FUN_2c606a10(0);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  lv_obj_add_flag_invalidate(uVar2,1);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x34),_LAB_2c5c7cf4,0xd,param_1);
  piVar5 = _LAB_2c5ff3fc;
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = *_LAB_2c5ff3fc;
  if (iVar4 == 0) {
    iVar4 = FUN_2c602d28();
    *piVar5 = iVar4;
  }
  if (iVar4 == 0) {
    return;
  }
  piVar5 = (int *)FUN_2c62ca10();
  while (piVar5 != (int *)0x0) {
    if (*piVar5 == iVar3) {
      return;
    }
    piVar5 = (int *)FUN_2c62ca20(iVar4);
  }
  iVar6 = FUN_2c606bc0(iVar3);
  if (iVar6 != 0) {
    iVar8 = *(int *)(iVar3 + 8);
    if ((*(int *)(iVar8 + 8) == 0) || (**(int **)(*(int *)(iVar8 + 8) + 0xc) != iVar3))
    goto LAB_2c602fa4;
    bVar1 = *(byte *)(iVar6 + 0x1c);
    *(byte *)(iVar6 + 0x1c) = bVar1 | 8;
    if ((int)((uint)bVar1 << 0x1d) < 0) {
      FUN_2c602e74();
    }
    else {
      FUN_2c602e40();
    }
    *(byte *)(iVar6 + 0x1c) = *(byte *)(iVar6 + 0x1c) & 0xf7 | bVar1 & 8;
  }
  iVar8 = *(int *)(iVar3 + 8);
  if (iVar8 == 0) {
    FUN_2c606bc8(iVar3);
    iVar8 = *(int *)(iVar3 + 8);
  }
LAB_2c602fa4:
  *(int *)(iVar8 + 8) = iVar4;
  piVar5 = (int *)FUN_2c62c968(iVar4);
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar3;
    piVar7 = (int *)FUN_2c62ca10(iVar4);
    if (piVar5 == piVar7) {
      bVar1 = *(byte *)(iVar4 + 0x1c);
      *(byte *)(iVar4 + 0x1c) = bVar1 | 8;
      if ((int)((uint)bVar1 << 0x1d) < 0) {
        FUN_2c602e74(iVar4);
      }
      else {
        FUN_2c602e40();
      }
      *(byte *)(iVar4 + 0x1c) = *(byte *)(iVar4 + 0x1c) & 0xf7 | bVar1 & 8;
      return;
    }
  }
  return;
}

