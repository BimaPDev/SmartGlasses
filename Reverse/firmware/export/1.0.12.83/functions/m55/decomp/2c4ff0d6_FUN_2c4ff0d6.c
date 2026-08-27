/* FUN_2c4ff0d6 @ 0x2c4ff0d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ff0d6(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  int iStack_c;
  
  if (*param_4 != *(int *)(param_1 + 0x40)) {
    FUN_2c62e838(param_1,_LAB_2c4ff148);
    FUN_2c4fe3e8(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x48);
    piVar2 = (int *)*puVar3;
    if (*(char *)(param_1 + 0x115) == '\0') {
      if (*(char *)(param_1 + 0x114) == '\x01') {
        iVar1 = *(int *)(*piVar2 + 0x1c);
      }
      else {
        iVar1 = *(int *)(*(int *)(*piVar2 + 0xc) + 0x18);
      }
    }
    else {
      iVar1 = piVar2[7];
    }
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int **)(param_1 + 0x48) = piVar2;
    *(undefined4 **)(param_1 + 0x4c) = puVar3;
    FUN_2c4fe394(param_1);
    iVar1 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0xbc) != iVar1) {
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xe4) = iVar1;
      *(int *)(param_1 + 0xe8) = iVar1;
      FUN_2c62e8ec(param_1 + 0xc4);
      iStack_c = *DAT_2c607e4c;
      sStack_14 = FUN_2c600c2c();
      sStack_e = *(short *)(param_1 + 0x1a) + sStack_14;
      sStack_10 = sStack_14 + *(short *)(param_1 + 0x18);
      sStack_12 = *(short *)(param_1 + 0x16) - sStack_14;
      sStack_14 = *(short *)(param_1 + 0x14) - sStack_14;
      FUN_2c6078f0(param_1,&sStack_14);
      if (*DAT_2c607e4c == iStack_c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}

