/* FUN_140470d0 @ 0x140470d0 */

undefined4 FUN_140470d0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_14047170;
  uVar4 = DAT_14047170;
  FUN_1402a6e8(4,0xa3,DAT_14047178,DAT_14047174,DAT_1404716c,DAT_14047170);
  if (param_1 == 0) {
    FUN_1402a6e8(4,0xa8,DAT_14047178,DAT_14047174,DAT_14047184,uVar3);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_1404a1b4(0);
    if (iVar2 == 0) {
      FUN_1402a6e8(4,0xb9,DAT_14047178,DAT_14047174,DAT_14047180,uVar4);
    }
    else {
      uVar1 = FUN_140dd3a4(param_1);
      iVar2 = FUN_14098034(*(undefined4 *)(iVar2 + 0xd4),param_1,uVar1);
      if (iVar2 == 1) {
        FUN_1402a6e8(4,0xb3,DAT_14047178,DAT_14047174,DAT_14047188,1);
        return 0xffffffff;
      }
    }
    FUN_1402a6e8(4,0xbc,DAT_14047178,DAT_14047174,DAT_1404717c,uVar3);
    uVar3 = 0;
  }
  return uVar3;
}

