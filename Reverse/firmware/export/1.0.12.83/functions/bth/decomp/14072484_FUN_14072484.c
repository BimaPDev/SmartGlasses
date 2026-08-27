/* FUN_14072484 @ 0x14072484 */

void FUN_14072484(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_14072670(0x3c,DAT_140724d8,param_5,param_6);
  FUN_14072878(iVar1 + 0x18,param_2,param_3,0x10);
  uVar4 = *param_4;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  *(undefined4 *)(iVar1 + 0x34) = param_4[3];
  *(undefined4 *)(iVar1 + 0x28) = uVar4;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  *(undefined1 *)(iVar1 + 0x38) = 0;
  FUN_14072688(iVar1,param_1,iVar1 + 0x18);
  return;
}

