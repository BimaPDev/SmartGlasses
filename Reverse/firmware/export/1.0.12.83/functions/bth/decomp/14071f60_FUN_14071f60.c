/* FUN_14071f60 @ 0x14071f60 */

void FUN_14071f60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = FUN_14072670(0xa0,DAT_14072008,0,param_7);
  *(undefined1 *)(iVar3 + 0x9d) = 0;
  *(undefined4 *)(iVar3 + 0x34) = param_6;
  *(undefined2 *)(iVar3 + 0x48) = 0x100;
  puVar2 = DAT_1407200c;
  *(undefined4 *)(iVar3 + 0x4a) = *param_5;
  uVar1 = *(undefined1 *)((int)param_5 + 6);
  *(undefined2 *)(iVar3 + 0x4e) = *(undefined2 *)(param_5 + 1);
  *(undefined1 *)(iVar3 + 0x50) = uVar1;
  uVar4 = *puVar2;
  *(undefined4 *)(iVar3 + 0x51) = *param_4;
  uVar1 = *(undefined1 *)((int)param_4 + 6);
  *(undefined2 *)(iVar3 + 0x55) = *(undefined2 *)(param_4 + 1);
  *(undefined1 *)(iVar3 + 0x57) = uVar1;
  uVar7 = param_3[1];
  uVar6 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(iVar3 + 0x58) = *param_3;
  *(undefined4 *)(iVar3 + 0x5c) = uVar7;
  *(undefined4 *)(iVar3 + 0x60) = uVar6;
  *(undefined4 *)(iVar3 + 100) = uVar5;
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(iVar3 + 0x68) = *param_2;
  *(undefined4 *)(iVar3 + 0x6c) = uVar7;
  *(undefined4 *)(iVar3 + 0x70) = uVar6;
  *(undefined4 *)(iVar3 + 0x74) = uVar5;
  *(undefined4 *)(iVar3 + 0x78) = uVar4;
  FUN_140721e4(iVar3,DAT_14072010,param_1,0x20);
  return;
}

