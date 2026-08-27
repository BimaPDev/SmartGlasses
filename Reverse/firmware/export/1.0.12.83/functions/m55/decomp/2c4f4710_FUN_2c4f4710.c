/* FUN_2c4f4710 @ 0x2c4f4710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f4710(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_2c4f3f30();
  if (-1 < iVar1) {
    return iVar1;
  }
  iVar4 = 0;
  iVar3 = 0;
  while (iVar1 != iVar3) {
    iVar4 = iVar4 + 1;
    uVar2 = _LAB_2c4f476c;
    if (iVar4 == 0xf) goto LAB_2c4f473e;
    iVar3 = (int)*(char *)(_LAB_2c4f4768 + iVar4 * 8);
  }
  uVar2 = *(undefined4 *)(_LAB_2c4f4768 + iVar4 * 8 + 4);
LAB_2c4f473e:
  FUN_2c66ac44(_LAB_2c4f477c,_LAB_2c4f4778,0x1409,_LAB_2c4f4774,uVar2,_LAB_2c4f4770);
  return iVar1;
}

