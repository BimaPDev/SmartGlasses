/* FUN_140743d0 @ 0x140743d0 */

void FUN_140743d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_1407440c;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    param_3 = 0x140743e2;
    *DAT_1407440c = 0x140743e2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_140739f0(DAT_14074410,param_1 + -0xc,param_3,0x40);
  if (iVar3 == 0) {
    *DAT_1407440c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  FUN_14073c58(3);
  return;
}

