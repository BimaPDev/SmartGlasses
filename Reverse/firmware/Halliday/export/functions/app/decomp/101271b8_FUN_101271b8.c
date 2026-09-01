/* FUN_101271b8 @ 0x101271b8 */

void FUN_101271b8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  FUN_10125704(param_2,auStack_40);
  uVar2 = FUN_10125436(param_2);
  FUN_1012a862(auStack_40,uVar2,uVar2);
  iVar3 = FUN_1012a896(auStack_50,puVar4,auStack_40);
  if ((iVar3 == 0) && (iVar3 = FUN_10124cb8(param_2,0x80000), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    *(undefined1 **)(param_1 + 8) = auStack_50;
    FUN_10086f50(param_2,0x14,param_1);
    FUN_10086f50(param_2,0x15,param_1);
    FUN_10086f50(param_2,0x16,param_1);
    bVar1 = true;
  }
  iVar3 = FUN_10124cb8(param_2,0x80000);
  if (iVar3 == 0) {
    iVar3 = FUN_1012a896(&local_30,puVar4,param_2 + 0x14);
    if (iVar3 == 0) goto LAB_1012726e;
  }
  else {
    local_30 = *puVar4;
    uStack_2c = puVar4[1];
    uStack_28 = puVar4[2];
    uStack_24 = puVar4[3];
  }
  *(undefined4 **)(param_1 + 8) = &local_30;
  iVar3 = FUN_10126fd2(param_2);
  for (iVar5 = 0; iVar5 != iVar3; iVar5 = iVar5 + 1) {
    FUN_1008b0a0(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar5 * 4));
  }
LAB_1012726e:
  if (bVar1) {
    *(undefined1 **)(param_1 + 8) = auStack_50;
    FUN_10086f50(param_2,0x17,param_1);
    FUN_10086f50(param_2,0x18,param_1);
    FUN_10086f50(param_2,0x19,param_1);
  }
  *(undefined4 **)(param_1 + 8) = puVar4;
  return;
}

