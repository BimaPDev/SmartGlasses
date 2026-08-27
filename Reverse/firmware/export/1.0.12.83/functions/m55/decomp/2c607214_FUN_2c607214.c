/* FUN_2c607214 @ 0x2c607214 */

bool FUN_2c607214(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_2c606ba4(param_1,DAT_2c607244,param_3,param_4,param_4);
  if ((iVar2 == 0) && (iVar2 = FUN_2c6041d4(param_1), iVar2 != 0)) {
    sVar1 = FUN_2c6033b4(iVar2,0,10);
    return sVar1 != 0;
  }
  return false;
}

