/* FUN_2c6470b4 @ 0x2c6470b4 */

undefined4 FUN_2c6470b4(byte *param_1,int param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = param_4;
  if ((param_1 == (byte *)0x0) || (uVar5 = (uint)*param_1, uVar5 != 0xf6)) {
    FUN_2c643b3c(param_1,0xfffffffc,param_3,uVar5,param_4);
    return 0xfffffffc;
  }
  pbVar4 = param_1 + 0xc;
  do {
    ExclusiveAccess(pbVar4);
    sVar1 = *(short *)pbVar4;
    if (sVar1 == 0) {
      ClearExclusiveLocal();
      goto LAB_2c6470da;
    }
    bVar2 = (bool)hasExclusiveAccess(pbVar4);
  } while (!bVar2);
  *(short *)pbVar4 = sVar1 + -1;
LAB_2c6470da:
  if (sVar1 != 0) {
    FUN_2c643b54(param_1,*(undefined2 *)(param_1 + 0xc));
    return 0;
  }
  if (param_2 != 0) {
    FUN_2c643b4c();
    iVar3 = FUN_2c645ea4(99,param_2);
    if (iVar3 != 0) {
      FUN_2c645b24(param_1,*(undefined4 *)(DAT_2c647130 + 0x14));
      return 0xfffffffe;
    }
    FUN_2c643b50(param_1);
    return 0xfffffffe;
  }
  FUN_2c643b58();
  return 0xfffffffd;
}

