/* FUN_100927e8 @ 0x100927e8 */

int FUN_100927e8(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar7 = param_1;
  piVar8 = param_2;
  uVar9 = param_3;
  uVar10 = param_4;
  if (param_1 == (undefined4 *)0x0) {
    puVar7 = DAT_100928fc;
    piVar8 = DAT_100928f8;
    uVar9 = DAT_100928f4;
    uVar6 = FUN_10094174(3,DAT_10092900,0x44,DAT_10092904,DAT_100928fc,DAT_100928f8,DAT_100928f4,
                         param_4);
    FUN_10119dc2(DAT_1009290c,DAT_10092908,DAT_10092900,0x44,uVar6);
    FUN_10119dc2(DAT_10092910);
    FUN_1011a1f0(DAT_10092900,0x44,extraout_r2,extraout_r3);
  }
  if (param_2 == (int *)0x0) {
    puVar7 = DAT_100928fc;
    piVar8 = DAT_10092914;
    uVar9 = DAT_100928f4;
    uVar6 = FUN_10094174(3,DAT_10092900,0x45,DAT_10092904,DAT_100928fc,DAT_10092914,DAT_100928f4,
                         uVar10);
    FUN_10119dc2(DAT_1009290c,DAT_10092908,DAT_10092900,0x45,uVar6);
    FUN_10119dc2(DAT_10092910);
    FUN_1011a1f0(DAT_10092900,0x45,extraout_r2_00,extraout_r3_00);
  }
  puVar4 = (undefined4 *)0x0;
  *param_2 = 0;
  puVar5 = param_1;
  do {
    if (puVar5 == (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        iVar3 = param_1[2];
        if (((param_3 < 0x20) || (param_3 == 0xf8ff)) || (param_3 == 0x200c)) {
          param_2[1] = 0;
        }
        else {
          sVar1 = (short)(iVar3 / 2);
          *(short *)((int)param_2 + 6) = sVar1;
          *(short *)(param_2 + 1) = sVar1 + 2;
        }
        iVar2 = 0;
        *param_2 = 0;
        *(short *)(param_2 + 2) = (short)iVar3;
        *(undefined2 *)((int)param_2 + 10) = 0;
        *(undefined2 *)(param_2 + 3) = 0;
        *(byte *)((int)param_2 + 0xe) = *(byte *)((int)param_2 + 0xe) & 0xe0 | 0x11;
      }
      else {
        (*(code *)*puVar4)(puVar4,param_2,param_3,param_4);
        iVar2 = 1;
        *param_2 = (int)puVar4;
      }
      return iVar2;
    }
    iVar3 = (*(code *)*puVar5)(puVar5,param_2,param_3,param_4,puVar7,piVar8,uVar9);
    if (iVar3 != 0) {
      if (-1 < (int)((uint)*(byte *)((int)param_2 + 0xe) << 0x1b)) {
        *param_2 = (int)puVar5;
        return iVar3;
      }
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = puVar5;
      }
    }
    puVar5 = (undefined4 *)puVar5[6];
  } while( true );
}

