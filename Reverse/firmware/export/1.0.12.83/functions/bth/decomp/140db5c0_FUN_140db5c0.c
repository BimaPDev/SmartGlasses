/* FUN_140db5c0 @ 0x140db5c0 */

undefined4 FUN_140db5c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_140db5f4;
  if ((((param_3 != 0) &&
       (iVar2 = FUN_140dc518(param_3,DAT_140db5f8), uVar1 = DAT_140db5f4, iVar2 != 0)) &&
      (iVar2 = FUN_140dc518(param_3,DAT_140db5f4), uVar1 = DAT_140db5f4, iVar2 != 0)) &&
     (iVar2 = FUN_140dc518(param_3,DAT_140db5fc), uVar1 = DAT_140db5f4, iVar2 != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

