/* FUN_2c638814 @ 0x2c638814 */

void FUN_2c638814(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_2c638888;
  FUN_2c607df0();
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  else {
    if ((*(int *)(param_1 + 0x24) != 0) && (bVar1 = *(byte *)(param_1 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(param_1 + 0x24) = bVar1 & 8;
    }
    iVar2 = FUN_2c62bb3c(param_2);
    *(int *)(param_1 + 0x24) = iVar2;
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xf7;
  }
  if (iVar2 != 0) {
    FUN_2c637b3c(param_1);
  }
  if (*DAT_2c638888 == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

