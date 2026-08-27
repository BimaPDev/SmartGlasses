/* FUN_14043554 @ 0x14043554 */

void FUN_14043554(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    iVar5 = FUN_140dd3a4();
    iVar1 = DAT_140435a8;
    uVar7 = iVar5 + 1;
    if (0x1f < uVar7) {
      uVar7 = 0x20;
    }
    uVar6 = FUN_140e5278(DAT_140435a8 + 0x409,param_1,uVar7);
    uVar2 = DAT_140435ac;
    *(undefined1 *)(iVar1 + uVar7 + 0x408) = 0;
    uVar4 = DAT_140435b4;
    uVar3 = DAT_140435b0;
    *(char *)(iVar1 + 0x408) = (char)uVar7;
    FUN_1402a6e8(4,0xb17,uVar4,uVar3,uVar2,uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140435bc,DAT_140435b8);
}

