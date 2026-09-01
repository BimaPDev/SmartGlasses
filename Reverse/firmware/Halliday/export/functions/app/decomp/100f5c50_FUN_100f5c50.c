/* FUN_100f5c50 @ 0x100f5c50 */

uint FUN_100f5c50(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (param_4 != 0) {
    if ((param_2 != *(uint *)(param_1 + 8)) && (iVar2 = FUN_1006bd24(uVar3,param_2,0), iVar2 < 0)) {
      FUN_100a5b78((DAT_100f5cdc - DAT_100f5ce0) * 0x20 & 0xff00U | 0x13e0011,DAT_100f5ce8,
                   DAT_100f5ce4,iVar2);
    }
    uVar1 = FUN_1006bc84(uVar3,param_3,param_4);
    return uVar1 & ~((int)uVar1 >> 0x1f);
  }
  if (param_2 <= *(uint *)(param_1 + 4)) {
    if ((param_2 != *(uint *)(param_1 + 8)) && (iVar2 = FUN_1006bd24(uVar3,param_2,0), iVar2 < 0)) {
      FUN_100a5b78((DAT_100f5cdc - DAT_100f5ce0) * 0x20 & 0xff00U | 0x13e0011,DAT_100f5ce8,
                   DAT_100f5ce4,iVar2);
    }
    return 0;
  }
  return 1;
}

