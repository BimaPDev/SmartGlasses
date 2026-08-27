/* FUN_2c557290 @ 0x2c557290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c557290(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_4c;
  uint uStack_48;
  undefined1 *puStack_44;
  uint uStack_40;
  undefined1 auStack_3c [16];
  undefined1 *puStack_2c;
  uint uStack_28;
  undefined1 auStack_24 [16];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5573d4;
  iVar2 = FUN_2c48e3b8(param_2,param_2,param_3,0);
  if ((iVar2 == 0) || (iVar3 = FUN_2c48e82c(), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[0xc] = -1;
    *param_1 = (int)(param_1 + 2);
    param_1[1] = 0;
    param_1[6] = (int)(param_1 + 8);
    param_1[7] = 0;
    goto LAB_2c5572d0;
  }
  FUN_2c557060(&puStack_44,iVar2,_LAB_2c5573d8,1);
  FUN_2c557060(&puStack_2c,iVar2,_LAB_2c5573dc,0);
  FUN_2c556db0(iVar2,_LAB_2c5573e0,&iStack_4c,0);
  FUN_2c48dea0(iVar2);
  puVar1 = puStack_44;
  piVar4 = param_1 + 2;
  *param_1 = (int)piVar4;
  if ((puStack_44 + uStack_40 != (undefined1 *)0x0) && (puStack_44 == (undefined1 *)0x0))
  goto LAB_2c5573cc;
  uStack_48 = uStack_40;
  if (uStack_40 < 0x10) {
    if (uStack_40 == 1) {
      *(undefined1 *)(param_1 + 2) = *puStack_44;
    }
    else if (uStack_40 != 0) goto LAB_2c55739a;
  }
  else {
    piVar4 = (int *)FUN_2c556ccc(&uStack_48,0);
    *param_1 = (int)piVar4;
    param_1[2] = uStack_48;
LAB_2c55739a:
    FUN_2c674668(piVar4,puVar1,uStack_40);
    piVar4 = (int *)*param_1;
  }
  puVar1 = puStack_2c;
  param_1[1] = uStack_48;
  piVar5 = param_1 + 8;
  *(undefined1 *)((int)piVar4 + uStack_48) = 0;
  param_1[6] = (int)piVar5;
  if ((puStack_2c + uStack_28 != (undefined1 *)0x0) && (puStack_2c == (undefined1 *)0x0)) {
LAB_2c5573cc:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5573e4);
  }
  uStack_48 = uStack_28;
  if (uStack_28 < 0x10) {
    if (uStack_28 == 1) {
      *(undefined1 *)(param_1 + 8) = *puStack_2c;
    }
    else if (uStack_28 != 0) goto LAB_2c5573b8;
  }
  else {
    piVar5 = (int *)FUN_2c556ccc(&uStack_48,0);
    param_1[6] = (int)piVar5;
    param_1[8] = uStack_48;
LAB_2c5573b8:
    FUN_2c674668(piVar5,puVar1,uStack_28);
    piVar5 = (int *)param_1[6];
  }
  param_1[7] = uStack_48;
  *(undefined1 *)((int)piVar5 + uStack_48) = 0;
  param_1[0xc] = iStack_4c;
  if (puStack_2c != auStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  if (puStack_44 != auStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5572d0:
  if (*_LAB_2c5573d4 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

