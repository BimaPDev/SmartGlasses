/* FUN_2c51bd54 @ 0x2c51bd54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51bd54(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xce:
  case 0xd8:
  case 0xdc:
    iVar2 = func_0x2c4fefdc(*(undefined4 *)(param_1 + 0xc));
    FUN_2c4ff14c(*(undefined4 *)(param_1 + 0xc),(int)(short)((*(short *)(iVar2 + 0x18) >> 4) + -3),1
                );
    return 1;
  case 0xcf:
  case 0xd9:
  case 0xdb:
    iVar2 = func_0x2c4fefdc(*(undefined4 *)(param_1 + 0xc));
    FUN_2c4ff14c(*(undefined4 *)(param_1 + 0xc),(int)(short)((*(short *)(iVar2 + 0x18) >> 4) + 3),1)
    ;
    return 1;
  default:
    return 0;
  case 0xd3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51be14,0x50,_LAB_2c51be18,_LAB_2c51be1c);
  case 0xd4:
  case 0xe3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c51be14,0x4b,_LAB_2c51be18,_LAB_2c51be10);
  }
}

