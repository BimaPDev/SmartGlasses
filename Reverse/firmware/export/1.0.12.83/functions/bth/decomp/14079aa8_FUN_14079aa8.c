/* FUN_14079aa8 @ 0x14079aa8 */

bool FUN_14079aa8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_14074b54(param_1 + 0x10,param_1 + 0x60,param_3,param_4,param_4);
    return iVar1 == 0;
  }
  iVar1 = FUN_14074b54(param_1 + 0x10,param_1 + 0x7c,param_3,param_4,param_4);
  return iVar1 == 0;
}

