/* FUN_101069fc @ 0x101069fc */

undefined4 FUN_101069fc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  iVar1 = FUN_1011ea18(param_2,DAT_10106a18,param_3,param_1,param_4);
  if (iVar1 != 0) {
    return 0xc;
  }
  *param_3 = uVar2;
  return 0;
}

