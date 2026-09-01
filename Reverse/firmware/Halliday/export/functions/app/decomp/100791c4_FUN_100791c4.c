/* FUN_100791c4 @ 0x100791c4 */

int FUN_100791c4(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = 0xffff;
  }
  puVar6 = *(uint **)(*(int *)(param_1 + 4) + 4);
  uVar4 = *puVar6;
  if (param_3 < 0) {
    param_2[1] = (ushort)iVar3;
  }
  uVar1 = param_2[1];
  uVar5 = uVar4 >> 0x10 & 0xfffff1fe;
  uVar4 = uVar5 | 0x100;
  if (uVar1 != 2) {
    if (uVar1 != 3) {
      if (uVar1 == 0xffff) {
        uVar4 = uVar5 | 0x900;
      }
      goto LAB_1007920c;
    }
    puVar6[2] = *(uint *)(param_2 + 4);
    puVar6[3] = *(uint *)(param_2 + 6);
    uVar4 = uVar5 | 0x500;
  }
  uVar4 = uVar4 | 0x200;
LAB_1007920c:
  uVar2 = DAT_10079220;
  *puVar6 = (uint)*param_2 | uVar4 << 0x10;
  FUN_10119dc2(uVar2);
  return param_3;
}

