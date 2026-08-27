/* FUN_2c514e14 @ 0x2c514e14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c514e14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  int iStack_14;
  
  iStack_14 = *DAT_2c514fb8;
  iVar2 = func_0x2c5115cc(*(undefined4 *)(param_1 + 0xc),param_2,param_3,0);
  iVar3 = FUN_2c5115bc(*(undefined4 *)(param_1 + 0xc));
  iVar1 = _DAT_2c514fc4;
  if (iVar3 == 2) {
    if (iVar2 == 4) goto LAB_2c514f58;
    FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,1);
    uStack_1c = _LAB_2c514fc8;
    FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,1);
    FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,0);
    uStack_1c = _LAB_2c514fcc;
  }
  else {
    if (iVar3 != 1) {
      if (iVar2 == 4) {
        if (*(char *)(*(int *)(param_1 + 0x14) + 4) == '\0') {
          FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,1);
          uStack_1c = uStack_1c & 0xffffff;
          FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,1);
          FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,0);
          uStack_1c = _LAB_2c514fbc;
          FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,0);
        }
        else {
          FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,0);
          uStack_1c = uStack_1c & 0xffffff;
          FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20);
          FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,1);
          uStack_1c = _LAB_2c514fbc;
          FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,1);
        }
        FUN_2c511308(*(undefined4 *)(param_1 + 4),auStack_20,1);
        uStack_1c = uStack_1c & 0xffffff;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 4),auStack_20,1);
        FUN_2c511308(*(undefined4 *)(param_1 + 4),auStack_20,0);
        uStack_1c = DAT_2c514fc0;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 4),auStack_20,0);
      }
      else {
        FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,1);
        uStack_1c = iVar1;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,1);
        FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,0);
        uStack_1c = iVar1;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,0);
        FUN_2c511308(*(undefined4 *)(param_1 + 4),auStack_20,1);
        uStack_1c = iVar1 + -0x9999;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 4),auStack_20,1);
        FUN_2c511308(*(undefined4 *)(param_1 + 4),auStack_20,0);
        uStack_1c = iVar1 + -0x9999;
        FUN_2c5111ec(*(undefined4 *)(param_1 + 4),auStack_20,0);
      }
      goto LAB_2c514f10;
    }
LAB_2c514f58:
    FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,1);
    uStack_1c = uStack_1c & 0xffffff;
    FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,1);
    FUN_2c511308(*(undefined4 *)(param_1 + 8),auStack_20,0);
    uStack_1c = _LAB_2c514fd0;
  }
  FUN_2c5111ec(*(undefined4 *)(param_1 + 8),auStack_20,0);
LAB_2c514f10:
  if (*DAT_2c514fb8 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

