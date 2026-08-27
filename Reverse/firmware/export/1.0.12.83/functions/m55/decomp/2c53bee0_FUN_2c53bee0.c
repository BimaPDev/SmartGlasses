/* FUN_2c53bee0 @ 0x2c53bee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53bee0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    FUN_2c607048(iVar1,0x144,0x52);
    FUN_2c606d84(*(undefined4 *)(param_1 + 0xc),0xff00ff00,0);
    FUN_2c606d9c(*(undefined4 *)(param_1 + 0xc),1,0);
    FUN_2c606e68(*(undefined4 *)(param_1 + 0xc),0x10,0);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    FUN_2c606d30(uVar2,0xc,0);
    FUN_2c603c40(uVar2,0x13,0xc,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c53bf54,0xd2,_LAB_2c53bf50,_LAB_2c53bf4c);
}

