/* FUN_2c5eaa88 @ 0x2c5eaa88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5eaa88(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5eab64,0xfd,_LAB_2c5eab60,_LAB_2c5eab5c,*param_2);
  }
  iVar2 = param_2[0xf];
  iVar1 = param_2[4];
  if ((iVar2 != iVar1) && (iVar2 != param_2[8])) {
    FUN_2c62bea8(iVar2);
    iVar1 = param_2[4];
  }
  param_2[0xf] = 0;
  if (param_2[5] != iVar1) {
    FUN_2c62bea8();
    iVar1 = param_2[5];
  }
  param_2[4] = 0;
  FUN_2c62bea8(iVar1);
  param_2[5] = 0;
  FUN_2c62bea8(param_2[6]);
  param_2[6] = 0;
  FUN_2c62bea8(param_2[7]);
  param_2[7] = 0;
  FUN_2c62bea8(param_2[8]);
  param_2[8] = 0;
  if (param_2[9] != 0) {
    FUN_2c62bea8();
    param_2[9] = 0;
  }
  if (param_2[0x12] != 0) {
    FUN_2c62bea8(*(undefined4 *)(param_2[0x12] + 4));
    *(undefined4 *)(param_2[0x12] + 4) = 0;
    FUN_2c62bea8(*(undefined4 *)(param_2[0x12] + 8));
    *(undefined4 *)(param_2[0x12] + 8) = 0;
    FUN_2c62bea8(*(undefined4 *)(param_2[0x12] + 0xc));
    *(undefined4 *)(param_2[0x12] + 0xc) = 0;
    FUN_2c62bea8(*(undefined4 *)(param_2[0x12] + 0x10));
    *(undefined4 *)(param_2[0x12] + 0x10) = 0;
    FUN_2c62bea8(*(undefined4 *)(param_2[0x12] + 0x14));
    *(undefined4 *)(param_2[0x12] + 0x14) = 0;
    FUN_2c62bea8(param_2[0x12]);
    param_2[0x12] = 0;
  }
  if ((param_2 != DAT_2c62beb8) && (param_2 != (int *)0x0)) {
    FUN_2c4726f0();
    return;
  }
  return;
}

