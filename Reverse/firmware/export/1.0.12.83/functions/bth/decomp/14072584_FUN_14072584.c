/* FUN_14072584 @ 0x14072584 */

void FUN_14072584(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_14072670(0x84,DAT_1407262c,param_5,param_6);
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  *(undefined4 *)(iVar1 + 100) = *param_1;
  *(undefined4 *)(iVar1 + 0x68) = uVar4;
  *(undefined4 *)(iVar1 + 0x6c) = uVar3;
  *(undefined4 *)(iVar1 + 0x70) = uVar2;
  uVar4 = param_1[5];
  uVar3 = param_1[6];
  uVar2 = param_1[7];
  *(undefined4 *)(iVar1 + 0x74) = param_1[4];
  *(undefined4 *)(iVar1 + 0x78) = uVar4;
  *(undefined4 *)(iVar1 + 0x7c) = uVar3;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)(iVar1 + 0x44) = *param_2;
  *(undefined4 *)(iVar1 + 0x48) = uVar4;
  *(undefined4 *)(iVar1 + 0x4c) = uVar3;
  *(undefined4 *)(iVar1 + 0x50) = uVar2;
  uVar4 = param_2[5];
  uVar2 = param_2[7];
  uVar3 = param_2[6];
  *(undefined4 *)(iVar1 + 0x54) = param_2[4];
  *(undefined4 *)(iVar1 + 0x58) = uVar4;
  *(undefined4 *)(iVar1 + 0x60) = uVar2;
  *(undefined4 *)(iVar1 + 0x5c) = uVar3;
  uVar4 = param_4[1];
  uVar3 = param_4[2];
  uVar2 = param_4[3];
  *(undefined4 *)(iVar1 + 0x34) = *param_4;
  *(undefined4 *)(iVar1 + 0x38) = uVar4;
  *(undefined4 *)(iVar1 + 0x3c) = uVar3;
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
  FUN_140721e4(iVar1,param_3,iVar1 + 0x34,0x50);
  return;
}

