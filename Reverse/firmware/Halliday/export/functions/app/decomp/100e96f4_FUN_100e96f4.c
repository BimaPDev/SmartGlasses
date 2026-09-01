/* FUN_100e96f4 @ 0x100e96f4 */

undefined4 FUN_100e96f4(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((((param_1 == 0) || (param_4 == 0)) || (uVar5 = *(uint *)(param_1 + 0xc), uVar5 <= param_2))
     || (param_3 < param_2)) {
    FUN_100a5b78((DAT_100e97ac - DAT_100e97b0) * 0x20 & 0xff00U | DAT_100e97b4,DAT_100e97bc,
                 DAT_100e97b8,param_1,param_4,param_2,param_3);
LAB_100e9736:
    uVar1 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    do {
      iVar2 = uVar6 * 0xc;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_4 + 8 + iVar2) = 0;
    } while (uVar6 <= param_3 - param_2);
    iVar2 = 0;
    if (uVar5 <= param_3) {
      param_3 = uVar5 - 1;
    }
    while (iVar2 + param_2 <= param_3) {
      iVar3 = FUN_100ed4bc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
      if (iVar3 == 0) {
LAB_100e9788:
        FUN_10138e6a(param_4,iVar2 + 1);
        goto LAB_100e9736;
      }
      iVar4 = FUN_10138d28(iVar2 * 0xc + param_4,iVar3);
      if (iVar4 != 0) goto LAB_100e9788;
      FUN_10139050(iVar3);
      iVar2 = iVar2 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

