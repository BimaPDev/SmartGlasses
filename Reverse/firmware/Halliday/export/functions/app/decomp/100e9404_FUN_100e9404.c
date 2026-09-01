/* FUN_100e9404 @ 0x100e9404 */

undefined4 FUN_100e9404(int param_1,int param_2,int *param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    FUN_100a5b78(DAT_100e94e0 | (DAT_100e94dc - DAT_100e94d8) * 0x20 & 0xff00U,DAT_100e94e8,
                 DAT_100e94e4,param_1,param_2,param_3,param_3);
LAB_100e9452:
    uVar2 = 0xffffffff;
  }
  else {
    for (piVar5 = param_3; piVar5 != param_3 + param_4 * 7; piVar5 = piVar5 + 7) {
      piVar5[5] = 0;
    }
    piVar5 = param_3;
    for (iVar7 = 0; param_4 != iVar7; iVar7 = iVar7 + 1) {
      piVar3 = (int *)FUN_100ed11c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                                   *(undefined4 *)(param_2 + iVar7 * 4));
      if (piVar3 == (int *)0x0) {
        FUN_10138e8a(param_3,iVar7);
        goto LAB_100e9452;
      }
      piVar5[5] = piVar3[1];
      uVar1 = FUN_100e8b74(*(undefined4 *)(*piVar3 + 0x1c),piVar3);
      iVar6 = *extraout_r1;
      *(undefined2 *)(piVar5 + 3) = uVar1;
      uVar1 = FUN_100e8b74(*(undefined4 *)(iVar6 + 0x1c));
      iVar6 = *extraout_r1_00;
      *(undefined2 *)((int)piVar5 + 0xe) = uVar1;
      *piVar5 = (int)*(short *)(iVar6 + 0x10);
      piVar5[1] = (int)*(short *)(iVar6 + 0x12);
      *(undefined2 *)(piVar5 + 2) = *(undefined2 *)(iVar6 + 0x14);
      *(undefined2 *)((int)piVar5 + 10) = *(undefined2 *)(iVar6 + 0x16);
      uVar4 = *(ushort *)(iVar6 + 0x1a) & 3;
      if (uVar4 == 1) {
        *(undefined2 *)(piVar5 + 4) = 3;
      }
      else {
        if (uVar4 != 2) {
          if ((*(ushort *)(iVar6 + 0x1a) & 3) == 0) {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        *(ushort *)(piVar5 + 4) = uVar4;
      }
      FUN_10139050(extraout_r1_00);
      piVar5 = piVar5 + 7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

