/* FUN_2c13a4a0 @ 0x2c13a4a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13a4a0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  int extraout_r2;
  int extraout_r3;
  int unaff_r5;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  uVar3 = uRam2c13a528;
  uStack_c = *puRam2c13a524;
  func_0x2c13e4dc();
  func_0x2c1386b0();
  func_0x2c13a56c();
  func_0x2c1352d0(0);
  FUN_2c135988(4,0xfb,uRam2c13a530,uRam2c13a52c,uVar3);
  iVar4 = FUN_2c138218(0,uRam2c13a538,uRam2c13a534);
  if (iVar4 != 0) {
    FUN_2c13635c(uRam2c13a53c,iVar4);
  }
  iVar4 = func_0x2c13823c();
  if (iVar4 == 0) {
    FUN_2c1384b0(10000);
    func_0x2c13a754();
    func_0x2c13d658();
    func_0x2c134f0c(0,0);
    FUN_2c135098();
    do {
      func_0x2c13f334(auStack_20,0,0xffffffff);
    } while( true );
  }
  FUN_2c13635c(uRam2c13a540,iVar4);
  *(int *)(extraout_r2 + 0x68) = iVar4;
  *(undefined4 *)(unaff_r5 + 0x1a0) = extraout_r1;
  *(undefined4 *)(extraout_r3 + 0x50) = extraout_r1;
  puVar2 = _DAT_2c138f60;
  if (1 < *(byte *)(_DAT_2c138294 + 0x35)) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = getBasePriority();
    }
    if (iVar4 != 0x40) {
      *_DAT_2c138f60 = 0x2c138f3a;
      puVar2[1] = 0x2c13a523;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    func_0x2c1387f8();
    if (iVar4 == 0) {
      *_DAT_2c138f60 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar4);
    }
    return 0;
  }
  return 1;
}

