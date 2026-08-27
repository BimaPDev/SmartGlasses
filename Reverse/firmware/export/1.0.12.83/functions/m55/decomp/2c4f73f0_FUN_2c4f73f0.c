/* FUN_2c4f73f0 @ 0x2c4f73f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f73f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c4f745c;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    param_3 = 0x2c4f7400;
    *_LAB_2c4f745c = 0x2c4f7400;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c4bff40(0,param_2,param_3,0x40,param_4);
  FUN_2c674398();
  FUN_2c4bffb0(0,param_1);
  FUN_2c4bfee0(0);
  FUN_2c674848(param_1 * 0x44c);
  FUN_2c674038();
  if (iVar3 == 0) {
    *_LAB_2c4f745c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  iVar3 = FUN_2c6448b4(*_LAB_2c4f7460,param_1 * 0xfa);
  return -(uint)(iVar3 != 0);
}

