/* FUN_140b46e8 @ 0x140b46e8 */

undefined4 FUN_140b46e8(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  puVar4 = DAT_140b480c;
  pbVar3 = DAT_140b4808;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_140b4808;
    *DAT_140b480c = 0x140b46fc;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140b4810 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140b4814 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (*DAT_140b4818 == 0) {
    *DAT_140b4818 = 1;
    FUN_14027fb4(0);
    FUN_140e59d8();
    FUN_140280ac(0,DAT_140b481c);
    FUN_14030030(DAT_140b4820);
    FUN_14028078(0,param_1);
    FUN_14027f98(0);
    FUN_14030034(param_1 * 0x44c);
    FUN_140305a4();
    if (iVar7 == 0) {
      *DAT_140b480c = 0xffffffff;
    }
    bVar1 = *DAT_140b4824;
    uVar6 = bVar1 + 1;
    *DAT_140b4824 =
         (char)uVar6 + (char)(uint)((ulonglong)DAT_140b4810 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140b4828 + (uint)bVar1 * 4) = unaff_lr;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar7);
    }
    iVar7 = FUN_140e52f8(DAT_140b482c,1,0);
    *DAT_140b4830 = iVar7;
    if (iVar7 == 0) {
      FUN_1402a6e8(4,0x89,DAT_140b483c,DAT_140b4838,DAT_140b4834);
      uVar5 = 0xffffffff;
    }
    else {
      iVar7 = FUN_140e5378(iVar7,param_1 * 0xfa);
      uVar5 = 0;
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140b4840);
      }
    }
  }
  else {
    if (iVar7 == 0) {
      *DAT_140b480c = 0xffffffff;
    }
    pbVar3 = DAT_140b4824;
    bVar1 = *DAT_140b4824;
    *(undefined4 *)(DAT_140b4828 + (uint)bVar1 * 4) = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140b4810 * (ulonglong)uVar6 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar7);
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

