/* FUN_1007e054 @ 0x1007e054 */

uint FUN_1007e054(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)*param_1;
  if (iVar4 == DAT_1007e0ac) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_1007e0ac + 0x4000;
    if ((iVar4 == iVar3) || (iVar3 = DAT_1007e0ac + 0x8000, iVar4 == iVar3)) goto LAB_1007e08a;
    iVar3 = 3;
  }
  iVar4 = *(int *)(*param_1 + 0x21);
  if (iVar4 != 0) {
    FUN_1007dfa4(param_1,iVar3,100,iVar4,param_4);
    return 0;
  }
LAB_1007e08a:
  bVar1 = *(byte *)(*(int *)param_1[3] + 0x31);
  if (bVar1 == 0) {
    do {
      uVar5 = FUN_101203a2(param_1,iVar3);
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar2 = (uint)uVar5;
    } while ((int)(uVar2 << 0x1f) < 0);
  }
  else {
    do {
      uVar5 = FUN_101203a2(param_1,iVar3);
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar2 = (uint)uVar5;
    } while ((bVar1 & uVar2) != 0);
  }
  return uVar2;
}

