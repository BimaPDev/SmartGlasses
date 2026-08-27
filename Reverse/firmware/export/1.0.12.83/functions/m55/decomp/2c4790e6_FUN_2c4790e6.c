/* FUN_2c4790e6 @ 0x2c4790e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4790e6(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short *in_r3;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  iVar2 = _LAB_2c479190;
  if (*in_r3 == 0) {
    uVar5 = 0x1fb;
  }
  else {
    uVar5 = (uint)(ushort)(*in_r3 - 5);
  }
  uVar6 = *(ushort *)(_LAB_2c479190 + 0xe);
  if ((uint)*(ushort *)(_LAB_2c479190 + 0xcd78) <= (uint)uVar6) {
    *(undefined2 *)(_LAB_2c479190 + 0xcd78) = 0;
    return;
  }
  puVar1 = (uint *)(_LAB_2c479190 + 0xc364);
  sVar4 = *(short *)(_LAB_2c479190 + (uint)uVar6 * 2 + 0xcb7a);
  *(ushort *)(_LAB_2c479190 + 0xe) = uVar6 + 1;
  uVar6 = (sVar4 - 1U) * (short)uVar5;
  uVar5 = (ushort)(sVar4 - 1U) * uVar5 + uVar5;
  uVar7 = (uint)uVar6;
  if (*puVar1 <= uVar5) {
    uVar5 = *puVar1;
  }
  if (uVar7 < (uVar5 & 0xffff)) {
    *(short *)(iVar2 + 0xd99a) = sVar4;
    *(char *)(iVar2 + 0xd597) = (char)sVar4;
    *(char *)(iVar2 + 0xd598) = (char)((ushort)sVar4 >> 8);
    FUN_2c674668(iVar2 + 0xd599,iVar2 + 0x12 + uVar7,(uVar5 & 0xffff) - uVar7);
    uVar3 = _DAT_2c479194;
    sVar4 = (2 - uVar6) + (short)uVar5;
    *(short *)(iVar2 + 0xd798) = sVar4;
  }
  else {
    sVar4 = *(short *)(iVar2 + 0xd798);
    uVar3 = _DAT_2c479194;
  }
  FUN_2c4f7174(0x1e,uVar3,sVar4);
  return;
}

