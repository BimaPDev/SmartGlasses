/* FUN_100ed11c @ 0x100ed11c */

undefined4 * FUN_100ed11c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (param_2 == 0) {
    FUN_100a5b78(DAT_100ed2b0 | (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00U,DAT_100ed2b8,
                 DAT_100ed2b4);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x14);
    for (iVar3 = 0; piVar5 = (int *)(iVar4 + *(int *)(param_1 + 0x2c)),
        *(int *)(param_2 + 0x10) != iVar3; iVar3 = iVar3 + 1) {
      if (piVar5[1] == param_3) {
        iVar3 = *piVar5;
        if (iVar3 == 3) {
          puVar1 = (undefined4 *)FUN_10138fb6(0,0xc,DAT_100ed2c4,3,param_1,param_2,param_3);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = piVar5;
            return puVar1;
          }
          uVar7 = 0xa08;
          uVar6 = (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00;
          uVar2 = DAT_100ed2e0;
        }
        else if (iVar3 == 4) {
          puVar1 = (undefined4 *)FUN_10138fb6(0,0xc,DAT_100ed2c4,4,param_1,param_2,param_3);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = piVar5;
            puVar1[2] = 0;
            iVar3 = FUN_100ecbe0(param_1,puVar1,1);
            if (-1 < iVar3) {
              return puVar1;
            }
            FUN_100a5b78(DAT_100ed2d0 | (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00U,DAT_100ed2b8,
                         DAT_100ed2d4,DAT_100ed2c4,0xa21);
LAB_100ed1ea:
            FUN_10139020(puVar1);
            return (undefined4 *)0x0;
          }
          uVar7 = 0xa16;
          uVar6 = (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00;
          uVar2 = DAT_100ed2cc;
        }
        else if (iVar3 == 2) {
          puVar1 = (undefined4 *)FUN_10138fb6(0,0xc,DAT_100ed2c4,2,param_1,param_2,param_3);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = piVar5;
            iVar3 = FUN_100ec094(param_1,puVar1);
            if (-1 < iVar3) {
              return puVar1;
            }
            goto LAB_100ed1ea;
          }
          uVar7 = 0xa2e;
          uVar6 = (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00;
          uVar2 = DAT_100ed2d8;
        }
        else {
          if (iVar3 != 1) {
            return (undefined4 *)0x0;
          }
          puVar1 = (undefined4 *)FUN_10138fb6(0,0xc,DAT_100ed2c4,1,param_1,param_2,param_3);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = piVar5;
            puVar1[1] = 0;
            return puVar1;
          }
          uVar7 = 0xa43;
          uVar6 = (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00;
          uVar2 = DAT_100ed2dc;
        }
        FUN_100a5b78(uVar2 | uVar6,DAT_100ed2b8,DAT_100ed2c8,DAT_100ed2c4,uVar7);
        return (undefined4 *)0x0;
      }
      iVar4 = piVar5[2];
    }
    FUN_100a5b78(DAT_100ed2bc | (DAT_100ed2ac - DAT_100ed2a8) * 0x20 & 0xff00U,DAT_100ed2b8,
                 DAT_100ed2c0,DAT_100ed2c4,0x9fd,param_3);
  }
  return (undefined4 *)0x0;
}

