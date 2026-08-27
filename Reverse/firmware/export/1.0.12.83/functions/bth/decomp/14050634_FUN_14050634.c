/* FUN_14050634 @ 0x14050634 */

void FUN_14050634(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_140e56e8(DAT_14050698,0);
  *DAT_1405069c = iVar1;
  if (iVar1 == 0) {
    uVar4 = 0x5a;
    uVar3 = DAT_140506b8;
  }
  else {
    FUN_1402a6e8(4,0x5e,DAT_140506a8,DAT_140506a4,DAT_140506a0,iVar1);
    iVar2 = FUN_140e5418(DAT_140506ac,0);
    if (iVar2 != 0) {
      FUN_1402a6e8(4,0x66,DAT_140506a8,DAT_140506a4,DAT_140506b0,iVar1);
      return;
    }
    uVar4 = 0x62;
    uVar3 = DAT_140506bc;
  }
  FUN_1402a6e8(4,uVar4,DAT_140506a8,DAT_140506a4,uVar3,DAT_140506b4);
  return;
}

