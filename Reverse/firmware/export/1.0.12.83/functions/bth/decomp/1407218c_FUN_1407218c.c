/* FUN_1407218c @ 0x1407218c */

void FUN_1407218c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_14072670(0x34,DAT_140721dc,param_4,param_5);
  puVar1 = DAT_140721e0;
  *(char *)(iVar2 + 0x32) = (char)(param_3 + 0xf >> 4);
  *(undefined1 *)(iVar2 + 0x33) = 1;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(short *)(iVar2 + 0x30) = (short)param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(iVar2 + 0x20) = *puVar1;
  *(undefined4 *)(iVar2 + 0x24) = uVar3;
  *(undefined4 *)(iVar2 + 0x28) = uVar4;
  *(undefined4 *)(iVar2 + 0x2c) = uVar5;
  FUN_14072014(iVar2,iVar2 + 0x20,uVar4,param_4);
  return;
}

