/* FUN_2c64543c @ 0x2c64543c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c64543c(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = _LAB_2c6454e0;
  if (*(char *)(_LAB_2c6454e0 + 8) != '\x01') {
    func_0x2c6439ec(0xfffffff9);
    return 0xffffffff;
  }
  iVar5 = func_0x2c6467a4();
  iVar6 = _LAB_2c6454e4;
  if (iVar5 == 0) goto LAB_2c6454c4;
  *(undefined1 *)(_LAB_2c6454e4 + 0x22) = 0xff;
  piVar4 = _LAB_2c6454e8;
  uVar8 = *(uint *)(iVar6 + 0xc);
  uVar9 = ~(*(byte *)(iVar6 + 0x22) | 0xffffff00);
  if (uVar9 == 0) {
    uVar8 = (uVar8 & 0x7ff) >> 8;
LAB_2c6454c0:
    uVar9 = uVar8 + 1;
  }
  else {
    uVar8 = (uVar8 & 0x7ff) >> 8;
    uVar9 = 0x20 - LZCOUNT(uVar9);
    if (uVar9 <= uVar8) goto LAB_2c6454c0;
  }
  iVar6 = _LAB_2c6454e8[1];
  *(char *)(_LAB_2c6454e4 + 0x1f) = (char)(0xfe << (uVar9 & 0xff));
  iVar6 = func_0x2c646e14(iVar6,_LAB_2c6454ec);
  if (iVar6 == 0) {
    uVar7 = func_0x2c646eb8();
    *(undefined4 *)(iVar3 + 0x10) = uVar7;
    func_0x2c646e5c();
    FUN_2c645b54(_LAB_2c6454f0);
    func_0x2c645dac();
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setThreadModePrivileged(*piVar4 << 0x1f < 0);
      bVar1 = (bool)isThreadMode();
      if (bVar1) {
        cVar2 = isUsingMainStack();
        setStackMode(cVar2 == '\x01');
      }
    }
    *(undefined1 *)(iVar3 + 8) = 2;
    func_0x2c6439fc();
    return 0;
  }
LAB_2c6454c4:
  func_0x2c6439ec();
  return 0xffffffff;
}

