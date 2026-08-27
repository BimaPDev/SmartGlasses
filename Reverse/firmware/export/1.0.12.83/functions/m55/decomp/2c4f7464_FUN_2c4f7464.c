/* FUN_2c4f7464 @ 0x2c4f7464 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f7464(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 in_r3;
  int iVar4;
  undefined4 unaff_lr;
  
  FUN_2c6448f0(*_LAB_2c4f74a4);
  puVar2 = _LAB_2c4f74a8;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  uVar3 = extraout_r2;
  if (iVar4 != 0x40) {
    uVar3 = 0x2c4f747c;
    *_LAB_2c4f74a8 = 0x2c4f747c;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c4bff40(0,extraout_r1,uVar3,0x40,in_r3);
  FUN_2c674398();
  if (iVar4 == 0) {
    *_LAB_2c4f74a8 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return 0;
}

