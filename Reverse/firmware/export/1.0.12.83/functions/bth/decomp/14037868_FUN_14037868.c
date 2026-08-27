/* FUN_14037868 @ 0x14037868 */

undefined4 * FUN_14037868(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = DAT_140378d4;
  FUN_1402a6e8(4,0x45a,DAT_140378dc,DAT_140378d8,DAT_140378d0,DAT_140378d4);
  puVar2 = (undefined4 *)FUN_140391d0(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_140391d0(param_1 << 1);
    iVar5 = param_1 / 2 << 2;
    *puVar2 = uVar3;
    uVar3 = FUN_140391d0(iVar5);
    puVar2[1] = uVar3;
    uVar4 = FUN_140391d0(iVar5);
    uVar3 = DAT_140378e0;
    puVar2[2] = uVar4;
    FUN_1402a6e8(4,0x461,DAT_140378dc,DAT_140378d8,uVar3,uVar1);
  }
  return puVar2;
}

