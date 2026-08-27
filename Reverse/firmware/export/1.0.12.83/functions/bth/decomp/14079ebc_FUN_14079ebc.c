/* FUN_14079ebc @ 0x14079ebc */

undefined4 FUN_14079ebc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14074b54(param_1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14079f14,DAT_14079f10,param_2,param_2,(int)*(char *)(param_1 + 0x20));
  }
  *(undefined1 *)(param_2 + 0xd) = 0;
  FUN_14074a88(param_2,param_1 + 8);
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 1;
  }
  uVar2 = FUN_1407950c(param_1);
  return uVar2;
}

