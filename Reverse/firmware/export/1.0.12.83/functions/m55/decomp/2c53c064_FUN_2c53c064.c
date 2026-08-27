/* FUN_2c53c064 @ 0x2c53c064 */

byte FUN_2c53c064(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) {
    bVar1 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      bVar1 = FUN_2c606b94(iVar2,1,param_3,iVar2,param_4);
      bVar1 = bVar1 ^ 1;
    }
    return bVar1;
  }
  return 0;
}

