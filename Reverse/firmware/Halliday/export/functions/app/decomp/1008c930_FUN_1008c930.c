/* FUN_1008c930 @ 0x1008c930 */

int FUN_1008c930(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (param_1[0xf] == 0) {
    iVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_10094254(param_1[0x13],DAT_1008c9e4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar7 = FUN_10094174(3,DAT_1008c9f4,0x2b,DAT_1008c9e4,DAT_1008c9f0,DAT_1008c9ec,DAT_1008c9e8);
      FUN_10119dc2(DAT_1008c9fc,DAT_1008c9f8,DAT_1008c9f4,0x2b,uVar7);
      FUN_10119dc2(DAT_1008ca00);
      FUN_1011a1f0(DAT_1008c9f4,0x2b,extraout_r2,extraout_r3);
      FUN_10094174(2,DAT_1008c9f4,0x2d,DAT_1008c9e4,DAT_1008ca04);
      iVar3 = 0;
    }
    else {
      FUN_1011ea48(puVar1,0,param_1[0x13]);
      piVar2 = (int *)FUN_1008bbb4();
      puVar1[0xd] = *param_1;
      puVar1[0xc] = param_1[1];
      puVar1[0xb] = param_1[2];
      *(byte *)(puVar1 + 0xe) = (byte)(((uint)*(byte *)(*piVar2 + 0x1c) << 0x19) >> 0x1f);
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *puVar1 = *param_2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      iVar3 = (*(code *)param_1[0xf])(param_1,puVar1,param_3);
      if (iVar3 == 0) {
        FUN_10094268(puVar1,DAT_1008c9e4);
      }
    }
  }
  return iVar3;
}

