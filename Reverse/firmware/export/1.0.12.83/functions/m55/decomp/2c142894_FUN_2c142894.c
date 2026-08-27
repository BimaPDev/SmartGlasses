/* FUN_2c142894 @ 0x2c142894 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c142894(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = _DAT_2c142958;
  func_0x2c142a14(*_DAT_2c142958);
  iVar3 = _DAT_2c14294c;
  iVar6 = *_DAT_2c142948;
  if ((*_DAT_2c142948 == 0) &&
     (*_DAT_2c142948 = _DAT_2c14294c, iVar6 = iVar3, _DAT_2c142950 != (undefined4 *)0x0)) {
    *(undefined4 *)(iVar3 + 0x88) = *_DAT_2c142950;
  }
  if (*(int *)(iVar6 + 4) < 0x20) {
    if (param_1 != 0) {
      iVar3 = *(int *)(iVar6 + 0x88);
      if (iVar3 == 0) {
        if ((_DAT_2c142954 == 0) || (iVar3 = func_0x2c1424f0(0x108), iVar3 == 0)) {
          func_0x2c142a16(*puVar1);
          goto LAB_2c1428ce;
        }
        *(undefined4 *)(iVar3 + 0x100) = 0;
        *(undefined4 *)(iVar3 + 0x104) = 0;
        *(int *)(iVar6 + 0x88) = iVar3;
      }
      uVar5 = *(uint *)(iVar6 + 4);
      *(undefined4 *)(iVar3 + uVar5 * 4) = param_3;
      uVar4 = 1 << (uVar5 & 0xff);
      *(uint *)(iVar3 + 0x100) = *(uint *)(iVar3 + 0x100) | uVar4;
      *(undefined4 *)(iVar3 + uVar5 * 4 + 0x80) = param_4;
      if (param_1 == 2) {
        *(uint *)(iVar3 + 0x104) = *(uint *)(iVar3 + 0x104) | uVar4;
      }
    }
    iVar3 = *(int *)(iVar6 + 4);
    uVar2 = *puVar1;
    *(int *)(iVar6 + 4) = iVar3 + 1;
    *(undefined4 *)(iVar6 + (iVar3 + 2) * 4) = param_2;
    func_0x2c142a18(uVar2);
    uVar2 = 0;
  }
  else {
    func_0x2c142a18(*puVar1);
LAB_2c1428ce:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

