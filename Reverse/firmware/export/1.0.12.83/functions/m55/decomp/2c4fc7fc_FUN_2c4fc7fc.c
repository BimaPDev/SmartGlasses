/* FUN_2c4fc7fc @ 0x2c4fc7fc */

void FUN_2c4fc7fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint unaff_pc;
  
  puVar7 = param_1 + 4;
  uVar4 = param_1[0x14] & 0x3f;
  *(undefined1 *)((int)puVar7 + uVar4) = 0x80;
  iVar3 = 0x37 - uVar4;
  puVar1 = (undefined4 *)((int)puVar7 + uVar4 + 1);
  if (iVar3 < 0) {
    FUN_2c674268(puVar1,0,0x3f - uVar4);
    FUN_2c4fc034(param_1,puVar7);
    iVar3 = 0x38;
    puVar1 = puVar7;
  }
  FUN_2c674268(puVar1,0,iVar3);
  uVar4 = param_1[0x14];
  param_1[0x12] = uVar4 << 3;
  param_1[0x13] = uVar4;
  iVar3 = FUN_2c4fc034(param_1,puVar7,uVar4,uVar4 | unaff_pc >> 0x1d);
  uVar6 = *param_1;
  uVar2 = *(undefined4 *)(iVar3 + 8);
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  param_2[1] = *(undefined4 *)(iVar3 + 4);
  param_2[2] = uVar2;
  *param_2 = uVar6;
  param_2[3] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x2c674270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c674274)(iVar3,0,0x58);
  return;
}

