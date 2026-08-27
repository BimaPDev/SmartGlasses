/* FUN_14059dd0 @ 0x14059dd0 */

undefined4 FUN_14059dd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_r4;
  
  uVar3 = FUN_1405c2b0();
  uVar1 = DAT_14059df0;
  uVar5 = param_1 << 8 | 2;
  iVar4 = FUN_14073fdc(0xe,2,uVar5,DAT_14059df0,DAT_14059df0,unaff_r4);
  if (iVar4 == 0) {
    return 0x4b;
  }
  *(undefined2 *)(iVar4 + 8) = 0x41d;
  iVar2 = DAT_1406dae0;
  *(undefined4 *)(iVar4 + 4) = uVar1;
  *(undefined2 *)(iVar4 + 0xc) = uVar3;
  *(short *)(iVar4 + 10) = (short)uVar5;
  FUN_140739f0(iVar2 + 8,iVar4);
  if (*(char *)(iVar2 + 0x19) != '\0') {
    return 0;
  }
  FUN_14072a44(1,iVar2);
  return 0;
}

