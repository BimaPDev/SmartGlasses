/* FUN_2c5379a6 @ 0x2c5379a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5379a6(int param_1,byte param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    if ((param_2 & 0xfd) != 0x80) {
      return;
    }
    *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_1 + 0xa1);
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xa1);
    *(byte *)(param_1 + 0xa1) = param_2;
    *(undefined1 *)(param_1 + 0xa0) = uVar1;
  }
  uVar3 = func_0x2c52aa18();
  uVar2 = _LAB_2c5379fc;
  uVar4 = func_0x2c52aa18(*(undefined1 *)(param_1 + 0xa1));
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c537a04,0x348,_LAB_2c537a00,uVar2,uVar3,uVar4);
}

