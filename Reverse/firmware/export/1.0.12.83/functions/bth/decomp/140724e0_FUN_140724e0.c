/* FUN_140724e0 @ 0x140724e0 */

void FUN_140724e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_14072670(0x78,DAT_1407257c,param_5,param_6);
  *(undefined1 *)(iVar1 + 0x34) = param_4;
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *param_2;
  *(undefined4 *)(iVar1 + 0x39) = param_2[1];
  *(undefined4 *)(iVar1 + 0x35) = uVar3;
  *(undefined4 *)(iVar1 + 0x3d) = uVar4;
  *(undefined4 *)(iVar1 + 0x41) = uVar2;
  uVar4 = param_2[5];
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  *(undefined4 *)(iVar1 + 0x45) = param_2[4];
  *(undefined4 *)(iVar1 + 0x49) = uVar4;
  *(undefined4 *)(iVar1 + 0x4d) = uVar3;
  *(undefined4 *)(iVar1 + 0x51) = uVar2;
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  *(undefined4 *)(iVar1 + 0x55) = *param_1;
  *(undefined4 *)(iVar1 + 0x59) = uVar4;
  *(undefined4 *)(iVar1 + 0x5d) = uVar3;
  *(undefined4 *)(iVar1 + 0x61) = uVar2;
  uVar4 = param_1[5];
  uVar3 = param_1[6];
  uVar2 = param_1[7];
  *(undefined4 *)(iVar1 + 0x65) = param_1[4];
  *(undefined4 *)(iVar1 + 0x69) = uVar4;
  *(undefined4 *)(iVar1 + 0x6d) = uVar3;
  *(undefined4 *)(iVar1 + 0x71) = uVar2;
  FUN_140721e4(iVar1,param_3,iVar1 + 0x34,0x41);
  return;
}

