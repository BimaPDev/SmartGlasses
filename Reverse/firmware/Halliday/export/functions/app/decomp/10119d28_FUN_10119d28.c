/* FUN_10119d28 @ 0x10119d28 */

uint FUN_10119d28(undefined1 *param_1,uint param_2,byte *param_3,uint param_4)

{
  int iVar1;
  byte *extraout_r2;
  char *extraout_r2_00;
  byte *extraout_r2_01;
  undefined1 *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined4 uStack_1c;
  byte *pbStack_18;
  
  uVar3 = (param_2 & 1) + (param_2 >> 1);
  if (param_4 < uVar3) {
LAB_10119d3c:
    uVar3 = 0;
  }
  else {
    puVar5 = param_1;
    uStack_1c = param_2;
    pbStack_18 = param_3;
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_10119c88(*param_1,(int)&uStack_1c + 3,param_3,param_4,param_1);
      if (iVar1 < 0) goto LAB_10119d3c;
      param_4 = (uint)uStack_1c._3_1_;
      param_1 = param_1 + 1;
      param_3 = extraout_r2 + 1;
      *extraout_r2 = uStack_1c._3_1_;
    }
    pbVar4 = param_3 + (param_2 >> 1);
    puVar2 = param_1 + 1;
    while (param_3 != pbVar4) {
      iVar1 = FUN_10119c88(puVar2[-1],(int)&uStack_1c + 3,param_3,param_4,puVar5);
      if (iVar1 < 0) goto LAB_10119d3c;
      *extraout_r2_00 = uStack_1c._3_1_ << 4;
      iVar1 = FUN_10119c88(*puVar2,(int)&uStack_1c + 3);
      if (iVar1 < 0) goto LAB_10119d3c;
      param_4 = (uint)*extraout_r2_01 + (uStack_1c >> 0x18);
      *extraout_r2_01 = (byte)param_4;
      puVar2 = puVar2 + 2;
      param_3 = extraout_r2_01 + 1;
    }
  }
  return uVar3;
}

