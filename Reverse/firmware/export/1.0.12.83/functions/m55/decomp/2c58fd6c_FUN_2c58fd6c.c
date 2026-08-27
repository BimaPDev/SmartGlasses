/* FUN_2c58fd6c @ 0x2c58fd6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58fd6c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uStack_30;
  int iStack_2c;
  
  puVar10 = *(undefined4 **)(param_1 + 4);
  iStack_2c = *_LAB_2c58fed4;
  if (puVar10 == *(undefined4 **)(param_1 + 8)) {
    FUN_2c58f9a0(param_1,puVar10,param_2,0);
    goto LAB_2c58fe94;
  }
  puVar2 = puVar10 + 3;
  *puVar10 = _LAB_2c58fed8;
  puVar10[1] = puVar2;
  puVar7 = *(undefined1 **)(param_2 + 4);
  uVar5 = *(uint *)(param_2 + 8);
  if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
LAB_2c58fecc:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c58fee0);
  }
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar10 + 3) = *puVar7;
    }
    else if (uVar5 != 0) goto LAB_2c58fe56;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c58d6c0(&uStack_30,0);
    puVar10[1] = puVar2;
    puVar10[3] = uStack_30;
LAB_2c58fe56:
    FUN_2c674668(puVar2,puVar7,uVar5);
    puVar2 = (undefined4 *)puVar10[1];
  }
  puVar10[2] = uStack_30;
  *(undefined1 *)((int)puVar2 + uStack_30) = 0;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x20);
  puVar10[7] = 0;
  puVar10[8] = 0;
  iVar4 = iVar4 - iVar6;
  puVar10[9] = 0;
  piVar1 = _LAB_2c58fedc;
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*_LAB_2c58fedc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,iVar4);
  }
  puVar10[7] = puVar2;
  puVar10[8] = puVar2;
  puVar10[9] = iVar4 + (int)puVar2;
  puVar9 = *(undefined4 **)(param_2 + 0x20);
  for (puVar8 = *(undefined4 **)(param_2 + 0x1c); puVar8 != puVar9; puVar8 = puVar8 + 6) {
    *puVar2 = puVar2 + 2;
    puVar7 = (undefined1 *)*puVar8;
    uVar5 = puVar8[1];
    if ((puVar7 + uVar5 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) goto LAB_2c58fecc;
    uStack_30 = uVar5;
    if (uVar5 < 0x10) {
      puVar3 = (undefined1 *)*puVar2;
      if (uVar5 == 1) {
        *puVar3 = *puVar7;
        puVar3 = (undefined1 *)*puVar2;
      }
      else if (uVar5 != 0) goto LAB_2c58fe78;
    }
    else {
      puVar3 = (undefined1 *)FUN_2c58d6c0(&uStack_30,0);
      *puVar2 = puVar3;
      puVar2[2] = uStack_30;
LAB_2c58fe78:
      FUN_2c674668(puVar3,puVar7,uVar5);
      puVar3 = (undefined1 *)*puVar2;
    }
    puVar2[1] = uStack_30;
    puVar3[uStack_30] = 0;
    puVar2 = puVar2 + 6;
  }
  puVar10[8] = puVar2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x28;
LAB_2c58fe94:
  if (*_LAB_2c58fed4 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

