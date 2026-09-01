/* FUN_1002e900 @ 0x1002e900 */

void FUN_1002e900(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_2c [2];
  int local_24;
  
  local_24 = *DAT_1002e98c;
  uVar1 = FUN_1002e858();
  uVar2 = FUN_1002e82c(param_1);
  uVar3 = FUN_1002e800(param_1);
  uVar6 = (*(byte *)(param_1 + 0x54) & 0x1f) >> 4;
  if ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1a) < 0) {
    uVar6 = uVar6 | 2;
  }
  FUN_1012579a(param_1);
  iVar4 = FUN_1002e884(param_1);
  if ((iVar4 == DAT_1002e990) && (-1 < (int)((uint)*(byte *)(param_1 + 0x2b) << 0x1c)))
  goto LAB_1002e97e;
  uVar5 = FUN_1012579a(param_1);
  while( true ) {
    FUN_1009512c(local_2c,param_2,uVar1,uVar2,uVar3,uVar5,uVar6);
    if (*DAT_1002e98c == local_24) break;
    FUN_1013cdc0(local_2c[0]);
LAB_1002e97e:
    uVar5 = 0x1fffffff;
  }
  return;
}

