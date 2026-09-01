/* FUN_10087534 @ 0x10087534 */

void FUN_10087534(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1c) < 0) {
    FUN_10086f50(*(undefined4 *)(param_1 + 0x44),3,*DAT_10087648);
    iVar4 = FUN_100874e0(param_1);
    if (iVar4 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf7;
  }
  piVar2 = DAT_1008764c;
  iVar4 = *(int *)(param_1 + 0x44);
  iVar7 = *(int *)(param_1 + 0x4c);
  *DAT_1008764c = iVar4;
  puVar1 = DAT_10087648;
  if (iVar4 == 0) {
    if (iVar7 == 0) {
      return;
    }
  }
  else {
    FUN_10086f50(iVar4,8,*DAT_10087648);
    iVar4 = FUN_100874e0(param_1);
    if (iVar4 != 0) {
      return;
    }
    if (iVar7 == 0) {
      if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1f)) {
        FUN_10086f50(*piVar2,4,*puVar1);
        iVar4 = FUN_100874e0(param_1);
        if (iVar4 != 0) {
          return;
        }
      }
      FUN_10086f50(*piVar2,7,*puVar1);
      iVar4 = FUN_100874e0(param_1);
      if (iVar4 != 0) {
        return;
      }
    }
    sVar6 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (iVar7 == 0) {
      return;
    }
    iVar4 = 0x100;
    local_20 = 0;
    uStack_1c = 0;
    do {
      sVar3 = FUN_1012691c(iVar7,0,0x6e);
      sVar6 = sVar6 + sVar3;
      iVar5 = FUN_1012691c(iVar7,0,0x6d);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar4 = (int)(short)((short)iVar4 * (short)((uint)iVar5 >> 8));
      iVar7 = FUN_10126fae(iVar7);
    } while (iVar7 != 0);
    if ((sVar6 != 0) || (iVar4 != 0x100)) {
      iVar4 = (int)(short)(0x10000 / iVar4);
      FUN_10093448(param_1 + 0x34,(int)-sVar6,iVar4,&local_20);
      FUN_10093448(param_1 + 0x3c,(int)-sVar6,iVar4,&local_20);
    }
  }
  FUN_1008895c(param_1);
  FUN_100874e0(param_1);
  return;
}

