/* FUN_2c645510 @ 0x2c645510 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c645510(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = _LAB_2c645584;
  if (*(char *)(_LAB_2c645584 + 8) != '\x02') {
    func_0x2c6439ec(0xfffffff8);
    return 0;
  }
  func_0x2c646e84();
  *(undefined1 *)(iVar1 + 9) = 1;
  iVar3 = _LAB_2c645588;
  DataSynchronizationBarrier(0xf);
  if (*(int *)(_LAB_2c645588 + 4) << 3 < 0) {
    *(undefined1 *)(iVar1 + 10) = 1;
    *(undefined4 *)(iVar3 + 4) = 0x8000000;
  }
  iVar3 = func_0x2c646ec0();
  piVar2 = _LAB_2c64558c;
  iVar4 = func_0x2c646ecc();
  *piVar2 = (iVar3 + -1) - iVar4;
  iVar3 = FUN_2c673c88();
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
  func_0x2c643a04(uVar6);
  return uVar6;
}

