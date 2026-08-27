/* FUN_2c4be3d8 @ 0x2c4be3d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4be3d8(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

{
  int iVar1;
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *param_3;
  if ((*param_4 != '\0') && (iVar1 = FUN_2c673f18(1,0,0), iVar1 != 0)) {
    FUN_2c673e88(2,&uStack_e);
    uStack_e = (ushort)(((uint)uStack_e << 0x11) >> 0x11);
    FUN_2c673d68(2);
  }
  if (*_LAB_2c4be430 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

