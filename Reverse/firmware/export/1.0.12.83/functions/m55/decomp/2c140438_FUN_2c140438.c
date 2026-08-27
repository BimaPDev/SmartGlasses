/* FUN_2c140438 @ 0x2c140438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c140438(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = _DAT_2c1404ac;
  if (*(char *)(_DAT_2c1404ac + 8) != '\x02') {
    func_0x2c13edb4(0xfffffff8);
    return 0;
  }
  func_0x2c141744();
  *(undefined1 *)(iVar1 + 9) = 1;
  iVar3 = _DAT_2c1404b0;
  DataSynchronizationBarrier(0xf);
  if (*(int *)(_DAT_2c1404b0 + 4) << 3 < 0) {
    *(undefined1 *)(iVar1 + 10) = 1;
    *(undefined4 *)(iVar3 + 4) = 0x8000000;
  }
  iVar3 = func_0x2c141780();
  iVar4 = func_0x2c14178c();
  piVar2 = _DAT_2c1404b4;
  *_DAT_2c1404b4 = (iVar3 + -1) - iVar4;
  iVar3 = FUN_2c14486c();
  iVar4 = *(int *)(iVar1 + 0x2c);
  piVar2[1] = iVar3;
  if (iVar4 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(iVar4 + 0x1c);
  }
  if ((*(int *)(iVar1 + 0x44) != 0) &&
     (uVar5 = *(uint *)(*(int *)(iVar1 + 0x44) + 0x10), uVar5 <= uVar6)) {
    uVar6 = uVar5;
  }
  *(undefined1 *)(iVar1 + 8) = 4;
  func_0x2c13edcc(uVar6);
  return uVar6;
}

