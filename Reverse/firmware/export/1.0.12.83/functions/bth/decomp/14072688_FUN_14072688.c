/* FUN_14072688 @ 0x14072688 */

void FUN_14072688(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = DAT_140726b4;
  FUN_140739f0(DAT_140726b4,param_1);
  cVar1 = *(char *)(iVar2 + 8);
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *(undefined4 **)(param_1 + 0x10) = param_3;
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)(iVar2 + 8) = 1;
  puVar3 = (undefined4 *)FUN_1406db30(0x2017,0x20);
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  uVar4 = param_2[3];
  *puVar3 = *param_2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar5;
  puVar3[3] = uVar4;
  uVar5 = param_3[2];
  uVar6 = param_3[1];
  uVar4 = param_3[3];
  puVar3[4] = *param_3;
  puVar3[5] = uVar6;
  puVar3[6] = uVar5;
  puVar3[7] = uVar4;
  FUN_1406da30(puVar3,0,DAT_1405fcbc);
  return;
}

