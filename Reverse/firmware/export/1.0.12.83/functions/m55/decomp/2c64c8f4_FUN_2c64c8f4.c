/* FUN_2c64c8f4 @ 0x2c64c8f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c8f4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = _LAB_2c64c958;
  if (*_LAB_2c64c958 == 0) {
    iVar3 = FUN_2c64419c(_LAB_2c64c980);
    *piVar1 = iVar3;
    iVar3 = *_LAB_2c64c95c;
    piVar1 = _LAB_2c64c95c;
  }
  else {
    iVar3 = *_LAB_2c64c95c;
    piVar1 = _LAB_2c64c95c;
  }
  _LAB_2c64c95c = piVar1;
  if (iVar3 == 0) {
    iVar3 = FUN_2c64419c(_LAB_2c64c984);
    *piVar1 = iVar3;
  }
  func_0x2c6739a8(_LAB_2c64c964,0x3fc,_LAB_2c64c960);
  piVar1 = _DAT_2c64c968;
  func_0x2c6739a8(_LAB_2c64c970,0xff,_LAB_2c64c96c);
  func_0x2c64c9b8(_LAB_2c64c974);
  if (*piVar1 == 0) {
    iVar3 = FUN_2c6441a4(_LAB_2c64c988);
    *piVar1 = iVar3;
  }
  uVar2 = FUN_2c6440f0(_LAB_2c64c978,0);
  *_LAB_2c64c97c = uVar2;
  return;
}

