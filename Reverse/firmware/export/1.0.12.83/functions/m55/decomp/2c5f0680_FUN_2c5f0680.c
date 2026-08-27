/* FUN_2c5f0680 @ 0x2c5f0680 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c5f0680(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c606e68(param_2,5,0);
  FUN_2c606d84(param_2,0xff00ff00,0);
  FUN_2c606d6c(param_2,0xff,0);
  FUN_2c606d9c(param_2,1,0);
  FUN_2c606d30(param_2,10,0);
  FUN_2c606d3c(param_2,10,0);
  FUN_2c606d18(param_2,10,0);
  FUN_2c606d24(param_2,10,0);
  iVar3 = *DAT_2c606ab8;
  iVar1 = FUN_2c607214();
  FUN_2c607df0(param_2);
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 1;
  FUN_2c607df0(param_2);
  iVar2 = FUN_2c607214(param_2);
  if (iVar2 != iVar1) {
    FUN_2c6041d4(param_2);
    FUN_2c607248();
    FUN_2c607248(param_2);
  }
  if (*DAT_2c606ab8 != iVar3) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

