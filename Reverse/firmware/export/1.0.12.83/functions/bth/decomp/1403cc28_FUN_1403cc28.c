/* FUN_1403cc28 @ 0x1403cc28 */

undefined4 FUN_1403cc28(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_1402a6e8(4,0x237,DAT_1403cca0,DAT_1403cc9c,DAT_1403cc94,DAT_1403cc98,param_1,param_2);
    cVar1 = FUN_140dd3a4(param_1);
    FUN_1409249c(param_1,cVar1 + '\x01');
    cVar1 = FUN_140dd3a4(param_1);
    FUN_1409265c(param_1,cVar1 + '\x01');
    uVar2 = FUN_1409f124();
    iVar3 = FUN_140db784(uVar2,param_1,param_2);
    if (iVar3 != 0) {
      FUN_1409f14c(param_1,param_2 + 1);
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

