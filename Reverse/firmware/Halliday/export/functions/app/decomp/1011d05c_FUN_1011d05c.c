/* FUN_1011d05c @ 0x1011d05c */

void FUN_1011d05c(int param_1,int param_2,uint *param_3,int param_4,short param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 local_c8 [8];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  iVar8 = (int)*param_6;
  FUN_1011c918(auStack_88,param_2,iVar8);
  iVar9 = param_2 + iVar8 * 4;
  FUN_1011c918(auStack_48,iVar9);
  cVar1 = *param_6;
  if (param_4 == 0) {
    FUN_1011c88e(local_c8,(int)cVar1);
    local_c8[0] = 1;
  }
  else {
    FUN_1011c918(local_c8,param_4);
  }
  FUN_1011c918(auStack_a8,auStack_88);
  FUN_1011c918(auStack_68,auStack_48,(int)cVar1);
  FUN_1011cf50(auStack_88,auStack_48,local_c8,param_6);
  (**(code **)(param_6 + 0xa4))(auStack_88,auStack_48,local_c8,param_6);
  FUN_1011cf50(auStack_a8,auStack_68,local_c8,param_6);
  for (iVar5 = param_5 + -2; iVar5 = (int)(short)iVar5, 0 < iVar5; iVar5 = iVar5 + -1) {
    iVar2 = FUN_1011c8c2(param_3,iVar5);
    uVar6 = (uint)(iVar2 == 0);
    puVar10 = auStack_a8 + uVar6 * 0x20;
    puVar7 = auStack_68 + uVar6 * 0x20;
    puVar3 = auStack_a8 + (1 - uVar6) * 0x20;
    puVar4 = auStack_68 + (1 - uVar6) * 0x20;
    FUN_1011cd24(puVar3,puVar4,puVar10,puVar7,param_6);
    FUN_1011cf8e(puVar10,puVar7,puVar3,puVar4,param_6);
  }
  uVar6 = *param_3 & 1;
  puVar4 = auStack_a8 + uVar6 * 0x20;
  puVar3 = auStack_68 + uVar6 * 0x20;
  uVar6 = ~*param_3 & 1;
  FUN_1011cd24(puVar4,puVar3,auStack_a8 + uVar6 * 0x20,auStack_68 + uVar6 * 0x20,param_6);
  FUN_1011c9ee(local_c8,auStack_88,auStack_a8,param_6 + 4,iVar8);
  FUN_1011cb4c(local_c8,local_c8,puVar3,param_6);
  FUN_1011cb4c(local_c8,local_c8,param_2,param_6);
  FUN_1011ce40(local_c8,local_c8,param_6 + 4,iVar8);
  FUN_1011cb4c(local_c8,local_c8,iVar9,param_6);
  FUN_1011cb4c(local_c8,local_c8,puVar4,param_6);
  FUN_1011cf8e(auStack_a8 + uVar6 * 0x20,auStack_68 + uVar6 * 0x20,puVar4,puVar3,param_6);
  FUN_1011cf50(auStack_a8,auStack_68,local_c8,param_6);
  FUN_1011c918(param_1,auStack_a8,iVar8);
  FUN_1011c918(param_1 + iVar8 * 4,auStack_68);
  return;
}

